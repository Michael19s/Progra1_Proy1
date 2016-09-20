#ifndef Sala_H
#define Sala_H

#pragma once
#include "Asientos.h"
#include <sstream>
#include <string>

using namespace std;
class Sala
{
private:
	Asientos* aAsientos;
	string aNombre;
	string aTipo;

public:
	Sala();
	Sala(string, string);
	~Sala(void);
	void setTipo(string);
	string getTipo();
	void setNombre(string);
	string getNombre();
	void setAsientos(Asientos*);
	Asientos* getAsientos();
	string ImprimirSala();
	void InicializarSala();
};
#endif
