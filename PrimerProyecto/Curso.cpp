#include "Curso.h"

Curso::Curso()
	:codigo(""),nombre(""), descripcion(""), nivel(""){}

Curso::Curso(string cod,string nom, string desc, string niv)
	:codigo(cod), nombre(nom), descripcion(desc), nivel(niv){}

Curso::~Curso() {}
string Curso::getCodigo() { return codigo; }
string Curso::getNombre() { return nombre; }
string Curso::getDescription() { return descripcion; }
string Curso::getNivel() { return nivel; }
void Curso::setCodigo(string cod) { codigo = cod; }
void Curso::setNombre(string nom) { nombre = nom; }
void Curso::setDescripcion(string desc) { descripcion = desc; }
void Curso::setNivel(string niv) { nivel = niv; }
string Curso::toString() {
	stringstream show;
	show << "Nombre del curso:" << nombre << endl
		<< "Nivel del Curso: " << nivel << endl
		<< "Descripcion del curso: " << descripcion << endl;

	return show.str();
}