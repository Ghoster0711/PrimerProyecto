#pragma once
#include "Nodo.h"

template<class T>
class Contenedor{
private:
	Nodo<T>* _primero;
	Nodo<T>* _ultimo;
	int cantidad;
public:
	Contenedor();
	virtual ~Contenedor();

	void ingresar(T*);
};


template<class T>
Contenedor<T>::Contenedor() {
	_primero = NULL;
	_ultimo = NULL;
	cantidad = 0;
}

template<class T>
Contenedor<T>::~Contenedor() {

}

template<class T>
void Contenedor<T>::ingresar(T*) {

}