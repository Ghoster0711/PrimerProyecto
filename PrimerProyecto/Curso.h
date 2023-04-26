#pragma once
#include"Grupo.h"

class Curso {
private:
    string codigo;
    string nombre;
    string descripcion;
<<<<<<< HEAD
    string nivel;
    //int cantidadGrupos;
    //Grupo** vec;
=======
    string nivel; 
>>>>>>> 376e0bf3185368ce02a11d599e391367e07d8fe3

public:
    Curso();
    Curso(string, string, string, string);
    virtual ~Curso();
    string getCodigo();
    string getNombre();
    string getDescription();
    string getNivel();
<<<<<<< HEAD
=======

>>>>>>> 376e0bf3185368ce02a11d599e391367e07d8fe3
    void setCodigo(string);
    void setNombre(string);
    void setDescripcion(string);
    void setNivel(string);
<<<<<<< HEAD
=======

    //Faltan metodos para recorrer los vectores
 
>>>>>>> 376e0bf3185368ce02a11d599e391367e07d8fe3
    string toString();
    //void ingresarGrupo(Grupo*);
};