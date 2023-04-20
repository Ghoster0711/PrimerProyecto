#include "HistorialDePago.h"

HistorialDePago::HistorialDePago(double monto) {
	montoPagado = 0;
	porPagar = monto;
	estado = "activo";
	pago = true;
	fecha = NULL;
}
HistorialDePago::~HistorialDePago(){}

double HistorialDePago::getMontoPagado() { return montoPagado; }
double HistorialDePago::getPorPagar() { return porPagar; }
string HistorialDePago::getEstado(){ return estado; }
bool HistorialDePago::getPago() { return pago; }
Fecha* HistorialDePago::getFecha() { return fecha; }

void HistorialDePago::setMontoPagado(double monto) { montoPagado = monto; }
void HistorialDePago::setPorPagar(double pagar) { porPagar = pagar; }
void HistorialDePago::setEstado(string estado) { this->estado = estado; }
void HistorialDePago::setFecha(Fecha* fec) { fecha = fec; }

string HistorialDePago::toString() {
	stringstream show;

	show << "-----------------------------------------" << endl
		<< "| Estado: " << estado << endl
		<< "| Monto pagado: " << montoPagado << endl
		<< "| Por pagar: " << porPagar << endl
		<< "| Fecha: " << fecha << endl;

	return show.str();
}