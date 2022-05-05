#include "Events.h"
#include <stdlib.h>

Events::Events() {
	this->name = "";
	this->place = "";
	this->start_date = 0;
	this->end_date = 0;
	this->start_time = 0;
	this->reminder_time = 0;
}

Events::Events(string name, string place, double start_date, double end_date, double start_time, double reminder_time) {
	this->name = name;
	this->place = place;
	this->start_date = start_date;
	this->end_date = end_date;
	this->start_time = start_time;
	this->reminder_time = reminder_time;
}

Events::~Events(void) {
	//
}