#include "Nodo.h"

template<class T>
Nodo<T>::Nodo(T* dato) {
	this->dato = dato;
	this->siguiente = nullptr;
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