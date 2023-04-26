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
	Nodo(T*, Nodo<T>*);
	virtual ~Nodo();

	T* getDato();
	Nodo<T>* getSiguiente();

	void setDato(T*);
	void setSiguiente(Nodo<T>*);
};

template<class T>
Nodo<T>::Nodo() {
	this->dato = NULL;
	this->siguiente = NULL;
}

template<class T>
Nodo<T>::Nodo(T* dato, Nodo<T>* sig) {
	this->dato = dato;
	this->siguiente = sig;
}

template<class T>
Nodo<T>::~Nodo() {
}

template<class T>
T* Nodo<T>::getDato() { return dato; }

template<class T>
Nodo<T>* Nodo<T>::getSiguiente() { return siguiente; }

template<class T>
void Nodo<T>::setDato(T* dato) { this->dato = dato; }

template<class T>
void Nodo<T>::setSiguiente(Nodo<T>* siguiente) { this->siguiente = siguiente; }