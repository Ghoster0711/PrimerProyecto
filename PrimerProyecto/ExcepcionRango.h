#pragma once
#include"Excepciones.h"

class ExcepcionRango : public Excepciones{
public:
	ExcepcionRango();
	virtual ~ExcepcionRango();
	string toString() const;
};