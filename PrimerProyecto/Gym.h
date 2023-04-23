#pragma once
#include "Contenedor.h"

class Gym {
private:
	string nombre;
	double mensualidad;
	Fecha* fec;
	Contenedor<Deportista*> COD;
	Contenedor<Curso*> COC;
public:
	Gym();
	virtual ~Gym();

	Contenedor<Deportista*> getCOD();
	Contenedor<Curso*> getCOC();

	string getNombre();
	double getMensualidad();
	Fecha* getFecha();

	void setFec(Fecha* actual);

	void getMensualidad(double);
	void setNombre(string);
	
};

