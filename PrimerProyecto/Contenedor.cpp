#include "Contenedor.h"

template<class T>
Contenedor<T>::Contenedor(){
	_primero = new Nodo<T>();
	_ultimo = new Nodo<T>();
	cantidad = 0;
}

template<class T>
Contenedor<T>::~Contenedor(){
	
}

template<class T>
void Contenedor<T>::ingresar(T*) {

}