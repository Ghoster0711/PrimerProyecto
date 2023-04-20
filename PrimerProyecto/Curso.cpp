#include "Curso.h"

Curso::Curso()
	:nombre(""), descripcion(""), nivel(""), cupoMaximo(0) {
	reserva = new Deportista * [tamD];
	horario = new Horario * [7];
	for (int i = 0; i < tamD; i++)
		reserva[i] = NULL;
	for (int i = 0; i < 7; i++)
		horario[i] = NULL;
}
Curso::Curso(string nom, string desc, string niv, int cupo)
	:nombre(nom), descripcion(desc), nivel(niv), cupoMaximo(cupo), tamD(cupo), cantD(0), cantH(0){
	reserva = new Deportista * [tamD];
	horario = new Horario * [7];
	for (int i = 0; i < tamD; i++)
		reserva[i] = NULL;
	for (int i = 0; i < 7; i++)
		horario[i] = NULL;
}
Curso::~Curso() {
	for (int i = 0; i < tamD; i++)
		if (reserva[i] != NULL)
			delete reserva[i];
	delete[] reserva;
	for (int i = 0; i < 7; i++)
		if (horario[i] != NULL)
			delete horario[i];
	delete[] horario;
}
string Curso::getNombre() { return nombre; }
string Curso::getDescription() { return descripcion; }
string Curso::getNivel() { return nivel; }
int Curso::getCupoMaximo() { return cupoMaximo; }
void Curso::setNombre(string nom) { nombre = nom; }
void Curso::setDescripcion(string desc) { descripcion = desc; }
void Curso::setNivel(string niv) { nivel = niv; }
void Curso::setCupoMaximo(int cupo) { cupoMaximo + cupo; }
void Curso::ingresarHorario(Horario* horar){
	if (cantH < 7)
		horario[cantH++] = horar;
}
void Curso::ingresarReserva(Deportista* depo) {
	if (cantD < tamD)
		reserva[cantD++] = depo;
}
string Curso::toString() {
	stringstream show;

	show << "------------------------------------------------" << endl
		<< "| Nombre del curso:" << nombre << endl
		<< "| Descripcion del curso: " << descripcion << endl
		<< "| Nivel del curos: " << nivel << endl
		<< "| Cupo Maximo del curso: " << cupoMaximo << endl;
	// falta hacer los metodos para recorrer los vectores y imprimir la informacion

	return show.str();
}