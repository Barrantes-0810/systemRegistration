#pragma once
#include <iostream>
using namespace std;
class Schedule
{
private:
	string day;
	float startHour;
	float endHour;
	int classroom;
public:
	Schedule();
	Schedule(string, float, float, int);
	~Schedule();

	void setDay(string);
	void setStartHour(float);
	void setEndHour(float);
	void setClassroom(int);

	string getDay();
	float getStartHour();
	float getEndHour();
	int getClassroom();
};

