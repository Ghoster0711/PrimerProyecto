#pragma once
#include "Fecha.h"

class HistorialDePago {
private:
	double montoPagado;
	double porPagar;
	string estado;
	bool pago;
	Fecha* fecha;
public:

	HistorialDePago(double);
	virtual ~HistorialDePago();

	double getMontoPagado();
	double getPorPagar();
	string getEstado();
	bool getPago();
	Fecha* getFecha();

	void setMontoPagado(double);
	void setPorPagar(double);
	void setEstado(string);
	void setFecha(Fecha*);

	string toString();

};