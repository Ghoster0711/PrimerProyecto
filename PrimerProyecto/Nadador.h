#pragma once
#include <iostream>
#include <sstream>
using namespace std;

class Nadador {
private:
	double masaMuscular;
	double peso;
	double porcGrasaCorporal;
public:
	Nadador(double, double, double);
	virtual ~Nadador();

	double getMasaMuscular();
	double getPeso();
	double getProcGrasaCorporal();
	
	void setMasaMuscular(double);
	void setPeso(double);
	void setProcGrasaCorporal(double);

	string toString();
};