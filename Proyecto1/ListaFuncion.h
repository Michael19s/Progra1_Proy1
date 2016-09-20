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
	ListaFuncion();
	~ListaFuncion(void);
	bool ListaVacia();
	bool ExisteFuncion(Pelicula*, string, string, int, int);
	bool CompararFuncion(Pelicula*, string, string, int, int, NodoFuncion*);
	bool AgregarInicio(int, int, string, string, Pelicula*);
	bool Elimina(Pelicula*, string, string, int, int);
	string ImprimirLista();
};
#endif

