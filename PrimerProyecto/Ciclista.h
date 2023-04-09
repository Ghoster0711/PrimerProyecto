#pragma once
#include <iostream>
#include <sstream>
using namespace std;

class Ciclista {
private:
	int horasEntrenadas;
	double temPromedio;
public:
	Ciclista(int, double);
	virtual ~Ciclista();

	int getHorasEntrenadas();
	double getTemPromedio();

	void setHorasEntrenadas(int);
	void setTemPromedio(double);

	string toString();

};