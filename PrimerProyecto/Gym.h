#pragma once
#include "Contenedor.h"
#include "Deportista.h"
#include "Curso.h"

class Gym {
private:
	string nombre;
	double mensualidad;
	Contenedor<Deportista>* COD = new Contenedor<Deportista>();
	Contenedor<Curso>* COC = new Contenedor<Curso>();
public:
	Gym();
	virtual ~Gym();

	Contenedor<Deportista>* getCOD();
	Contenedor<Curso>* getCOC();

	string getNombre();
	double getMensualidad();
	

	void getMensualidad(double);
	void setNombre(string);
	
};

