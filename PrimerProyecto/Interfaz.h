#pragma once

#include "Gym.h"
#include <iostream>
#include <sstream>
using namespace std;

class Interfaz {
public:
	static void bienvenida();
	static void menu();

	static void administracionGeneral();
	static void nombreGym(Gym*);
	static void mensualidad(Gym*);

	static void controlDeDeportistas();
	static void ingresaDeportista(Gym*);
	static void modificaDeportista(Gym*);
	static void listaDeporsita(Gym*);
	
	static void controlDeCursos();
	
	static void controlDeGrupos();
	
	static void controlPagos();
};

