#pragma once
#include "Contenedor.h"

class Gym {
private:
	string nombre;
	double mensualidad;
	/*Contenedor<Nodo<Triatlonista>>* COD;
	Contenedor<Nodo<Curso>>* COC;*/
public:
	Gym();
	virtual ~Gym();

	/*Contenedor<Nodo<Triatlonista>>* getCOD() const;
	Contenedor<Nodo<Curso>>* getCOC() const;*/

	string getNombre();
	double getMensualidad();
	

	void getMensualidad(double);
	void setNombre(string);
	
};

