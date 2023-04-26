#pragma once
#include"Excepciones.h"

class ExcepcionCodigo : public Excepciones {
public:
	ExcepcionCodigo();
	virtual ~ExcepcionCodigo();
	string toString() const;
};