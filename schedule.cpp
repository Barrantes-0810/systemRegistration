#include "schedule.h"

Schedule::Schedule()
{
}

Schedule::Schedule(string, float, float, int)
{
}

Schedule::~Schedule()
{
}

void Schedule::setDay(string)
{
	this->day = day;
}

void Schedule::setStartHour(float)
{
	this->startHour = startHour;
}

void Schedule::setEndHour(float)
{
	this->endHour = endHour;
}

void Schedule::setClassroom(int)
{
	this->classroom = classroom;
}

string Schedule::getDay()
{
	return this->day;
}

float Schedule::getStartHour()
{
	return this->startHour;
}

float Schedule::getEndHour()
{
	return this->endHour;
}

int Schedule::getClassroom()
{
	return this->classroom;
}
