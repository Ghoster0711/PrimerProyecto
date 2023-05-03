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

	Nodo<T>* getPrimero();
	Nodo<T>* getActual();
	bool ingresar(T&);
	
	bool encontrarDeportista(string);
	Deportista* retonarDeportista(string);
	void listarDeportistas();

	

	friend ostream& operator<<(ostream& out, const Contenedor<T>&l) {
		Nodo<T>* actual = l->_primero;
		while (actual != NULL) {
			out << *actual->getDato() << endl
				 << endl;
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
Nodo<T>* Contenedor<T>::getPrimero() {
	return _primero;
}

template<class T>
Nodo<T>* Contenedor<T>::getActual() {
	return _actual;
}

template<class T>
bool Contenedor<T>::ingresar(T& dato) {
	_primero = new Nodo<T>((T*)&dato, _primero);
	cantidad++;
	return true;
}

template<class T>
bool Contenedor<T>::encontrarDeportista(string ced) {
	_actual = _primero;
	while (this->_actual != NULL) {
		if (this->_actual->getDato() != NULL) {
			if (this->_actual->getDato()->getCedula() == ced) {
				return true;
			}
		}
		this->_actual = this->_actual->getSiguiente();
	}
	return false;
}

template<class T>
Deportista* Contenedor<T>::retonarDeportista(string ced){
	_actual = _primero;
	while (this->_actual != NULL) {
		if (this->_actual->getDato() != NULL) {
			if (this->_actual->getDato()->getCedula() == ced) {
				return this->_actual->getDato();
			}
		}
		this->_actual = this->_actual->getSiguiente();
	}
	return NULL;
}

template<class T>
void Contenedor<T>::listarDeportistas(){
	_actual = _primero;
	cout << "-----------------------------------------------------------------" << endl;
	while (this->_actual != NULL) {
		if (this->_actual->getDato() != NULL) {
			cout << this->_actual->getDato()->toString()
				<< "-----------------------------------------------------------------" << endl;
		}
		this->_actual = this->_actual->getSiguiente();
	}
}
