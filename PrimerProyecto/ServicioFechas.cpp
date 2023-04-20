#include"ServicioFecha.h"


string ServicioFechas::diferenciaFechas(Fecha* fecha1, Fecha* fecha2) {
	int respFech, respMes;
	int f1 = 0, m1 = 0, a1 = 0;
	stringstream s;

	if (fecha1->getDia() > fecha2->getDia()) {
		f1 = fecha1->getDia() + 30;
		m1 = fecha1->getMes() - 1;
		respFech = fecha1->getDia() - fecha2->getDia();
	}
	else {
		respFech = fecha1->getDia() - fecha2->getDia();
		if (fecha1->getMes() < fecha2->getMes()) {
			m1 = fecha1->getMes() + 12;
			a1 = fecha1->getAnio() - 1;
			respMes = fecha1->getMes() - fecha2->getMes();
		}
		else
			respMes = fecha1->getMes() - fecha2->getMes();
	}
	s << "La diferencia entre " << fecha1->toString() << " y " << fecha2->toString() 
		<< " es de: ";
	if (fecha1->getAnio() - fecha2->getAnio() <= 0) {
		s << respMes << " meses " << " y " << respFech << " dias" << endl;
	}
	else {
		s << fecha1->getAnio() - fecha2->getAnio()
			<< " años, con " << respMes << " meses " << " y " << respFech << " dias" << endl;
	}
	return s.str();

}
//string ServicioFechas::calculoEdad(Fecha* fecha1,Fecha* fecha2){
//	
//} 