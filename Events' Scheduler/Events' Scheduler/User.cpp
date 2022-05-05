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
	nEvents = 0;
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

void User::loadData() {
	dbConnection* dbCon = new dbConnection();
	ResultSet* result = dbCon->dbRetrieve("SELECT * FROM events WHERE events.username = '" + username + "';");
	while (result->next()) {
		Events currentEvent(
			result->getString(3), result->getString(4),
			result->getDouble(5), result->getDouble(6), result->getDouble(7), result->getDouble(8));
		currentEvent.done = result->getBoolean(2);
		if (currentEvent.done) {
			doneEvents.push(currentEvent);
		}
		else {
			userEventsByDate.insert(currentEvent);
			userEventsByTime.insert(currentEvent);
		}
		nEvents++;
	}

	/*for (auto x: userEventsByTime) {
		MessageBox::Show(x.reminder_time.ToString());
	}*/

	delete dbCon;
	delete result;
}

void User::saveData() {
	dbConnection* dbCon = new dbConnection();
	dbCon->dbUpdate("DELETE FROM events WHERE events.username = '" + username + "';");
	set<Events, date_comparator>::iterator it;
	for (it = userEventsByDate.begin(); it != userEventsByDate.end(); it++) {
		dbCon->dbUpdate("INSERT INTO events(username, done, name, place, start_date, end_date, start_time, reminder_time) VALUES('" + username
			+ "', " + to_string(it->done) + ", '" + it->name + "', '" + it->place + "', '" + to_string(it->start_date)
			+ "', '" + to_string(it->end_date) + "', '" + to_string(it->start_time) + "', '" + to_string(it->reminder_time) + "');");
	}
	stack<class Events> temp;
	while (!doneEvents.empty()) {
		doneEvents.top().done = true;
		dbCon->dbUpdate("INSERT INTO events(username, done, name, place, start_date, end_date, start_time, reminder_time) VALUES('" + username
			+ "', " + to_string(doneEvents.top().done) + ", '" + doneEvents.top().name + "', '" + doneEvents.top().place + "', '" + to_string(doneEvents.top().start_date)
			+ "', '" + to_string(doneEvents.top().end_date) + "', '" + to_string(doneEvents.top().start_time) + "', '" + to_string(doneEvents.top().reminder_time) + "');");
		temp.push(doneEvents.top());
		doneEvents.pop();
	}
	while (!temp.empty()) {
		doneEvents.push(temp.top());
		temp.pop();
	}
	delete dbCon;
}

void User::addEvent(Events event) {
	/*time_t now = time(0);
	if (event.start_date < ) {
		MessageBox::Show("Please enter a valid date!");
	}
	else if (userEventsByDate.find(event) == userEventsByDate.end()) {
		userEventsByDate.insert(event);
		userEventsByTime.insert(event);
		nEvents++;
	}*/
	addEventFailed = false;
	int countBefore = userEventsByDate.size();
	userEventsByDate.insert(event); //
	userEventsByTime.insert(event); //
	int countAfter = userEventsByDate.size();
	if (countBefore == countAfter) {
		addEventFailed = true;
	}
	else {
		nEvents++; //
	}
}

void User::deleteEvent(Events event) {
	userEventsByDate.erase(event);
	userEventsByTime.erase(event);
	nEvents--;
}

void User::updateEvent(Events oldEvent, Events newEvent) {
	if (userEventsByDate.find(oldEvent) != userEventsByDate.end()) {
		userEventsByDate.erase(oldEvent);
		userEventsByTime.erase(oldEvent);
		addEvent(newEvent); // to check the conditions in addEvent()
		//userEventsByDate.insert(newEvent);
		//userEventsByTime.insert(newEvent);
	}
}

string User::getUsername() {
	return username;
}

User::~User() {
	//
}