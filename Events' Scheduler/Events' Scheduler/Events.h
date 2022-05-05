#pragma once
#include<iostream>
#include <ctime>

using namespace std;

class Events
{
public:
	Events();
	Events(string name, string place, double start_date, double end_date, double start_time, double reminder_time);
	string name;
	string place;
	bool done;
	double start_date;
	double end_date;
	double start_time;
	double reminder_time;
	
	~Events(void);
};