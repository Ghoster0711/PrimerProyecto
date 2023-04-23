#pragma once
#include <iostream>
#include <sstream>
#include "Triatlonista.h"
#include "Horario.h"
#include "Fecha.h"

using namespace std;

class Grupo {
private:
	string instructorID;
	string nombreInstructor;
	int cupoMaximo;
	int duracion;
	Horario* horario;
	Fecha* fecInicio;

public:

};