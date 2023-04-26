#include"ExcepcionGrupoLleno.h"

ExcepcionGrupoLleno::ExcepcionGrupoLleno(): Excepciones() {}
ExcepcionGrupoLleno::~ExcepcionGrupoLleno(){}
string ExcepcionGrupoLleno::toString() const{
	return "ERROR: el grupo digido no posee campos disponibles.\n";
}