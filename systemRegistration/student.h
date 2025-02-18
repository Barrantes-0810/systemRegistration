#pragma once
#include <iostream>
using namespace std;
class Student
{
private:
	string studentName;
	int studentId;
	string studentCareer;
	int studentLevel;
	bool withData = false;
public:
	Student();
	Student(string, int ,string, int);
	~Student();

	void setStudentName(string);
	void setStudentId(int);
	void setStudentCareer(string);
	void setStudentLevel(int);
	void setWithData(bool);

	string getStudentName();
	int getStudentId();
	string getStudentCareer();
	int getStudentLevel();
	bool getWithData();

};

