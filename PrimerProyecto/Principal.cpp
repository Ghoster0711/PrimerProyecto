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
			case 1:
				Interfaz::administracionGeneral();
				cin >> op;
				switch (op) {
				case 1:
					Interfaz::nombreGym(gym);
					break;
				case 2:
					Interfaz::mensualidad(gym);
					break;
				case 3:
					break;
				}
			break;
			case 2:
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
					break;
				case 4:
					break;
				case 5:
					break;
				}
			break;  
			case 3:
				Interfaz::controlDeCursos();
				cin >> op;
				switch (op) {
				case 1:
					break;
				case 2:
					break;
				case 3:
					break;
				case 4:
					break;
				}
			break;
			case 4:
				Interfaz::controlDeGrupos();
				cin >> op;
				switch (op) {
				case 1:
					break;
				case 2:
					break;
				case 3:
					break;
				}
			break;
			case 5:
				Interfaz::controlPagos();
				cin >> op;
				switch (op) {
				case 1:
					break;
				case 2:
					break;
				case 3:
					break;
				}
			break;
			case 6:
				salir = false;
			break;
		}
		system("color 07");
		system("cls");
	}



	return 0;
}