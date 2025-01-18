#include <iostream>
#include "system.h"
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

void mainMenu() {
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
					int studentCapacity;
					cout << "Nota: Debido a que el programa esta en fase beta solo admite 30 cupos:" << endl;
					cout << "Digite la cantida de estudiantes a matricular:" << endl;
					cin >> studentCapacity;
					if(studentCapacity < 31){
						for (int i = 0; i < studentCapacity; i++) {
							string studentName = "";
							int studentId = 0;
							string studentCareer = "";
							int studentLevel = 0;

							cout << "Digite el nombre y apellido del estudiante a matricular: " << endl;
							cin >> studentName;
							cout << "Digite el numero de identificacion del estudiante: " << endl;
							cin >> studentId;
							cout << "Digite la carrera a la que pertenece el estudiante: " << endl;
							cin >> studentCareer;
							cout << "Digite el nivel academico del estudiante: " << endl;
							cin >> studentLevel;

							System SYSTEM;
							SYSTEM.addStudent(studentName, studentId, studentCareer, studentLevel);
						}
					}
					cout << "El programa esta en fase beta, solo permite la matricula a 30 estudiantes." << endl;
				}
					  cout << endl;
					break;

				case 2: {
					int courseCapacity;
					cout << "Nota: Debido a que el programa esta en fase beta solo permite crear 15 cursos." << endl;
					cout << "Digite la cantida de cursos que desea crear: " << endl;
					cin >> courseCapacity;
					if (courseCapacity < 16) {
						for (int i = 0; i < courseCapacity; i++) {
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
					}
					cout << "El programa esta en fase beta, solo permite crear 15 cursos." << endl;
					
				}
					break;
				case 3: {
					int scheduleCapacity;
					cout << "Nota: Debido a que el programa esta en fase beta solo permite crear 15 horarios." << endl;
					cout << "Digite la cantida de horarios que desea crear: " << endl;
					cin >> scheduleCapacity;
					if (scheduleCapacity < 16) {
						for (int i = 0; i < scheduleCapacity; i++) {
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
					}
					cout << "El programa esta en fase beta, solo permite crear 15 horarios." << endl;

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
					//Pendiente
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
			while (optionFive !=3) {
				cout << "1.Estudiantes" << endl;
				cout << "2.Cursos" << endl;
				cout << "3.Salir" << endl;
				cin >> optionFive;
				switch (optionFive) {
				case 1:
				 	//Pendiente
					break;
				case 2:
					//Pendiente
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
	mainMenu();
	return 0;
}
