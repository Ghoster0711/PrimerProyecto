#pragma once
#include "Contenedor.h"

class Gym {
private:
	string nombre;
	double mensualidad;
	Contenedor<Deportista>* COD;
	Contenedor<Curso>* COC;
public:
	Gym();
	virtual ~Gym();

	Contenedor<Deportista>* getCOD() const;
	Contenedor<Curso>* getCOC() const;

	string getNombre();
	double getMensualidad();


	void setMensualidad(double);
	void setNombre(string);

	string listadoDeportistas();
};