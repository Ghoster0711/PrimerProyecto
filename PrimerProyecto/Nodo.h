#pragma once

#include "Deportista.h"
#include "Curso.h"

template<class T>
class Nodo {
private:
	T* dato;
	Nodo<T>* siguiente;
public:
	Nodo(T*);
	virtual ~Nodo();

	T* getDato();
	Nodo<T>* getSiguiente();

	void setDato(T*);
	void setSiguiente(Nodo<T>*);
};
