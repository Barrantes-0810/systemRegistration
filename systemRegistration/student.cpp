#include "student.h"

Student::Student()
{
}

Student::Student(string, int, string, int)
{
}

Student::~Student()
{
}

void Student::setStudentName(string)
{
	this->studentName = studentName;
}

void Student::setStudentId(int)
{
	this->studentId = studentId;
}

void Student::setStudentCareer(string)
{
	this->studentCareer = studentCareer;
}

void Student::setStudentLevel(int)
{
	this->studentLevel = studentLevel;
}

string Student::getStudentName()
{
	return this->studentName;
}

int Student::getStudentId()
{
	return this->studentId;
}

string Student::getStudentCareer()
{
	return this->studentCareer;
}

int Student::getStudentLevel()
{
	return this->studentLevel;
}
