#pragma once
#include "Contenedor.h"
template<class T>
class Gym {
private:
	Contenedor<Deportista*> COD;
	Contenedor<Curso*> COC;
public:
	Gym();
	virtual ~Gym();

	Contenedor<Deportista*> getCOD();
	Contenedor<Curso*> getCOC();
};

