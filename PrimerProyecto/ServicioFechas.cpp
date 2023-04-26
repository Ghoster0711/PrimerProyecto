#include"ServicioFechas.h"


string ServicioFechas::diferenciaFechas(Fecha* fecha1, Fecha* fecha2) {
	int anioFecha1,mesFecha1,diaFecha1;
	int anioFecha2, mesFecha2, diaFecha2;
	int respFech, respMes;
	stringstream s;

	//Fecha1   fecha inicial(fechNac) 
	anioFecha1 = fecha1->getAnio();
	mesFecha1 = fecha1->getMes();
	diaFecha1 = fecha1->getDia();

	//Fecha2   fecha actual(fechAct)
	anioFecha2 = fecha2->getAnio();
	mesFecha2 = fecha2->getMes();
	diaFecha2 = fecha2->getDia();

	if (diaFecha2 < diaFecha1) {
		diaFecha2 = diaFecha2 + 30;
		mesFecha2 = mesFecha2 - 1;
		respFech = diaFecha2 - diaFecha1;
	}
	else {
		respFech = diaFecha2 - diaFecha1;
	}
	if (mesFecha2 < mesFecha1) {
		mesFecha2 = mesFecha2 + 12; 
		anioFecha2 = anioFecha2 - 1;
		respMes = mesFecha2 - mesFecha1;
	}
	else {
		respMes = mesFecha2 - mesFecha1;
	
	}
	s << "Han pasado " << anioFecha2 - anioFecha1 << " años"
		<< " con " << respMes << " meses y " << respFech << " dias" << endl;
	return s.str();
}
//string ServicioFechas::calculoEdad(Fecha* fecha1,Fecha* fecha2){
//	
//} 