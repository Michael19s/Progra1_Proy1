#ifndef ListaFuncion_H
#define ListaFuncion_H

#pragma once
#include "NodoFuncion.h"

using namespace std;
class ListaFuncion
{
public:
	int aContador;
	NodoFuncion* aNodoFuncion;

public:
	ListaFuncion(void);
	~ListaFuncion(void);
	bool ListaVacia();
	bool ExisteFuncion(string);
	bool AgregaInicio();
	bool Elimina();
};
#endif

