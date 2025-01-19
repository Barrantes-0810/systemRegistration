#include "system.h"
#include "course.h"
#include "schedule.h"
#include "student.h"

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
		cout <<"Nombre: " << students[i].getStudentName();
		cout << "ID: " << students[i].getStudentId();
		cout << "Carrera: " << students[i].getStudentCareer();
		cout << "Nivel: " << students[i].getStudentLevel();
		cout << "=======================================" << endl;
		return;
	}
}

void System::showCourse()
{
	for (int i = 0; i < coursesCapacity; i++) {
		cout << "Nombre de curso: " << courses[i].getCourseName();
		cout << "Cantidad de creditos: " << courses[i].getCourseCredits();
		cout << "Profesor de curso: " << courses[i].getCourseTeacher();
		cout << "Codigo: " << courses[i].getCourseCode();
		cout << "=======================================" << endl;
		return;
	}
}

void System::showSchedule()
{
	for (int i = 0; i < scheduleCapacity; i++) {
		cout << "Horario" << i + 1 << "." << endl;
		cout << "Dia: " << schedules[i].getDay();
		cout << "Hora de inicio: " << schedules[i].getStartHour();
		cout << "Hora final: " << schedules[i].getEndHour();
		cout << "Aula: " << schedules[i].getClassroom();
		cout << "=======================================" << endl;
		return;
	}
}
void System::registerCourse() {
	int code;
	if ( courses == 0) {
		cout << "Actualmente no hay cursos disponibles para la matricula." << endl;
		return;
	}
	cout << "Por favor, ingrese el codigo del curso en el que desea matricularse: " << endl;
	cin >> code;
	
	bool found = false;

	for (int i = 0; i < coursesCapacity; i++) {
		if (courses[i].getCourseCode() == code) {
			found = true;
			cout << " - Nombre de curso: " << courses[i].getCourseName() << endl;
			cout << " - Profesor asignado: " << courses[i].getCourseTeacher() << endl;
			cout << " - Créditos del curso: " << courses[i].getCourseCredits() << endl;
			break;
		}
	}
	if (!found) {
		cout << "No se encontró ningun curso con el codigo proporcionado" << endl;
	}
	cout << "Matricula realizada con exito. ";
	system("PAUSE");
}

void System::calculateCostCredits() {
	double registrationCost = 0;
	for (int i = 0; i < coursesCapacity; i++) {
		registrationCost += courses[i].getCourseCredits() * creditsCost;
	}
	std::cout << "El costo total de los creditos es: " << registrationCost << endl;
}




