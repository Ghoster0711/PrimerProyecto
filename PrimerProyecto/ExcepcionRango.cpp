#include"ExcepcionRango.h"

ExcepcionRango::ExcepcionRango() : Excepciones() {}
ExcepcionRango::~ExcepcionRango(){}
string ExcepcionRango::toString() const {
	return "ERROR: el valor digitado esta fuera de rango.\n";
}