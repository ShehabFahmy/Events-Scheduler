#pragma once
#include "Events.h"
#include "dbConnection.h"
#include <string>
#include <set>
#include<stack>

using namespace std;

struct date_comparator final {
	bool operator()(const Events& left, const Events& right) const {
		return left.start_date < right.start_date;
	}
};

struct time_comparator final {
	bool operator()(const Events& left, const Events& right) const {
		return left.reminder_time < right.reminder_time;
	}
};

class User
{
	string username;
	string password;
	int nEvents;
	//vector<Events> userEvents;

public:
	set<Events, date_comparator> userEventsByDate; // Already sorted by database
	set<Events, time_comparator> userEventsByTime;
	stack<Events> doneEvents;

	bool loggedIn;
	bool signedUp;
	bool addEventFailed;
	User(string user, string pass);
	void login();
	void signup();
	void loadData(); // loads data from the database into a data structure
	void saveData(); // saves data from a data structure into the database
	void addEvent(Events event);
	void deleteEvent(Events event);
	void updateEvent(Events oldEvent, Events newEvent);
	string getUsername();
	~User();
};