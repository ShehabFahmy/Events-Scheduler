#include "User.h"
#include <ctime>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

User::User(string user, string pass) {
	username = user;
	password = pass;
	loggedIn = false;
	signedUp = false;
	addEventFailed = false;
}

void User::login() {
	dbConnection* dbCon = new dbConnection();
	ResultSet* result = dbCon->dbRetrieve("Select * From users WHERE username = '" + username + "' AND password = '" + password + "';");
	if (!dbCon->fail && result->next() != NULL) {
		loggedIn = true;
	}
	delete dbCon;
	delete result;
}

void User::signup() {
	dbConnection* dbCon = new dbConnection();
	dbCon->dbUpdate("INSERT INTO users(username, password) VALUES ('" + username + "', '" + password + "');");
	if (!dbCon->fail) {
		signedUp = true;
	}
	delete dbCon;
}

void User::loadData() { // db -> ds
	dbConnection* dbCon = new dbConnection();
	ResultSet* result = dbCon->dbRetrieve("SELECT * FROM events WHERE events.username = '" + username + "';");
	while (result->next()) {
		Events currentEvent(
			result->getString(3), result->getString(4),
			DateTime::FromOADate(result->getDouble(5)), DateTime::FromOADate(result->getDouble(6)), 
			DateTime::FromOADate(result->getDouble(7)), DateTime::FromOADate(result->getDouble(8)));
		currentEvent.done = result->getBoolean(2);
		if (currentEvent.done) {
			doneEvents.push_back(currentEvent);
		}
		else {
			DateTime currentDate = DateTime::Now; // expired events
			if (currentEvent.end_date >= currentDate.ToOADate()) {
				pair<double, Events> p1(currentEvent.start_date, currentEvent);
				pair<double, Events> p2(currentEvent.reminder_time, currentEvent);
				userEventsByDate.insert(p1);
				userEventsByTime.insert(p2);
			}
		}
	}
	delete dbCon;
	delete result;
}

void User::saveData() { // delete db -> ds -> db
	dbConnection* dbCon = new dbConnection();
	dbCon->dbUpdate("DELETE FROM events WHERE events.username = '" + username + "';");
	map<double, class Events>::iterator it;
	for (it = userEventsByDate.begin(); it != userEventsByDate.end(); it++) {
		dbCon->dbUpdate("INSERT INTO events(username, done, name, place, start_date, end_date, start_time, reminder_time) VALUES('" + username
			+ "', " + to_string(it->second.done) + ", '" + it->second.name + "', '" + it->second.place + "', '" + to_string(it->second.start_date)
			+ "', '" + to_string(it->second.end_date) + "', '" + to_string(it->second.start_time) + "', '" + to_string(it->second.reminder_time) + "');");
	}
	for (int i = 0; i < doneEvents.size(); i++) {
		doneEvents[i].done = true;
		dbCon->dbUpdate("INSERT INTO events(username, done, name, place, start_date, end_date, start_time, reminder_time) VALUES('" + username
			+ "', " + to_string(doneEvents[i].done) + ", '" + doneEvents[i].name + "', '" + doneEvents[i].place + "', '" + to_string(doneEvents[i].start_date)
			+ "', '" + to_string(doneEvents[i].end_date) + "', '" + to_string(doneEvents[i].start_time) + "', '" + to_string(doneEvents[i].reminder_time) + "');");
	}
	delete dbCon;
}

void User::addEvent(Events event) {
	bool fail = false;
	map<double, class Events>::iterator it;
	for (it = userEventsByDate.begin(); it != userEventsByDate.end(); it++) {
		if ((event.start_date >= it->second.start_date && event.start_date <= it->second.end_date) 
			|| (event.end_date <= it->second.end_date && event.end_date >= it->second.start_date)) {
			MessageBox::Show("An event already exists at that date");
			fail = true;
			break;
		}
	}
	if (!fail) {
		pair<double, Events> p1(event.start_date, event);
		pair<double, Events> p2(event.reminder_time, event);
		userEventsByDate.insert(p1);
		userEventsByTime.insert(p2);
	}
}

void User::deleteEvent(Events event) {
	userEventsByDate.erase(event.start_date);
	userEventsByTime.erase(event.reminder_time);
}

void User::updateEvent(Events oldEvent, Events newEvent) {
	if (userEventsByDate.find(oldEvent.start_date) != userEventsByDate.end()) {
		userEventsByDate.erase(oldEvent.start_date);
		userEventsByTime.erase(oldEvent.reminder_time);
		addEvent(newEvent);
	}
}

string User::getUsername() {
	return username;
}

User::~User() {
	//
}