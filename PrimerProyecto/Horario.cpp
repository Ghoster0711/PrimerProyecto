#include "Horario.h"

Horario::Horario()
	:dia(""), horaI(0), horaF(0) {}
Horario::Horario(string dia, int horaI, int horaF)
	:dia(dia), horaI(horaI), horaF(horaF) {}
Horario::~Horario() {}
string Horario::getDia() { return dia; }
int Horario::getHoraI() { return horaI; }
int Horario::getHoraF() { return horaF; }
void Horario::setDia(string d) { dia = d; }
void Horario::setHoraI(int h) { horaI = h; }
void Horario::setHoraF(int m) { horaF = m; }
string Horario::toString(){
	stringstream show;
	show << "Dia: " << dia << "\t Hora del curso: " << horaI << " - " << horaF << endl
		<< endl;

	return show.str();
}