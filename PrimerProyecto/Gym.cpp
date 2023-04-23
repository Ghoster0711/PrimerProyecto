#include "Gym.h"

template<class T>
Gym<T>::Gym(){
	nombre = "";
	mensualidad = 0;
	COD = new Contenedor<Deportista*>();
	COC = new Contenedor<Curso*>();
}

template<class T>
Gym<T>::~Gym() {}

template<class T>
Contenedor<Deportista*> Gym<T>::getCOD() { return COD; }

template<class T>
Contenedor<Curso*> Gym<T>::getCOC() { return COC; }

template<class T>
string Gym<T>::getNombre() { return nombre; }
template<class T>
double Gym<T>::getMensualidad() { return mensualidad; }

template<class T>
void Gym<T>::getMensualidad(double men) { mensualidad = men; }
template<class T>
void Gym<T>::setNombre(string nom) { nombre = nom; }


 
