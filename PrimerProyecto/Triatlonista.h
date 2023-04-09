#include "Corredor.h"
#include "Nadador.h"
#include "Ciclista.h"

class Triatlonista : public Corredor{
private:
	int cantParticEnIronMan;
	int cantTriatGanados;
	Nadador* nadador;
	Ciclista* ciclista;
public:
	Triatlonista(string, string, string, Fecha*, char, double, int, int);
	virtual ~Triatlonista();


	string getCedula();
	string getNombre();
	string getTelefono();
	Fecha* getFecha();
	char getSexo();
	double getEstatura();
	int getCantParticEnIronMan();
	int getCantTriatGanados();
	Nadador* getNadador();
	Ciclista* getCiclista();

	void setCedula(string);
	void setNombre(string);
	void setTelefono(string);
	void setFecha(Fecha*);
	void setSexo(char);
	void setEstatura(double);
	void setCantParticEnIronMan(int);
	void setCantTriatGanados(int);
	void setNadador(Nadador*);
	void setCiclista(Ciclista*);

	string toString();
};