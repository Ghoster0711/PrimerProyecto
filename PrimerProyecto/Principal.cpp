#include"ServicioFechas.h"
#include"Fecha.h"

using namespace std;

int main() {
	Fecha* f1 = new Fecha(4, 8, 2017);
	Fecha* f2 = new Fecha(18, 2, 2024);

	ServicioFechas sf;
	sf.diferenciaFechas(f1, f2);




	return 0;
}