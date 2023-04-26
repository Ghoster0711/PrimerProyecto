#include "Gym.h"


Gym::Gym(){
	nombre = "";
	mensualidad = 0;
	COD = new Contenedor<Deportista>();
	COC = new Contenedor<Curso>();
}


Gym::~Gym() {}


Contenedor<Deportista>* Gym::getCOD() const { return COD; }
Contenedor<Curso>* Gym::getCOC() const { return COC; }


string Gym::getNombre() { return nombre; }

double Gym::getMensualidad() { return mensualidad; }


void Gym::getMensualidad(double men) { mensualidad = men; }

void Gym::setNombre(string nom) { nombre = nom; }


 
