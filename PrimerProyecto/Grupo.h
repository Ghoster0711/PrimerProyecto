#pragma once
#include <iostream>
#include <sstream>
#include "Triatlonista.h"
#include "Horario.h"
#include "Fecha.h"

using namespace std;

class Grupo {
private:
	string IDInst;
	string nombreInst;
	int cupoMaximo;
	int duracion;
	Fecha* fecha;
	Horario* horario;
	Triatlonista** vec;
	int cant;
public:
	Grupo(string, string, int, int, Fecha*, Horario*);
	virtual ~Grupo();
	string getIDInstructor();
	string getNombreInstructor();
	int getCupoMaximo();
	int getDuracion();
	Fecha* getFecha();
	Horario* getHorario();
	int getCant();
	void setID(string);
	void setNombre(string);
	void setCupoMaximo(int);
	void setDurarcion(int);
	void setFecha(Fecha*);
	void setHorario(Horario*);
	string toString();
	bool ingresarTritlonista(Triatlonista*);
	bool eliminarTritlonista(string);
	string listaDeMatriculados();
};
