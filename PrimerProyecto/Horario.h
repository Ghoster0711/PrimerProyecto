#pragma once
#include <iostream>
#include <sstream>
#include"Hora.h"

using namespace std;


class Horario {
private:
    char dia;
    Hora* horaI;
    Hora* horaF;
public:
    Horario();
    Horario(char, Hora*, Hora*);
    virtual ~Horario();
    char getDia();
    Hora* getHoraI();
    Hora* getHoraF();
    void setDia(char);
    void setHoraI(Hora*);
    void setHoraF(Hora*);
    string toString();

};