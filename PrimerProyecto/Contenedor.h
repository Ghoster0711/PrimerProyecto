#pragma once
#include "Nodo.h"

template<class T>
class Contenedor{
private:
	Nodo<T*>* _primero;
	Nodo<T*>* _ultimo;
	int cantidad;
public:
	Contenedor();
	virtual ~Contenedor();

	void ingresar(T*);
};

