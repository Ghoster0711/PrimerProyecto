#pragma once
#include"Grupo.h"

class Curso {
private:
    string codigo;
    string nombre;
    string descripcion;
    string nivel;
    int cantidadGrupos;
    Grupo* vec;
    int cantD;
    int tamD;
    int cantH;

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
    void ingresarHorario(Horario*);
    void ingresarReserva(Deportista*);
    //Faltan metodos para recorrer los vectores
    string imprimeDeportistas();
    string imprimeHorarios();
    string toString();

    //Hacer los demas metodos

};