#include "student.h"

Student::Student()
{
}

Student::Student(string studentName, int studentId, string studentCareer, int studentLevel)
{
	this->studentName = studentName;
	this->studentId = studentId;
	this->studentCareer = studentCareer;
	this->studentLevel = studentLevel;
}

Student::~Student()
{
}

void Student::setStudentName(string newStudentName)
{
	this->studentName = newStudentName;
}

void Student::setStudentId(int newStudentId)
{
	this->studentId = newStudentId;
}

void Student::setStudentCareer(string newStudentCareer)
{
	this->studentCareer = newStudentCareer;
}

void Student::setStudentLevel(int newStudentLevel)
{
	this->studentLevel = newStudentLevel;
}

void Student::setWithData(bool newWithData)
{
	withData = newWithData;
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

bool Student::getWithData()
{
	return withData;
}
