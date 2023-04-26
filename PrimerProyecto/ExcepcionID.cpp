#include"ExcepcionID.h"

ExcepcionID::ExcepcionID() : Excepciones() {}
ExcepcionID::~ExcepcionID(){}
string ExcepcionID::toString() const {
	return "ERROR: el ID de ese deportista no existe. \n";
}