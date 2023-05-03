#pragma once

#include "Gym.h"
#include <iostream>
#include <sstream>
using namespace std;

class Interfaz {
public:
	static void bienvenida();
	static void menu();

	//Administracion general
	static void administracionGeneral();
	static void nombreGym(Gym*);
	static void mensualidad(Gym*);

	//Control de Deportistas 
	static void controlDeDeportistas();
	static void ingresaDeportista(Gym*);
	static void modificaDeportista(Gym*);
	static void modificacionesDeportista(Deportista*, int);
	static void listaDeporsitas(Gym*);
	static void detalleDeportistaEspecifico(Gym*);

	//Control de Cursos 
	static void controlDeCursos();
	static void ingresarCurso(Gym*);
	static void reporteDeCurso(Gym*);
	static void modificarCurso(Gym*);
	static void modificacionesCurso(Gym*, int);


	//Control de Grupos 
	static void controlDeGrupos();
	static void ingresarGrupo(Gym*);
	static void modificarGrupo(Gym*);
	static void modificacionesGrupo(Gym*, int);
	static void matricularEnGrupo(Gym*); 
	static void reporteDeGrupo(Gym*);
	static void reporteDeportistasEnGrupo(Gym*);
	static void cancelacionDeMatriculaEnGrupo(Gym*);


	//Control de Pagos 
	static void controlPagos();
	static void registroNuevoPago(Gym*);
	static void reporteDePagosDeportista(Gym*);
};

