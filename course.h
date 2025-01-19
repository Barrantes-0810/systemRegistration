 #pragma once
#include <iostream>
#include "schedule.h"
using namespace std;
class Course
{
private:
	string courseName;
	int courseCredits;
	string courseTeacher;
	int courseCode;
	
public:
	Course();
	Course(string, int, string, int);
	~Course();
	void setCourseName(string);
	void setCourseCredits(int);
	void setCourseTeacher(string);
	void setCourseCode(int);

	string getCourseName();
	int getCourseCredits();
	string getCourseTeacher();
	int getCourseCode();
};


