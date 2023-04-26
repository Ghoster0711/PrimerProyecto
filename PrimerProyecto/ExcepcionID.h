#pragma once
#include"Excepciones.h"

class ExcepcionID : public Excepciones{
public:
	ExcepcionID();
	virtual ~ExcepcionID();
	string toString() const;
};