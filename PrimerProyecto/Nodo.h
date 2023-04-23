#pragma once

#include "Triatlonista.h"
#include "Curso.h"
#include "HistorialDePago.h"

template<class T>
class Nodo {
private:
	T* dato;
	Nodo<T>* siguiente;
public:
	Nodo();
	Nodo(T*);
	virtual ~Nodo();

	T* getDato();
	Nodo<T>* getSiguiente();

	void setDato(T*);
	void setSiguiente(Nodo<T>*);
};
