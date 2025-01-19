#include <iostream>
#include "system.h"
#include "course.h"
#include "schedule.h"
#include "student.h"

using namespace std;

void aboutTheDeveloper() {
	cout << "" << endl;
	cout << "*********************************************************************************" << endl;
	cout << "*     Este sistema ha sido desarrollado por Barrantes Granados Joshua Andrey    *" << endl;
	cout << "* estudiante de la prestigiosa Universidad Nacionalde Costa Rica en el ano 2025 *" << endl;
	cout << "*    durante un curso de verano dirigido por el profesor Juan Gamboa Abarca.    *" << endl;
	cout << "*********************************************************************************" << endl;
	cout << "" << endl;
}

void menu() {
	int option = 0;
	int optionTwo = 0;
	int optionThree = 0;
	int optionFour = 0;
	int optionFive = 0;
	System SYSTEM;

	while (option != 5) {
		system("cls");
		cout << "=~=~=~SISTEMA DE MATRICULA=~=~=~" << endl;
		cout << "1.Archivo" << endl;
		cout << "2.Mantenimiento" << endl;
		cout << "3.Matricula" << endl;
		cout << "4.Consulta" << endl;
		cout << "5.Salir" << endl;
		cin >> option;
		switch (option) {
		case 1:
			system("cls");
			cout << "Acerca de" << endl;
			while (optionTwo != 2) {
				cout << "1.Acerca de" << endl;
				cout << "2.Salir" << endl;
				cin >> optionTwo;
				switch (optionTwo) {
				case 1:
					aboutTheDeveloper();
					break;

				case 2:
					system("pause");
					break;
				default:
					break;
				}
			}
			break;
		case 2:////////////////////////////////////////////////////////////////////////////////////////
			system("cls");
			cout << "Mantenimiento" << endl;
			while (optionThree != 4) {
				cout << "1.Registrar estudiantes" << endl;
				cout << "2.Crear cursos" << endl;
				cout << "3.Crear horarios" << endl;
				cout << "4.Salir" << endl;
				cin >> optionThree;
				switch (optionThree) {
				case 1: {
					string studentName = "";
					int studentId = 0;
					string studentCareer = "";
					int studentLevel = 0;

					cout << "Digite el nombre y apellido del estudiante a matricular (Sin espacios): " << endl;
					cin >> studentName;
					cout << "Digite el numero de identificacion del estudiante (Sin espacios): " << endl;
					cin >> studentId;
					cout << "Digite la carrera a la que pertenece el estudiante: " << endl;
					cin >> studentCareer;
					cout << "Digite el nivel academico del estudiante: " << endl;
					cin >> studentLevel;

					System SYSTEM;
					SYSTEM.addStudent(studentName, studentId, studentCareer, studentLevel);
				}
					  cout << endl;
					  break;

				case 2: {
					string courseName = "";
					int courseCredits = 0;
					string courseTeacher = "";
					int courseCode = 0;

					cout << "Ingrese el nombre del curso: " << endl;
					cin >> courseName;
					cout << "Ingrese la cantidad de creditos de este curso: " << endl;
					cin >> courseCredits;
					cout << "Ingrese el nombre del profesor que impartira el curso: " << endl;
					cin >> courseTeacher;
					cout << "ingrese el codigo de curso: " << endl;
					cin >> courseCode;

					System SYSTEM;
					SYSTEM.addCourse(courseName, courseCredits, courseTeacher, courseCode);
				}
					  break;
				case 3: {
					string day = "";
					float startHour = 0.0;
					float endHour = 0.0;
					int classroom = 0;

					cout << "Ingrese el dia que se impartira la clase: " << endl;
					cin >> day;
					cout << "Ingrese la hora de inicio: " << endl;
					cin >> startHour;
					cout << "Ingrese la hora de salida: " << endl;
					cin >> endHour;
					cout << "ingrese el aula donde se dara la clase: " << endl;
					cin >> classroom;

					System SYSTEM;
					SYSTEM.addSchedule(day, startHour, endHour, classroom);
				}
					  break;
				case 4:
					system("pause");
					break;
				default:
					break;
				}
			}
			break;
		case 3:////////////////////////////////////////////////////////////////////////////////////////
			system("cls");
			cout << "Matricula" << endl;
			while (optionFour != 2) {
				cout << "1.Registro de Matricula" << endl;
				cout << "2.Salir" << endl;
				cin >> optionFour;
				switch (optionFour) {
				case 1:
					SYSTEM.registerCourse();
					SYSTEM.calculateCostCredits();
					break;
				case 2:
					system("pause");
					break;
				default:
					break;
				}
			}
			break;
		case 4:////////////////////////////////////////////////////////////////////////////////////////
			system("cls");
			cout << "Consulta" << endl;
			while (optionFive != 3) {
				cout << "1.Lista de estudiantes" << endl;
				cout << "2.Lista de cursos" << endl;
				cout << "3.Salir" << endl;
				cin >> optionFive;
				switch (optionFive) {
				case 1:
					SYSTEM.showStudent();
					break;
				case 2:
					SYSTEM.showCourse();
					break;
				case 3:
					break;
				default:
					break;
				}
			}
			break;
		default:
			break;
		}
	}
}

int main()
{
	menu();
	return 0;
}
