#include"ExcepcionCodigo.h"

ExcepcionCodigo::ExcepcionCodigo() : Excepciones() {}
ExcepcionCodigo::~ExcepcionCodigo(){}
string ExcepcionCodigo::toString() const{
	return "ERROR: el codigo de curso digitado no existe. \n";
}