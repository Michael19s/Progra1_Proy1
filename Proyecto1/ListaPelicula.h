#ifndef ListaPelicula_H
#define ListaPelicula_H

#pragma once
#include <sstream>
#include <string>

#include "NodoPelicula.h"

class ListaPelicula
{
private:
	int aContador;

	NodoPelicula* aNodoPelicula;

public:
	ListaPelicula();
	~ListaPelicula(void);
	bool ListaVacia();
	bool ExistePelicula(string);
	//bool BucarPelicula(string);
	bool AgregarInicio(string, string, string, string, string, string, string);
	bool CompararPelicula(string, NodoPelicula*);
	bool Elimina(string pCodigo);
	string toString();
};
#endif

