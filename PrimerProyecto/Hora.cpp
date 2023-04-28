#include"Hora.h"

Hora::Hora(int h, int m) {
	hora = h;
	minuto = m;
}
Hora::~Hora(){}
int Hora::getHora() { return hora; }
int Hora::getMinuto() { return minuto; }
void Hora::setHora(int h) { hora = h; }
void Hora::setMinuto(int m) { minuto = m; }
string Hora::toString() {
	stringstream s;
	s << hora << ":" << minuto;
	return s.str();
}