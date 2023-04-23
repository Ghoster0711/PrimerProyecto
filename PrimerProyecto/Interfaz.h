#pragma once
#include <ctime>
#include <iostream>
#include <sstream>
using namespace std;

class Interfaz {
public:
	static void bienvenida(Gym<void>*);
	static void menu();
	static void administracionGeneral();
	static void controlDeDeportistas();
	static void controlDeCursos();
	static void controlDeGrupos();
	static void controlPagos();
};

void Interfaz::bienvenida(Gym* gym){
	int dia, mes, anio;
	cout << "\t\t BIENVENIDOS AL GIMNASIO ";
	if (gym->getNombre() != "")
		cout << gym->getNombre() << endl;
	else
		cout << endl;
	cout << "Ingrese la fecha actual(dd/mm/aaaa): ";

	cin >> dia >> mes >> anio;
	Fecha* f = new Fecha(dia, mes, anio);
	gym->setFec(f);
}

void Interfaz::menu(){
	cout << "\t\t MENU PRINCIPAL" << endl;
	cout << "1. Administracion General" << endl
		<< "2. Control de Deportistas" << endl
		<< "3. Control de Cursos" << endl
		<< "4. Control de Grupos" << endl
		<< "5. Control Pagos" << endl
		<< "6. Guardar en Archivo y salir" << endl;
	cout << endl << "Digite una opcion del menu: ";
}

void Interfaz::administracionGeneral(){
	cout << "\t\t ADMINISTRACION GENERAL" << endl
		<< "1. Nombre del Gimnasio" << endl
		<< "2. Monto de Mensualidad" << endl
		<< "3. Volver" << endl
		<< endl << "Digite una opcion del menu: ";
}

void Interfaz::controlDeDeportistas(){
	system("color 8B");
	cout << "\t\t CONTROL DE DEPORTISTAS" << endl
		<< "1. Ingreso de nuevo deportista" << endl
		<< "2. Modificacion de deportista" << endl
		<< "3. Listado de deportistas" << endl
		<< "4. Detalle de deportista especifico" << endl
		<< "5. Volver" << endl
		<< endl << "Digite una opcion del menu: ";
		
}

void Interfaz::controlDeCursos(){
	system("color 60");
	cout << "\t\t CONTROL DE CURSOS" << endl
		<< "1. Ingreso de nuevo curso" << endl
		<< "2. Reporte de curso especifico" << endl
		<< "3. Modificacion de curso especifico" << endl
		<< "4. Volver" << endl
		<< endl << "Digite una opcion del menu: ";
}

void Interfaz::controlDeGrupos(){
	system("color E5");
	cout << "\t\t CONTROL DE GRUPOS" << endl
		<< "1. Nombre del Gimnasio" << endl
		<< "2. Monto de Mensualidad" << endl
		<< "3. Volver" << endl
		<< endl << "Digite una opcion del menu: ";
}

void Interfaz::controlPagos(){
	system("color 71");
	cout << "\t\t CONTROL PAGOS" << endl
		<< "1. Registro de nuevo pago" << endl
		<< "2. Reporte de pagos por deportista" << endl
		<< "3. Volver" << endl
		<< endl << "Digite una opcion del menu: ";
}


