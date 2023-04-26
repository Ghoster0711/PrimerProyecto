#pragma once
#include"Grupo.h"

class Curso {
private:
    string codigo;
    string nombre;
    string descripcion;
    string nivel;
    //int cantidadGrupos;
    //Grupo** vec;
public:
    Curso();
    Curso(string, string, string, string);
    virtual ~Curso();
    string getCodigo();
    string getNombre();
    string getDescription();
    string getNivel();

    void setCodigo(string);
    void setNombre(string);
    void setDescripcion(string);
    string toString();
    //void ingresarGrupo(Grupo*);
};