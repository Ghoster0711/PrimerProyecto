#include "Corredor.h"

Corredor::Corredor(string ced, string nom, string tel, Fecha* fec, char sex, double est)
	:Deportista(ced, nom, tel, fec), sexo(sex), estatura(est) {}
Corredor::~Corredor(){}