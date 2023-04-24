#pragma once
#include <iostream>
#include <sstream>

using namespace std;


class Horario {
private:
    string dia;
    int horaI;
    int horaF;
public:
    Horario();
    Horario(string, int, int);
    virtual ~Horario();
    string getDia();
    int getHoraI();
    int getHoraF();
    void setDia(string);
    void setHoraI(int);
    void setHoraF(int);
    string toString();

};