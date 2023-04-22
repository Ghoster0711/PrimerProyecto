#include "Gym.h"

template<class T>
Gym<T>::Gym(){
	COD = new Contenedor<Deportista*>();

}

template<class T>
Gym<T>::~Gym(){}

template<class T>
Contenedor<Deportista*> Gym<T>::getCOD() { return COD; }

template<class T>
Contenedor<Curso*> Gym<T>::getCOC() { return COC; }