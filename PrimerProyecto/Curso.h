#pragma once
#include"Grupo.h"

class Curso {
private:
    string codigo;
    string nombre;
    string descripcion;
    string nivel; 

public:
    Curso();
    Curso(string, string, string, int);
    virtual ~Curso();
    string getCodigo();
    string getNombre();
    string getDescription();
    string getNivel();

    void setCodigo(string);
    void setNombre(string);
    void setDescripcion(string);
    void setNivel(string);

    //Faltan metodos para recorrer los vectores
 
    string toString();

    //Hacer los demas metodos

};