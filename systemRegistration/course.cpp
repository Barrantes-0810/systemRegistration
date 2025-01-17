#include "Course.h"

Course::Course()
{
}

Course::Course(string, int, string, int)
{
}

Course::~Course()
{
}

void Course::setCourseName(string)
{
	this->courseName = courseName;
}

void Course::setCourseCredits(int)
{
	this->courseCredits = courseCredits;
}

void Course::setCourseTeacher(string)
{
	this->courseTeacher = courseTeacher;
}

void Course::setCourseCode(int)
{
	this->courseCode = courseCode;
}

string Course::getCourseName()
{
	return this->courseName;
}

int Course::getCourseCredits()
{
	return this->courseCredits;
}

string Course::getCourseTeacher()
{
	return this->courseTeacher;
}

int Course::getCourseCode()
{
	return this->courseCode;
}
