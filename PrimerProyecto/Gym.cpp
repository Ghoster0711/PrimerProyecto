#include "Gym.h"


Gym::Gym(){
	nombre = "";
	mensualidad = 0;
	/*COD = new Contenedor<Nodo<Triatlonista>>();
	COC = new Contenedor<Nodo<Curso>>();*/
}


Gym::~Gym() {}


//Contenedor<Nodo<Triatlonista>>* Gym::getCOD() const { return COD; }
//Contenedor<Nodo<Curso>>* Gym::getCOC() const { return COC; }


string Gym::getNombre() { return nombre; }

double Gym::getMensualidad() { return mensualidad; }


void Gym::getMensualidad(double men) { mensualidad = men; }

void Gym::setNombre(string nom) { nombre = nom; }


 
