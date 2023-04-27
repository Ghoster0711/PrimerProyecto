#pragma once
#include<iostream>
#include<sstream>

using namespace std;

class Hora {
private:
	int hora;
	int minuto;
public:
	Hora(int, int);
	virtual ~Hora();
	int getHora();
	int getMinuto();
	void setHora(int);
	void setMinuto(int);
	string toString();
};