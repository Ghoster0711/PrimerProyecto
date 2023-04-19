#pragma once
#include "Horario.h"
#include "Deportista.h"


class Curso {
private:
    string nombre;
    string descripcion;
    string nivel;
    int cupoMaximo;
    Deportista** reserva;
    Horario** horario[7];
public:
    Curso();
    Curso(string, string, string, int);
    virtual ~Curso();
    string getNombre();
    string getDescription();
    string getNivel();
    int getCupoMaximo();

    //Hacer los demas metodos

};