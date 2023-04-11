#include "Nadador.h"

Nadador::Nadador(double mas, double pes, double porc)
	: masaMuscular(mas), peso(pes), porcGrasaCorporal(porc)  {}
Nadador::~Nadador() {}

double Nadador::getMasaMuscular() { return masaMuscular; }
double Nadador::getPeso() { return peso; }
double Nadador::getProcGrasaCorporal() { return porcGrasaCorporal; }

void Nadador::setMasaMuscular(double masa) { masaMuscular = masa; }
void Nadador::setPeso(double pes) { peso = pes; }
void Nadador::setProcGrasaCorporal(double porc) { porcGrasaCorporal = porc; }

string Nadador::toString() {
	stringstream show;
	show << "Mesa Muscular: " << masaMuscular << endl
		<< "Peso: " << peso << endl
		<< "Porcentaje de grasa corporal: " << porcGrasaCorporal << endl;

	return show.str();
}
//HOLAAAAAAAA
