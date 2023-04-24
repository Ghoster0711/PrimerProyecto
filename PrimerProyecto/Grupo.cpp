#include"Grupo.h"
//string IDInst;
//string nombreInst;
//int cupoMaximo;
//int durarcion;
//Fecha* fecha;
//Horario* horario;

Grupo::Grupo(string id, string nom, int cM, int d, Fecha* fec, Horario* hor) {
	IDInst = id;
	nombreInst = nom;
	cupoMaximo = cM;
	duracion = d;
	fecha = fec;
	horario = hor;
	cant = 0;
	vec = new Triatlonista * [cupoMaximo];
	for (int i = 0; i < cupoMaximo; i++) {
		vec[i] = NULL;
	}
}
Grupo:: ~Grupo() {
	if (fecha != NULL)
		delete fecha;
	if (horario != NULL)
		delete horario;
	for (int i = 0; i < cant; i++)
		delete vec[i];
	delete[] vec;
}
bool Grupo::ingresarTritlonista(Triatlonista* triatlonista){
	if (cant < cupoMaximo) {
		vec[cant++] = triatlonista;
		return true;
	}
	else
		return false;
}
bool Grupo::eliminarTritlonista(string id){
	if (cant != 0) {
		for (int i = 0; i < cant; i++) {
			if (vec[i]->getCedula() == id) {
				delete vec[i];
				vec[i] = NULL;
				for (int j = i; j < cant; j++) {
					vec[j] = vec[j + 1];
				}
				vec[cant] = NULL;
				cant--;
				return true;
			}
		}
	}
	return false;
}
int Grupo::getCant(){}
string Grupo::getIDInstructor() { return IDInst; }
string Grupo::getNombreInstructor() { return nombreInst; }
int Grupo::getCupoMaximo() { return cupoMaximo; }
int Grupo::getDuracion() { return duracion; }
Fecha* Grupo::getFecha() { return fecha; }
Horario* Grupo::getHorario() { return horario; }
void Grupo::setID(string id) { IDInst = id; }
void Grupo::setNombre(string nom) { nombreInst = nom; }
void Grupo::setCupoMaximo(int cM) { cupoMaximo = cM; }
void Grupo::setDurarcion(int d) { duracion = d; }
void Grupo::setFecha(Fecha* fec) { fecha = fec; }
void Grupo::setHorario(Horario* hor) { horario = hor; }
string Grupo::toString() {
	stringstream s;
	s << "ID del Instructor: " << IDInst << endl
		<< "Nombre del Instructor: " << nombreInst << endl
		<< "Cupo Maximo: " << cupoMaximo << endl
		<< "Cantidad Matriculados: " << cant << endl
		<< "Semanas de duracion: " << duracion << endl
		<< "Dia: " << horario->getDia() << endl
		<< "Horario: " << horario->getHoraI() << " - " << horario->getHoraF() << endl;
	return s.str();
}
string Grupo::listaDeMatriculados() {
	stringstream s;
	for (int i = 0; i < cant; i++) {
		s << vec[i]->getCedula() << "  " << vec[i]->getNombre() << endl;
	}
	return s.str();
}