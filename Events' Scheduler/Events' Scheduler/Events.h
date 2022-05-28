#pragma once
#include<iostream>
#include <ctime>

using namespace std;

class Events
{
public:
	Events();
	Events(string name, string place, System::DateTime start_date, System::DateTime end_date, System::DateTime start_time, System::DateTime reminder_time);
	string name;
	string place;
	bool done;
	double start_date;
	double end_date;
	double start_time;
	double reminder_time;
	
	~Events(void);
};