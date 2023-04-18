#pragma once
#include "Horario.h"



class Curso{
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
        

}