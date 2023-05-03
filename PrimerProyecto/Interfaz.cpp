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
	cout << "ID: ";
	cin >> id;
	cout << "Telefono: ";
	cin >> tel;
	cout << "Nombre Completo: ";
	cin >> nom;
	cout << "Fecha de nacimiento(dd/mm/aaaa): ";
	cin >> dia; cout << "/"; cin >> mes; cout << "/"; cin >> anio;
	cout << "Sexo(f/m): ";
	cin >> sex;
	cout << "Horas Entrenamiento: ";
	cin >> horas;
	cout << "Cantidad de partidos IronMan: ";
	cin >> iron;
	cout << "Cantidad de triatlones ganados: ";
	cin >> ganados;
	cout << "Datos Biometrico basico:" << endl;
	cout << "Estatura: ";
	cin >> est;
	cout << "Peso: ";
	cin >> peso;
	cout << "Grasa Corporal: ";
	cin >> grasa;
	cout << "Masa Muscular: ";
	cin >> masa;
	if (gym->getCOD()->encontrarDeportista(id) != true) {
		Fecha* x = new Fecha(dia, mes, anio);
		Deportista* d = new Triatlonista(id, nom, tel, x, sex, est, iron, ganados, horas, 0.0, masa, peso, grasa);
		gym->getCOD()->ingresar(*d);
		cout << "Deportista ingresado!!" << endl;
	}
	else
		cout << "El deportista no se puede ingresar porque ya existe" << endl;
	system("pause");
}

void Interfaz::modificaDeportista(Gym* gym) {
	string id;
	int op;
	cout << "Control de Deportista >> Modificar Deportista" << endl << endl;
	cout << "Ingrese el ID del jugador: ";
	cin >> id;
	if (gym->getCOD()->encontrarDeportista(id) == true) {
		cout << "Se encontro deportista!!" << endl << endl;
		cout << "Que dato desea modificar: " << endl;
		cout << "1. Nombre" << endl;
		cout << "2. Telefono" << endl;
		cout << "3. Fecha de nacimiento" << endl;
		cout << "4. Sexo" << endl;
		cout << "5. Estatura" << endl;
		cout << "6. Peso" << endl;
		cout << "7. Porcentaje de grasa corporal" << endl;
		cout << "8. Porcentaje de grasa muscular" << endl;
		cout << "9. Estado" << endl;
		cout << "10. Horas de entrenamiento" << endl;
		cout << "10. Cantidad de partidos Iron Man" << endl;
		cout << "12. Cantidad de triatlones ganados" << endl;
		cout << "13. Volver" << endl;
		cout << "Digite una opcion: " << endl;
		cin >> op;
		modificacionesDeportista(gym->getCOD()->retonarDeportista(id), op);
	}
	else
		cout << "No se encontro el deportista" << endl;

}

void Interfaz::modificacionesDeportista(Deportista* depo, int op) {
	char s = ' ';
	string text = "";
	double num1 = 0;
	int num2 = 0, d, m ,a;
	switch (op) {
		case 1: {
			cout << "Digite el nuevo nombre: ";
			cin >> text;
			depo->setNombre(text);		
		}break;
		case 2: {
			cout << "Digite el nuevo numero de telefono: ";
			cin >> text;
			depo->setTelefono(text);
		}break;
		case 3: {
			cout << "Digite la nueva fecha de nacimiento(dd/mm/aaaa): ";
			cin >> d; cout << "/"; cin >> m; cout << "/"; cin >> a;
			Fecha* fecha = new Fecha(d, m, a);
			depo->setFecha(fecha);
			//Cambiar 
		}break;
		case 4: {
			cout << "Digite el nuevo sexo('f''m'): ";
			cin >> s;
			depo->setSexo(s);
		}break;
		case 5: {
			cout << "Digite la nueva estatura: ";
			cin >> num1;
			depo->setEstatura(num1);
		}break;
		case 6: {
			cout << "Digite el nuevo peso: ";
			cin >> num1;
			depo->setPeso(num1);
		}break;
		case 7: {
			cout << "Digite el nuevo porcentaje de grasa corporal: ";
			cin >> num1;
			depo->setProcGrasaCorporal(num1);
		}break;
		case 8: {
			cout << "Digite el nuevo porcentaje de masa muscular: ";
			cin >> num1;
			depo->setMasaMuscular(num1);
		}break;
		case 9: {
			//si el estado esta activo se puede desactivar

		}break;
		case 10: {
			cout << "Digite las nuevas horas de entrenamiento: ";
			cin >> num2;
			depo->setHorasEntrenadas(num2);
		}break;
		case 11: {
			cout << "Digite la nueva cantidad de partidos Iron Main: ";
			cin >> num2;
			depo->setCantParticEnIronMan(num2);
		}break;
		case 12: {
			cout << "Digite la nueva cantidad de triatlones ganados: ";
			cin >> num2;
			depo->setCantTriatGanados(num2);
		}break;
		case 13: {
			// Volver
		}break;
	}
}

void Interfaz::listaDeporsitas(Gym* gym){
	int op;
	cout << "1. Listado general:" << endl;
	cout << "2. Listado de deportistas activos:" << endl;
	cout << "3. Listado de deportistas inactivos:" << endl;
	cout << "4. Listado de deportistas en morosidad:" << endl;
	cout << "Digite uana opcion:" << endl;
	cin >> op;
	switch (op) {
	case 1: {
		gym->getCOD()->listarDeportistas();
		system("pause");
	}break;
	case 2: {
		//Falta modificar deportista 
		//Listado de activios
	}break;
	case 3: {
		//Listado de inactivos
	}break;
	case 4: {
		//Listado de morosidad
	}break;
	}
}

void Interfaz::detalleDeportistaEspecifico(Gym* gym) {
	string id;
	cout << "Digite el ID del deportista: " << endl;
	cin >> id;
	if (gym->getCOD()->encontrarDeportista(id) == true) {
		cout << "Se encontro deportista!!" << endl;
		//Se despliega datos del deportista
	}
}

//--------------------------------Control de Cursos------------------------------------------
void Interfaz::controlDeCursos() {
	system("color 60");
	cout << "\t\t CONTROL DE CURSOS" << endl
		<< "1. Ingreso de nuevo curso" << endl
		<< "2. Reporte de curso especifico" << endl
		<< "3. Modificacion de curso especifico" << endl
		<< "4. Volver" << endl
		<< "Digite una opcion del menu: " << endl;
}

void Interfaz::ingresarCurso(Gym* gym) {
	string cod, nom, niv, descrip;
	int cant;

	cout << "Control de Cursos >> Ingreso nuevo curso" << endl;
	cout << "Digite el codigo del curso: ";
	cin >> cod;
	cout << "Digite el nombre del curso: ";
	cin >> nom;
	cout << "Digite el nivel: ";
	cin >> niv;
	cout << "Cantidad de grupos: ";
	cin >> cant;
	cout << "Descripcion: ";
	cin >> descrip;

	Curso* curso = new Curso(cod, nom, niv, descrip);
	gym->getCOC()->ingresar(*curso);
	delete curso;
	cout << "Curso ingresado!!" << endl;
	system("pause");

}

void Interfaz::reporteDeCurso(Gym* gym) {
	string cod;
	cout << "Control de Cursos >> Reporte de curso especifico" << endl;
	cout << "Listado de cursos: " << endl;
	//Listado de cursos

	cout << "Digte el codigo del curso:" << endl;
	cin >> cod;
	//terminar 
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
	modificacionesCurso(gym, op);
}
void Interfaz::modificacionesCurso(Gym* gym, int op) {
	string auxs;
	int cant;
	switch (op) {
	case 1: {
		cout << "Digite el nuevo codigo:" << endl;
		cin >> auxs;
		//Cambiar
	}break;
	case 2: {
		cout << "Digite el nuevo nombre:" << endl;
		cin >> auxs;
		//Cambiar
	}break;
	case 3: {
		cout << "Digite el nuevo nivel:" << endl;
		cin >> auxs;
		//Cambiar
	}break;
	case 4: {
		cout << "Digite la nueva descripcion:" << endl;
		cin >> auxs;
		//Cambiar
	}break;
	case 5: {
		cout << "Digite la nueva cantidad de grupos:" << endl;
		cin >> cant;
		//if(cant > cantGruporDelCurso)
		//Cambiar 
	}break;
	}
}


//--------------------------------Control de Grupos------------------------------------------

void Interfaz::controlDeGrupos() {
	system("color E5");
	int op;
	cout << "\t\t CONTROL DE GRUPOS" << endl
		<< "1. Ingreso de nuevo grupo" << endl
		<< "2. Modificacion de grupo especifico" << endl
		<< "3. Matricula en grupo especifico" << endl
		<< "4. Reporte de grupo especifico" << endl
		<< "5. Reporte deportistas matriculados en grupo" << endl
		<< "6. Cancelacion de matricula en grupo" << endl
		<< "Digite una opcion del menu:" << endl;
	cin >> op;
}
void Interfaz::ingresarGrupo(Gym* gym) {
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
void Interfaz::modificarGrupo(Gym* gym) {
	int op;
	string cod;
	cout << "Control de Grupo >> Modificacion de grupo especifico" << endl;
	//Listado de cursos

	cout << "Digite el codigo del curso: " << endl;
	cin >> cod;
	//Buscar curso
	cout << "Digite el numero de grupo:" << endl;
	cin >> op;
	//Buscar grupo en el curso 
	cout << "Que desea modificar " << endl
		<< "1. ID del Instructor " << endl
		<< "2. Nombre del Instructor " << endl
		<< "3. Cupo maximo " << endl
		<< "4. Fecha de inicio " << endl
		<< "5. Semanas de duracion " << endl
		<< "6. Dia de la semana" << endl
		<< "7. Hora de incio" << endl
		<< "8. Hora de finalizacion" << endl;
	cin >> op;
	modificacionesGrupo(gym, op);
}

void Interfaz::modificacionesGrupo(Gym* gym, int op) {
	string auxs;
	int auxi,d,m,a;
	char auxc;
	switch (op) {
	case 1:
		cout << "Digite el nuevo ID del instructor:" << endl;
		cin >> auxs;
		break;
	case 2:
		cout << "Digite el nuevo nombre del instructor:" << endl;
		cin >> auxs;
		break;
	case 3:
		cout << "Digite el nuevo cupo maximo:" << endl;
		cin >> auxi;
		break;
	case 4:
		cout << "Digite la nueva fecha de inicio(dd/mm/aaaa):" << endl;
		cin >> d; cout << "/"; cin >> m; cout << "/"; cin >> a;
		break;
	case 5:
		cout << "Digite la nueva cantidad de semanas de duracion:" << endl;
		cin >> auxi;
		break;
	case 6:
		cout << "Digite el nuevo dia de la semana:" << endl;
		cin >> auxc;
		break;
	case 7:
		cout << "Digite la nueva hora de incio:" << endl;
		cin >> auxi;
		break;
	case 8:
		cout << "Digite la nueva hora de finalizacion:" << endl;
		cin >> auxi;
	}
}
void Interfaz::matricularEnGrupo(Gym* gym) {
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
void Interfaz::reporteDeGrupo(Gym* gym) {
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
void Interfaz::reporteDeportistasEnGrupo(Gym* gym){
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
void Interfaz::cancelacionDeMatriculaEnGrupo(Gym* gym){
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
//--------------------------------Control de Pagos------------------------------------------
void Interfaz::controlPagos() {
	system("color 71");
	cout << "\t\t CONTROL PAGOS" << endl
		<< "1. Registro de nuevo pago" << endl
		<< "2. Reporte de pagos por deportista" << endl
		<< "3. Volver" << endl
		<< endl << "Digite una opcion del menu: ";
}

void Interfaz::registroNuevoPago(Gym*) {
	string ID;
	cout << "Control de Pagos >> Registro de nuevo pago" << endl;

	//Fecha actual 

	cout << "Digite el ID del deportista: " << endl;
	cin >> ID;
	//Buscar deportista
	//ETC...

}
void Interfaz::reporteDePagosDeportista(Gym*) {
	string ID;
	cout << "Control de Pagos >> Reporte de pagos por deportista" << endl;
	//Fecha actual 

	cout << "Digte el ID del deportista: " << endl;
	cin >> ID;
	//Desplegar historial del pagos 
}


