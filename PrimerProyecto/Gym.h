#pragma once
#include "Contenedor.h"

class Gym {
private:
	string nombre;
	double mensualidad;
	//Contenedor<Deportista*> COD;
	//Contenedor<Curso*> COC;
public:
	Gym();
	virtual ~Gym();

	//Contenedor<Deportista>* getCOD();
	//Contenedor<Curso>* getCOC();

	string getNombre();
	double getMensualidad();
	

	void getMensualidad(double);
	void setNombre(string);
	
};

