#include "Ciclista.h"

Ciclista::Ciclista(int horas, double tem)
:horasEntrenadas(horas), temPromedio(tem) {}
Ciclista::~Ciclista(){}

int Ciclista::getHorasEntrenadas() { return horasEntrenadas; }
double Ciclista::getTemPromedio() { return temPromedio; }

void Ciclista::setHorasEntrenadas(int horas) { horasEntrenadas = horas; }
void Ciclista::setTemPromedio(double tem) { temPromedio = tem; }

string Ciclista::toString(){
	stringstream show;
	show << "| Horas Entrenadas: " << horasEntrenadas << endl
		<< "| Tem.. Promedio: " << temPromedio << endl;
	return show.str();
}
