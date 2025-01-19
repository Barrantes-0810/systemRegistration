#include "system.h"
#include "course.h"
#include "schedule.h"
#include "student.h"



System::System()
{
	void addStudent();
	void addCourse();
	void addSchudule();
}

System::~System()
{
}

void System::addStudent()
{
	string studentName = "";
	int studentId = 0;
	string studentCareer = "";
	int studentLevel = 0;

	cout << "Digite el nombre y apellido del estudiante a matricular: " << endl;
	cin.ignore();
	cin.clear();
	getline(cin, studentName);
	cin.ignore();
	cout << "Digite el numero de identificacion del estudiante: " << endl;
	cin >> studentId;
	cin.ignore();
	cout << "Digite la carrera a la que pertenece el estudiante: " << endl;
	getline(cin, studentCareer);
	cin.ignore();
	cout << "Digite el nivel academico del estudiante: " << endl;
	cin >> studentLevel;
	for (int i = 0; i < studentCapacity; i++) {
		if (!students[i].getWithData()) {
			students[i].setStudentName(studentName);
			students[i].setStudentId(studentId);
			students[i].setStudentCareer(studentCareer);
			students[i].setStudentLevel(studentLevel);
			students[i].setWithData(true);
			
			cout << "Estudiante registrado exitosamente." << endl;
		}	
	}
	cout << "El programa esta en fase beta, solo permite la matricula a 30 estudiantes." << endl;
}

void System::addCourse(string courseName, int courseCredist, string courseTeacher, int courseCode)
{
	for (int i = 0; i < coursesCapacity; i++) {
		if (courses[i].getCourseName().empty()) {
			courses[i].setCourseName(courseName);
			courses[i].setCourseCredits(courseCredist);
			courses[i].setCourseTeacher(courseTeacher);
			courses[i].setCourseCode(courseCode);

			cout << "Curso ingresado exitosamente." << endl;
			return;
		}
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
		if (students[i].getStudentName().empty()) {
			cout << "Nombre: " << students[i].getStudentName() << endl;
			cout << "ID: " << students[i].getStudentId() << endl;
			cout << "Carrera: " << students[i].getStudentCareer() << endl;
			cout << "Nivel: " << students[i].getStudentLevel() << endl;
		}
	}
}

void System::showCourse()
{
	for (int i = 0; i < coursesCapacity; i++) {
		cout << "Nombre de curso: " << courses[i].getCourseName();
		cout << "Cantidad de creditos: " << courses[i].getCourseCredits();
		cout << "Profesor de curso: " << courses[i].getCourseTeacher();
		cout << "Codigo: " << courses[i].getCourseCode();
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
		return;
	}
}

void System::calculateCostCredits() {
	double registrationCost = 0;
	for (int i = 0; i < coursesCapacity; i++) {
		registrationCost += courses[i].getCourseCredits() * creditsCost;
	}
	std::cout << "El costo total de los creditos es: " << registrationCost << endl;
}

void System::registerCourse() {
	int code;
	for (int index = 0; index < coursesCapacity; index++) {
		if (courses[index].getAvaibleCourse() == false) {
			cout << "Actualmente no hay cursos disponibles para la matricula." << endl;
			return;
		}
	}
	
	cout << "Por favor, ingrese el codigo del curso en el que desea matricularse: " << endl;
	cin >> code;
	
	bool found = false;
	int index;
	for (index = 0; index < coursesCapacity; index++) {
		if (courses[index].getCourseCode() == code) {
			found = true;
			cout << " - Nombre de curso: " << courses[index].getCourseName() << endl;
			cout << " - Profesor asignado: " << courses[index].getCourseTeacher() << endl;
			cout << " - Créditos del curso: " << courses[index].getCourseCredits() << endl;
			break;
		}
	}
	if (!found) {
		cout << "No se encontro ningun curso con el codigo proporcionado" << endl;
		return;
	}
	cout << "Matricula realizada con exito. ";
	calculateCostCredits();
	system("pause");
}