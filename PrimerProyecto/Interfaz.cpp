#include "Interfaz.h"

void Interfaz::bienvenida() {

}

void Interfaz::menu() {
	cout << "\t\t MENU PRINCIPAL" << endl;
	cout << "1. Administracion General" << endl
		<< "2. Control de Deportistas" << endl
		<< "3. Control de Cursos" << endl
		<< "4. Control de Grupos" << endl
		<< "5. Control Pagos" << endl
		<< "6. Guardar en Archivo y salir" << endl;
	cout << endl << "Digite una opcion del menu: ";
}


//Administracion
void Interfaz::administracionGeneral() {
	cout << "\t\t ADMINISTRACION GENERAL" << endl
		<< "1. Nombre del Gimnasio" << endl
		<< "2. Monto de Mensualidad" << endl
		<< "3. Volver" << endl
		<< endl << "Digite una opcion del menu: ";
}

void Interfaz::nombreGym(Gym* gym){
	string nombre;
	cout << "Administracion General >> Nombre del Gimnasio" << endl << endl;
	cout << "Ingrese el nombre del gimnasio: ";
	cin >> nombre;
	gym->setNombre(nombre);
}

void Interfaz::mensualidad(Gym* gym){
	double men;
	cout << "Administracion General >> Nombre del Gimnasio" << endl << endl;
	cout << "Ingrese la mensualidad: ";
	cin >> men;
	gym->setMensualidad(men);
}


// Control de deportistas
void Interfaz::controlDeDeportistas() {
	system("color 8B");
	cout << "\t\t CONTROL DE DEPORTISTAS" << endl
		<< "1. Ingreso de nuevo deportista" << endl
		<< "2. Modificacion de deportista" << endl
		<< "3. Listado de deportistas" << endl
		<< "4. Detalle de deportista especifico" << endl
		<< "5. Volver" << endl
		<< endl << "Digite una opcion del menu: ";

}

void Interfaz::ingresaDeportista(Gym* gym){
	string id, tel, nom;
	int dia, mes, anio, horas, iron, ganados;
	char sex;

	cout << "Control de Deportista >> Ingreso Nuevo Deportista" << endl << endl;
	cout << "Datos Generales:" << endl;
	cout << "\t ID: " << endl;
	cin >> id;
	cout << "\t Telefono: "  << endl;
	cin >> tel;
	cout << "\t Nombre Completo: " << endl;
	cin >> nom;
	cout << "\t Fecha de nacimiento(dd mm anio): " << endl;
	cin >> dia >> mes >> anio;
	cout << "\t Sexo(f/m): " << endl;
	cin >> sex;
	cout << "\t Horas Entrenamiento: " << endl;
	cin >> horas;
	cout << "\t Cantidad de partidos IronMan: " << endl;
	cin >> iron;
	cout << "\t Cantidad de triatlones ganados: " << endl;
	cin >> ganados;
	cout << "Datos Biometrico basico" << endl;
	cout << "\t Estatura: " << endl;

	cout << "\t : " << endl;

	cout << "\t : " << endl;

	cout << "\t : " << endl;



	
}

void Interfaz::modificaDeportista(Gym*){
	
}

void Interfaz::listaDeporsita(Gym*)
{
}


// Control de Cursos
void Interfaz::controlDeCursos() {
	system("color 60");
	cout << "\t\t CONTROL DE CURSOS" << endl
		<< "1. Ingreso de nuevo curso" << endl
		<< "2. Reporte de curso especifico" << endl
		<< "3. Modificacion de curso especifico" << endl
		<< "4. Volver" << endl
		<< endl << "Digite una opcion del menu: ";
}
void Interfaz::ingresarCurso(Gym* gym) {
	string cod, nom, niv, descrip;
	int cant;

	cout << "Control de Cursos >> Ingreso nuevo curso" << endl;
	cout << "Digite el codigo del curso: " << endl;
	cin >> cod;
	cout << "Digite el nombre del curso: " << endl;
	cin >> nom;
	cout << "Cantidad de grupos: " << endl;
	cin >> cant;
	cout << "Descripcion: " << descrip;

	Curso* curso = new Curso(cod, nom, cant, descrip);
	gym->getCOC()->ingresar(curso);

}
void Interfaz::reporteDeCurso(Gym* gym) {

	cout << "Listado de cursos: " << endl;
	cout<<"\t "<<g


}
void Interfaz::controlDeGrupos() {
	system("color E5");
	cout << "\t\t CONTROL DE GRUPOS" << endl
		<< "1. Nombre del Gimnasio" << endl
		<< "2. Monto de Mensualidad" << endl
		<< "3. Volver" << endl
		<< endl << "Digite una opcion del menu: ";
}

void Interfaz::controlPagos() {
	system("color 71");
	cout << "\t\t CONTROL PAGOS" << endl
		<< "1. Registro de nuevo pago" << endl
		<< "2. Reporte de pagos por deportista" << endl
		<< "3. Volver" << endl
		<< endl << "Digite una opcion del menu: ";
}


