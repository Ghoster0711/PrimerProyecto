#pragma once
#include <iostream>
#include <sstream>
#include "Triatlonista.h"
#include "Horario.h"
#include "Fecha.h"

using namespace std;

class Grupo {
private:
	string instructorID();
	string nombreInstructor();

	void setID(string);
	void setNombre(string);
	void setCupoMaximo(int);
	void setDurarcion(int);
	void setFecha(Fecha*);
	void setHorario(Horario*);

};