#pragma once
#include "Fecha.h"
#include "Ciclista.h"
#include "Nadador.h"


class Deportista {
protected:
	string cedula;
	string nombre;
	string telefono;
	Fecha* fecha;
public:
	Deportista(string, string, string, Fecha*);
	virtual ~Deportista();

	virtual string getCedula() = 0;
	virtual string getNombre() = 0;
	virtual string getTelefono() = 0;
	virtual Fecha* getFecha() = 0;
	virtual char getSexo() = 0;
	virtual double getEstatura() = 0;
	virtual int getCantParticEnIronMan() = 0;
	virtual int getCantTriatGanados() = 0;
	virtual Nadador* getNadador() = 0;
	virtual Ciclista* getCiclista() = 0;

	virtual void setCedula(string) = 0;
	virtual void setNombre(string) = 0;
	virtual void setTelefono(string) = 0;
	virtual void setFecha(Fecha*) = 0;
	virtual void setSexo(char) = 0;
	virtual void setEstatura(double) = 0;
	virtual void setCantParticEnIronMan(int) = 0;
	virtual void setCantTriatGanados(int) = 0;
	virtual void setNadador(Nadador*) = 0;
	virtual void setCiclista(Ciclista*) = 0;

	virtual string toString() = 0;
	
};