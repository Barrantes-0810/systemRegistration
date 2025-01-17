#include <iostream>
#include "system.h"
using namespace std;

void aboutTheDeveloper() {
	cout << "" << endl;
	cout << "   Este sistema ha sido desarrollado por Barrantes Granados Joshua Andrey" << endl;
	cout << "estudiante de la prestigiosa Universidad Nacionalde Costa Rica en el ano 2025" << endl;
	cout << "   durante un curso de verano dirigido por el profesor Juan Gamboa Abarca" << endl;
	cout << "" << endl;
}
/*
void mainMenu() {
	int option = 0;
	int optionTwo = 0;
	int optionThree = 0;
	int optionFour = 0;
	int optionFive = 0;
	System SYSTEM;

	while (option != 5) {
		system("cls");
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
		case 2:
			system("cls");
			cout << "Mantenimiento" << endl;
			while (optionThree != 4) {
				cout << "1.Estudiantes" << endl;
				cout << "2.Crear Horarios" << endl;
				cout << "3.Crear Cursos" << endl;
				cout << "4.Salir" << endl;
				cin >> optionThree;
				switch (optionThree) {
				case 1: {
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
					break;===========================================================================================

				case 2: {
					int startHour = 0;
					int endHour = 0;
					string day = "";
					int classroom = 0;

					cout << "Digite la hora de inico de la clase: " << endl;
					cin >> startHour;
					cout << "Digite la hora de salida de la clase: " << endl;
					cin >> endHour;
					cout << "Digite el dia que se impartira la clase: " << endl;
					cin >> day;
					cout << "Ingrese el numero de aula donde se dara la clase: " << endl;
					cin >> classroom;
					SYSTEM.createSchedule(startHour, endHour, day, classroom);
				}
					break;
				case 3: {

					SYSTEM.addCourse();
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
		case 3:
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
		case 4:
			system("cls");
			cout << "Consulta" << endl;
			while (optionFive !=3) {
				cout << "1.Estudiantes" << endl;
				cout << "2.Cursos" << endl;
				cout << "3.Salir" << endl;
				cin >> optionFive;
				switch (optionFive) {
				case 1:
					SYSTEM.printStudentList();
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
*/


int main()
{
	return 0;
}
