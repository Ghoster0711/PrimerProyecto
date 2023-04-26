#include "Curso.h"

Curso::Curso()
<<<<<<< HEAD
	:codigo(""),nombre(""), descripcion(""), nivel(""){}

Curso::Curso(string cod,string nom, string desc, string niv)
	:codigo(cod), nombre(nom), descripcion(desc), nivel(niv){}

Curso::~Curso() {}
string Curso::getCodigo() { return codigo; }
=======
	:nombre(""), descripcion(""), nivel("") {


}
Curso::Curso(string nom, string desc, string niv, int cupo)
	:nombre(nom), descripcion(desc), nivel(niv){

}
Curso::~Curso() {

}

string Curso::getCodigo() { return codigo; }

>>>>>>> 376e0bf3185368ce02a11d599e391367e07d8fe3
string Curso::getNombre() { return nombre; }

string Curso::getDescription() { return descripcion; }

string Curso::getNivel() { return nivel; }
<<<<<<< HEAD
void Curso::setCodigo(string cod) { codigo = cod; }
=======

void Curso::setCodigo(string cod) { codigo = cod; }

>>>>>>> 376e0bf3185368ce02a11d599e391367e07d8fe3
void Curso::setNombre(string nom) { nombre = nom; }

void Curso::setDescripcion(string desc) { descripcion = desc; }

void Curso::setNivel(string niv) { nivel = niv; }
<<<<<<< HEAD
string Curso::toString() {
	stringstream show;
	show << "Nombre del curso:" << nombre << endl
		<< "Nivel del Curso: " << nivel << endl
		<< "Descripcion del curso: " << descripcion << endl;
=======


string Curso::toString() {
	stringstream show;
	show << "------------------------------------------------" << endl
		<< "| Codigo del curso: " << codigo << endl
		<< "| Nombre del curso:" << nombre << endl
		<< "| Descripcion del curso: " << descripcion << endl
		<< "| Nivel del curso: " << nivel << endl;
>>>>>>> 376e0bf3185368ce02a11d599e391367e07d8fe3

	return show.str();
}