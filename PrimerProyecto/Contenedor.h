#pragma once
#include "Nodo.h"
#include "Iterador.h"

template<class T>
class Contenedor{
private:
	Nodo<T>* _primero;
	int cantidad;
	Iterador<T>* ite;
public:
	Contenedor();
	virtual ~Contenedor();

	bool ingresar(T*);
	friend ostream& operator<<(ostream& out, const Contenedor<T>& l) {
		Nodo<T>* actual = l._primero;
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
	cantidad = 0;
	ite = NULL;
}

template<class T>
Contenedor<T>::~Contenedor() {

}

template<class T>
bool Contenedor<T>::ingresar(T* dato) {
	_primero = new Nodo<T>(dato, _primero);
	cantidad++;
	return true;
}

