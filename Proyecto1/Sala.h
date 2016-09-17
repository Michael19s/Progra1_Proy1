#ifndef Sala_H
#define Sala_H

#pragma once
#include "Asiento.h"
#include <sstream>
#include <string>

using namespace std;
class Sala
{
private:
	Asiento* aAsiento;
	string aTipo;
	char aAsientos[6][10];
	int aDisponibilidadAsientos;

public:
	Sala();
	~Sala(void);
	void setTipo(string);
	string getTipo();
	void setEstadoAsiento(int, int, Asiento*);
	char getEstadoAsiento(int, int);
	void setEstadoAsiento();
	int getDisponibilidadAsientos();
	void InicializarAsientos();
	string ImprimeAsientos();
};
#endif
