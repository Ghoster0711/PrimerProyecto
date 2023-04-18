#pragma once
#include <iostream>
#include <sstream>

using namespace std;


class Horario{
    private:
        string dia;
        int hora;
        int minuto;
    public:
        Horario();
        Horario(string, int, int);
        virtual ~Horario();
        string getDia();
        int getHora();
        int getMinuto();
        void setDia(string);
        void setHora(int);
        void setMinuto(int);
        string toString();    
}