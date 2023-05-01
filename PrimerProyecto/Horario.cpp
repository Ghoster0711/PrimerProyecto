#include "Horario.h"

Horario::Horario() : dia(' '), horaI(NULL), horaF(NULL) {}
Horario::Horario(char dia, Hora* horaI, Hora* horaF) :dia(dia), horaI(horaI), horaF(horaF) {}
Horario::~Horario() {}
char Horario::getDia() { return dia; }
Hora* Horario::getHoraI() { return horaI; }
Hora* Horario::getHoraF() { return horaF; }
void Horario::setDia(char d) { dia = d; }
void Horario::setHoraI(Hora* h) { horaI = h; }
void Horario::setHoraF(Hora* m) { horaF = m; }
string Horario::toString(){
	stringstream show;
	show << "Dia: " << dia << "\t Hora del curso: " << horaI->toString() << " - " << horaF->toString() << endl
		<< endl;

	return show.str();
}