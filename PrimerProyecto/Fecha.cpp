#include "Fecha.h"

Fecha::Fecha(int d, int m, int a) {
	dia = d;
	mes = m;
	anio = a;
}
Fecha::~Fecha(){ }

int Fecha::getDia() { return dia; }
int Fecha::getMes() { return mes; }
int Fecha::getAnio() { return anio; }

void Fecha::setDia(int d) { dia = d; }
void Fecha::setMes(int m) { mes = m; }
void Fecha::setAnio(int a) { anio = a; }

string Fecha::toString() {
	stringstream show;

	show << "Dia: " << dia << " Mes: " << mes << " Anio: " << anio;

	return show.str();
}