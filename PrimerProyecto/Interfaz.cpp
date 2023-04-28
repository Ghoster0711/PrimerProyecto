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


//--------------------------------Administracion------------------------------------------
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


//-------------------------------Control de Deportistas---------------------------------------
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
	double est, masa, peso, grasa;
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
	cin >> est;
	cout << "\t Peso: " << endl;
	cin >> peso;
	cout << "\t Grasa Corporal: " << endl;
	cin >> grasa;
	cout << "\t Masa Muscular: " << endl;
	cin >> masa;


	Fecha* x = new Fecha(dia, mes, anio);
	Deportista* d = new Triatlonista(id, nom, tel, x, sex, est, iron, ganados, horas, 0.0, masa, peso, grasa);
	gym->getCOD()->ingresar(*d);
	delete d;


	
}

void Interfaz::modificaDeportista(Gym* gym){
	string id;
	cout << "Control de Deportista >> Modificar Deportista" << endl << endl;
	cout << "Ingrese el ID del jugador: ";
	cin >> id;
	if (gym->getCOD()->encontrarDeportista(gym->getCOD(), id) == true) {
		cout << "Se encontro deportista!!" << endl;
	}

}

void Interfaz::listaDeporsita(Gym* gym)
{
	//cout << *gym->getCOD() << endl;
}


//--------------------------------Control de Cursos------------------------------------------
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
	//int cant;

	cout << "Control de Cursos >> Ingreso nuevo curso" << endl;
	cout << "Digite el codigo del curso: " << endl;
	cin >> cod;
	cout << "Digite el nombre del curso: " << endl;
	cin >> nom;
	cout << "Digite el nivel: " << niv;
	/*cout << "Cantidad de grupos: " << endl;
	cin >> cant;*/
	cout << "Descripcion: " << descrip;

	Curso* curso = new Curso(cod, nom, niv, descrip);
	gym->getCOC()->ingresar(*curso);


}


//Control de grupos
void Interfaz::reporteDeCurso(Gym* gym) {
	cout << "Control de Cursos >> Reporte de curso especifico" << endl;
	cout << "Listado de cursos: " << endl;




}
void Interfaz::modificarCurso(Gym* gym) {
	string cod;
	int op;
	cout << "Control de Cursos >> Modificacion de Curso Especifico" << endl;
	cout << "Digite el codigo del curso especifico :" << endl;
	cin >> cod;
	//Buscar el curso

	cout << "Cual dato desea modificar: " << endl;
	cout << "\n 1. Codigo de curso" << endl;
	cout << "\n 2. Nombre del curso" << endl;
	cout << "\n 3. Nivel" << endl;
	cout << "\n 4. Descripcion" << endl;
	cout << "\n 5. Cantidad de grupos" << endl;
	cout << "Digite una opcion del menu: " << endl;
	cin >> op;
}


//--------------------------------Control de Grupos------------------------------------------

void Interfaz::controlDeGrupos() {
	system("color E5");
	cout << "\t\t CONTROL DE GRUPOS" << endl
		<< "1. Nombre del Gimnasio" << endl
		<< "2. Monto de Mensualidad" << endl
		<< "3. Volver" << endl
		<< endl << "Digite una opcion del menu: ";
}
void Interfaz::ingresarGrupo() {
	string cod, ID, nom;
	int c, dia, mes, anio, s, h1, m1, h2, m2;
	char d;
	cout << "Control de Grupos >> Ingreso de grupo" << endl;
	cout << "Listado de cursos: " << endl;
	//Listado de cursos

	cout << "Digite el codigo del curso: " << endl;
	cin >> cod;
	//Buscar el curso

	cout << "Digite el ID del Instructor: " << endl;
	cin >> ID;
	cout << "Digite el nombre del Instructor: " << endl;
	cin >> nom;
	cout << "Digite el cupo maximo: " << endl;
	cin >> c;
	cout << "Fecha de inicio(dd/mm/aaaa): " << endl;
	cin >> dia; cout << "/"; cin >> mes; cout << "/"; cin >> anio;
	cout << "Semanas de duracion: " << endl;
	cin >> s;

	cout << "Horario: " << endl;
	cout << "Digite el dia de la semana (l,k,m,j,v,s,d): " << endl;
	cin >> d;
	cout << "Digite la ;hora de inicio (en hora militar): " << endl;
	cin >> h1; cout << ":"; cin >> m1;
	cout << "Digite la hora de finalizacion (en hora militar): " << endl;
	cin >> h2; cout << ":"; cin >> m2;

	Fecha* fechaInicio = new Fecha(dia, mes, anio);
	Hora* horaInicio = new Hora(h1, m1);
	Hora* horaFinal = new Hora(h2, m2);
	Horario* horario = new Horario(d, horaInicio, horaFinal);

	Grupo* curso = new Grupo(ID, nom, c, s ,fechaInicio, horario);
}
void Interfaz::modificarGrupo() {
	int op;
	cout << "Control de Grupo >> Modificacion de grupo especifico" << endl;
	//Listado de cursos

	cout << "Digite el codigo del curso: " << endl;
	
	cout << "Que desea modificar: " << endl;
	cout << "1. ID del Instructor: " << endl;
	cout << "2. Nombre del Instructor: " << endl;
	cout << "3. Cupo maximo: " << endl;
	cout << "4. Fecha de inicio: " << endl;
	cout << "5. Semanas de duracion: " << endl;
	cin >> op;


}
void Interfaz::matricularEnGrupo() {
	string ID, cod, dia, mes, anio;
	int op;
	cout << "Control de Grupo >> Matricula en grupo especifico" << endl;
	cout << "Digite el ID del deportista: " << endl;
	cin >> ID;
	//Buscar deportista 
	cout << "Digite el codigo del curso: " << endl;
	cin >> cod;
	//Buscar curso
	
	cout << "Para el curso deseado existen los siguientes grupos disponibles: " << endl;
	//Lista de grupos 
	cout << "Digite el numero de grupo deseado: " << endl;
	cin >> op;
	cout << "Digite la fecha de matricula(dd/mm/aaaa): " << endl;
	cin >> dia; cout << "/"; cin >> mes; cout << "/"; cin >> anio;

	//Buscar si hay cupo en el grupo 


}
void Interfaz::reporteDeGrupo() {
	string cod;
	int op;
	cout << "Control de Grupo >> Reporte de grupo especifico" << endl;
	//Listado de cursos

	cout << "Digite el codigo del curso" << endl;
	cin >> cod;
	//Buscar curso 
	
	//Listado de grupos para el curso seleccionado: 
	cout << "Digite el numero de grupo: " << endl;
	cin >> op;
	//Buscar grupo

	cout << "A continuacion se muestra la infomacion del grupo #" << op << " del curso " << cod <<":"<< endl;
	//Informacion del grupo 

}
void Interfaz::reporteDeportistasEnGrupos(){
	string cod;
	int op;
	cout << "Control de Grupo >> Reporte deportistas matriculados por grupo" << endl;


	//Listado de cursos

	cout << "Digite el codigo del curso: " << endl;
	cin >> cod;
	//Buscar curso 

	//Listado de grupos para el curso seleccinado

	cout << "Digite el numero de grupo: " << endl;
	cin >> op;
	//Buscar grupo 

	//Listado de matriculados en el grupo.....etc 
}
void Interfaz::cancelacionDeMatriculaEnGrupo(){
	string ID,cod;
	int op;
	cout << "Control de Grupos >> Cancelacion de matricula en grupo" << endl;

	cout << "Digite el ID del deportistas: " << endl;
	cin >> ID;
	//Buscar deportista

	//Listado de cursos


	cout << "Digite el codigo de curso: " << endl;
	cin >> cod;
	//Buscar curso

	//Listado de grupos para el curso selccionado

	cout << "Digite el numero de grupo: " << endl;
	cin >> op;
	//Buscar grupo



}

void Interfaz::controlPagos() {
	system("color 71");
	cout << "\t\t CONTROL PAGOS" << endl
		<< "1. Registro de nuevo pago" << endl
		<< "2. Reporte de pagos por deportista" << endl
		<< "3. Volver" << endl
		<< endl << "Digite una opcion del menu: ";
}

void Interfaz::nuevoPago() {
	string ID;
	cout << "Control de Pagos >> Registro de nuevo pago" << endl;

	//Fecha actual 
	cout << "Digite el ID del deportista: " << endl;
	cin >> ID;
	//Buscar deportista
	//ETC


}
void Interfaz::reporteDePagosDeportista() {
	string ID;
	cout << "Control de Pagos >> Reporte de pagos por deportista" << endl;
	//Fecha actual 

	cout << "Digte el ID del deportista: " << endl;
	cin >> ID;
	//Desplegar historial del pagos 


}


