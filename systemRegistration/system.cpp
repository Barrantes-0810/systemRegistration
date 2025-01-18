#include "system.h"

void System::addStudent(string studentName, int studentId, string studentCareer, int studentLevel)
{
	for (int i = 0; i < studentCapacity; i++) {
		students[i].setStudentName(studentName);
		students[i].setStudentId(studentId);
		students[i].setStudentCareer(studentCareer);
		students[i].setStudentLevel(studentLevel);
		return;
	}
	cout << "El programa esta en fase beta, solo permite la matricula a 30 estudiantes." << endl;
}

void System::addCourse(string courseName, int courseCredist, string courseTeacher, int courseCode)
{
	for (int i = 0; i < coursesCapacity; i++) {
		courses[i].setCourseName(courseName);
		courses[i].setCourseCredits(courseCredist);
		courses[i].setCourseTeacher(courseTeacher);
		courses[i].setCourseCode(courseCode);
		return;
	}
	cout << "El programa esta en fase beta, solo permite crear 15 cursos." << endl;
}

void System::addSchedule(string day, float startHour, float endHour, int classroom)
{
	for (int i = 0; i < scheduleCapacity; i++) {
		schedules[i].setDay(day);
		schedules[i].setStartHour(startHour);
		schedules[i].setEndHour(endHour);
		schedules[i].setClassroom(classroom);
		return;
	}
	cout << "El programa esta en fase beta, solo permite crear 15 horarios." << endl;
}

void System::showStudent()
{
	for (int i = 0; i < studentCapacity; i++) {
		students[i].getStudentName();
		students[i].getStudentId();
		students[i].getStudentCareer();
		students[i].getStudentLevel();
		return;
	}
}

void System::showCourse()
{
	for (int i = 0; i < coursesCapacity; i++) {
		courses[i].getCourseName();
		courses[i].getCourseCredits();
		courses[i].getCourseTeacher();
		courses[i].getCourseCode();
		return;
	}
}

void System::showSchedule()
{
	for (int i = 0; i < scheduleCapacity; i++) {
		schedules[i].getDay();
		schedules[i].getStartHour();
		schedules[i].getEndHour();
		schedules[i].getClassroom();
		return;
	}
}




