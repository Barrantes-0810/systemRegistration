#pragma once
#ifndef SYSTEM_H
#define SYSTEM_H
#include <iostream>
#include <string>
#include "student.h"
#include "course.h"
#include"schedule.h"
const int studentCapacity = 30;
const int coursesCapacity = 15;
const int scheduleCapacity = 15;
const int creditsCost = 12000;

class System
{
private:
	Student students[studentCapacity];
	Course courses[coursesCapacity];
	Schedule schedules[scheduleCapacity];
public:
	System();
	~System();

	void addStudent();
	void addCourse(string, int, string, int);
	void addSchedule(string, float, float, int);
	void showStudent();
	void showCourse();
	void showSchedule();
	void registerCourse();
    void calculateCostCredits();

	
};

#endif 