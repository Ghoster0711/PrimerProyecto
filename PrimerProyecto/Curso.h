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
    int cant;
    int tam;
public:
    Curso();
    Curso(string, string, string, int);
    virtual ~Curso();
    string getNombre();
    string getDescription();
    string getNivel();
    int getCupoMaximo();
    void setNombre(string);
    void setDescripcion(string);
    void setNivel(string);
    void setCupoMaximo(int);
    //Faltan metodos para recorrer los vectores
    string toString();

    //Hacer los demas metodos

};