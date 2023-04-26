#pragma once
#include"Excepciones.h"

class ExcepcionGrupoLleno : public Excepciones{
public:
	ExcepcionGrupoLleno();
	virtual ~ExcepcionGrupoLleno();
	string toString() const;
};