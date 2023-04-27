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
	//Control de Deportistas 
	static void controlDeDeportistas();
	static void ingresaDeportista(Gym*);
	static void modificaDeportista(Gym*);
	static void listaDeporsita(Gym*);

	//Control de Cursos 
	static void controlDeCursos();
	static void ingresarCurso(Gym*);
	static void reporteDeCurso(Gym*);

	//Control de Grupos 
	static void controlDeGrupos();
	static void ingresarGrupo();
	static void modificarGrupo();
	static void matricularEnGrupo(); 
	static void reporteDeGrupo();
	static void reporteDeportistasEnGrupos();
	static void cancelacionDeMatriculaEnGrupo();


	//Control de Pagos 
	static void controlPagos();
	static void nuevoPago();
	static void reporteDePagosDeportista();
};

