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

Events::Events(string name, string place, System::DateTime start_date, System::DateTime end_date, System::DateTime start_time, System::DateTime reminder_time) {
	this->name = name;
	this->place = place;
	this->start_date = start_date.ToOADate();
	this->end_date = end_date.ToOADate();
	this->start_time = start_time.ToOADate();
	this->reminder_time = reminder_time.ToOADate();
}

Events::~Events(void) {
	//
}