#include"Fecha.h"

class ServicioFechas {
private:
	Fecha* fecha1;
	Fecha* fecha2;
public:
	ServicioFechas(Fecha*, Fecha*);
	virtual ~ServicioFechas();
	string diferenciaFechas();
	string calculoEdad();
	string toString();
};