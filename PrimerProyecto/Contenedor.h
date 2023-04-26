#pragma once
#include "Nodo.h"
#include "Iterador.h"

template<class T>
class Contenedor{
private:
	Nodo<T>* _primero;
	Iterador<T>* ite;
	int cantidad;
public:
	Contenedor();
	virtual ~Contenedor();

	bool ingresar(T*);
	void visualizar();
};


template<class T>
Contenedor<T>::Contenedor() {
	_primero = NULL;
	ite = new Iterador(_primero);
	cantidad = 0;
}

template<class T>
Contenedor<T>::~Contenedor() {

}

template<class T>
bool Contenedor<T>::ingresar(T* dato) {
	_primero = new Nodo<T>(dato, _primero);
	return true;
}

template<class T>
void Contenedor<T>::visualizar() {
	ite->visualizar(_primero);
}