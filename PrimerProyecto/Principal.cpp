#include "Gym.h"
#include "Interfaz.h"

using namespace std;

int main() {
	bool salir = true;
	int opcion = 0;
	int op = 0;
	Gym* gym = new Gym();
	while (salir) {
		Interfaz::menu();
		cin >> opcion;
		switch (opcion) {
		case 1: {
			Interfaz::administracionGeneral();
			cin >> op;
			switch (op) {
			case 1:
				Interfaz::nombreGym(gym);
				break;
			case 2:
				Interfaz::mensualidad(gym);
				break;
			}
		}break;
		case 2: {
			Interfaz::controlDeDeportistas();
			cin >> op;
			switch (op) {
			case 1:
				Interfaz::ingresaDeportista(gym);
				break;
			case 2:
				Interfaz::modificaDeportista(gym);
				break;
			case 3:
				Interfaz::listaDeporsitas(gym);
				break;
			case 4:
				Interfaz::detalleDeportistaEspecifico(gym);
				break;
			}
		}break;
		case 3: {
			Interfaz::controlDeCursos();
			cin >> op;
			switch (op) {
			case 1:
				Interfaz::ingresarCurso(gym);
				break;
			case 2:
				Interfaz::reporteDeCurso(gym);
				break;
			case 3:
				Interfaz::modificarCurso(gym);
				break;
			}
		}break;
		case 4: {
			Interfaz::controlDeGrupos();
			cin >> op;
			switch (op) {
			case 1:
				Interfaz::ingresarGrupo(gym);
				break;
			case 2:
				Interfaz::modificarGrupo(gym);
				break;
			case 3:
				Interfaz::matricularEnGrupo(gym);
				break;
			case 4:
				Interfaz::reporteDeGrupo(gym);
				break;
			case 5:
				Interfaz::reporteDeportistasEnGrupo(gym);
				break;
			case 6:
				Interfaz::cancelacionDeMatriculaEnGrupo(gym);
				break;
			}
		}break;
		case 5: {
			Interfaz::controlPagos();
			cin >> op;
			switch (op) {
			case 1:
				Interfaz::registroNuevoPago(gym);
				break;
			case 2:
				Interfaz::reporteDePagosDeportista(gym);
				break;
			}
		}break;
		case 6: {
			salir = false;
		}break;
		 }
		system("color 07");
		system("cls");
	}
	return 0;
}