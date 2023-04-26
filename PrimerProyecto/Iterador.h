#pragma once
#include"Nodo.h"
template<class T>
class Iterador
{
private:
	Nodo<T>* pNodo;  //es el puntero al que esta viendo en ese momento (current)
public:
	Iterador();
	Iterador(Nodo<T>*);
	virtual~Iterador();
	Nodo* getPNodo();
	Iterador<T>* operator=(Iterador*);    //asigna un iterador a otro
	bool operator !=(Iterador*);   //compara dos iteradores para ver si es el mismo
	T& operator  *();    //obtiene el elemento que ve y lo retorna 
	void operator ++();  //se pasa de un elemento a otro
	//void operator()();   
};
template<class T>
Iterador<T>::Iterador()  //Iterador que ve siempre al final
{
	pNodo = NULL;
}
template<class T>
Iterador<T>::Iterador(Nodo<T>* aux)
{
	pNodo = aux;
}
template<class T>
Iterador<T>::~Iterador()
{

}
template<class T>
Nodo<T>* Iterador<T>::getPNodo()
{
	return pNodo;
}
template<class T>
Iterador<T>* Iterador<T>::operator=(Iterador* its)  //operador de asignacion
{
	if (its != NULL)
	{
		return new Iterador(its->pNodo);
	}
	return NULL;
}
template<class T>
bool Iterador<T>::operator !=(Iterador* aux) //Revisar este metodo
{
	if (aux != NULL)
	{
		if (this->pNodo == NULL && aux->pNodo == NULL)
			return false;
		if (this->pNodo != aux->pNodo)
			return true;
	}
	return true;
}
template<class T>
T& Iterador<T>::operator  *()
{
	return pNodo->getDato();
}
template<class T>
void Iterador<T>::operator ++()   //el iterador pasa al otro elemento
{
	if (pNodo != NULL)
	{
		pNodo = pNodo->getSiguiente();
	}
}
