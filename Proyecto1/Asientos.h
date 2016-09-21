#ifndef Asientos_H
#define Asientos_H

#pragma once
#include "Asiento.h"
#include <iostream>
#include <sstream>
#include <string>
#include <windows.h>

using namespace std;
class Asientos
{
private:
	int aDisponibilidadAsientos;
	Asiento* aAsientos[6][10];

public:
	Asientos();
	~Asientos(void);
	void setEstadoAsiento(int, int, char);
	void setEstadoAsientos();
	Asiento* getEstadoAsientos(int, int);
	int getDisponibilidadAsientos();
	void SeleccionarAsiento();
	void OcuparAsiento();
	void InicializarAsientos();
	void ImprimeAsientos();
};
#endif;
