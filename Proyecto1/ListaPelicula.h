#ifndef ListaPelicula_H
#define ListaPelicula_H

#pragma once
#include "NodoPelicula.h"

class ListaPelicula
{
private:
	int aContador;

	NodoPelicula* aNodoPelicula;

public:
	ListaPelicula();
	~ListaPelicula(void);
	void Agrega(string, string, string, string, string, string);
	void Elimina(int pPosicion);
};
#endif

