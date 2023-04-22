#pragma once
#include <iostream>
#include <sstream>
using namespace std;

class Interfaz {
public:
	static void bienvenida();
	static void menu();
};

void Interfaz::bienvenida(){}
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