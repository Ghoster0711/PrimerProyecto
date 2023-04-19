#include "Horario.h"

Horario::Horario()
	:dia(""), hora(0), minuto(0) {}
Horario::Horario(string dia, int hora, int minuto)
	: dia(dia), hora(hora), minuto(minuto) {}
Horario::~Horario() {	}
string Horario::getDia() { return dia; }
int Horario::getHora() { return hora; }
int Horario::getMinuto() { return minuto; }
void Horario::setDia(string d) { dia = d; }
void Horario::setHora(int h) { hora = h; }
void Horario::setMinuto(int m) { minuto = m; }
string Horario::toString(){
	stringstream show;

	show << "Dia: " << dia << "\t Hora del curso: " << hora << ":" << minuto << endl;

	return show.str();
}