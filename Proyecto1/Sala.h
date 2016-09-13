#ifndef Sala_H
#define Sala_H

#pragma once
#include <sstream>
#include <string>

using namespace std;
class Sala
{
private:
	string aTipo;
	int aDisponibilidadAsientos;
	char aAsientos[10][6];
	char aEstadoAsiento;

public:
	Sala(void);
	~Sala(void);
	void setTipo(string);
	string getTipo();
	void setEstadoAsiento(int, int, char);
	char getEstadoAsiento(int, int);
	int getDisponibilidadAsientos();
	void InicializarAsientos();
	string ImprimeAsientos();
};
#endif
