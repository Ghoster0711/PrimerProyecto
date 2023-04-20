#pragma once
#include "Deportista.h"	

class Corredor: public Deportista {
protected:
	char sexo;
	double estatura;
public:
	Corredor(string, string, string, Fecha*, char, double);
	virtual ~Corredor();		


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
	virtual double getMasaMuscular() = 0;
	virtual double getPeso() = 0;
	virtual double getProcGrasaCorporal() = 0;
	virtual int getHorasEntrenadas() = 0;
	virtual double getTemPromedio() = 0;

	virtual void setHorasEntrenadas(int) = 0;
	virtual void setTemPromedio(double) = 0;
	virtual void setMasaMuscular(double) = 0;
	virtual void setPeso(double) = 0;
	virtual void setProcGrasaCorporal(double) = 0;
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