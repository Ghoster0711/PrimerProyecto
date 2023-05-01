#pragma once
#include "Nodo.h"
#include "Iterador.h"

template<class T>
class Contenedor{
private:
	Nodo<T>* _primero;
	Nodo<T>* _actual;
	int cantidad;
public:
	Contenedor();
	virtual ~Contenedor();

	Nodo<T>* getNodo();
	bool ingresar(const T&);
	
	bool encontrarDeportista(Contenedor<Deportista>*, string);

	friend ostream& operator<<(ostream& out, const Contenedor<T>*l) {
		Nodo<T>* actual = l->_primero;
		while (actual != NULL) {
			out << *actual->getDato() << endl
				<< "#####################################" << endl;
			actual = actual->getSiguiente();
		}
		return out;
	}
};


template<class T>
Contenedor<T>::Contenedor() {
	_primero = NULL;
	_actual = NULL;
	cantidad = 0;
}

template<class T>
Contenedor<T>::~Contenedor() {}

template<class T>
Nodo<T>* Contenedor<T>::getNodo() {
	return _primero;
}

template<class T>
bool Contenedor<T>::ingresar(const T& dato) {
	_primero = new Nodo<T>((T*)&dato, _primero);
	cantidad++;
	return true;
}

template<class T>
bool Contenedor<T>::encontrarDeportista(Contenedor<Deportista>* con, string ced) {
	con->_actual = con->_primero;
	Deportista* d;
	while (con->_actual != NULL) {
		if (con->_actual->getDato() != NULL) {
			d = con->_actual->getDato();
			if (d->getCedula() == ced) {
				return true;
			}
		}
		con->_actual = con->_actual->getSiguiente();
	}
	return false;
}