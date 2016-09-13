#ifndef NodoPelicula_H
#define NodoPelicula_H

#pragma once
#include "Pelicula.h"

class NodoPelicula
{
private:
	Pelicula* aPelicula;
	NodoPelicula* aSiguiente;

public:
	NodoPelicula(string, string, string, string, string, string, string);
	~NodoPelicula(void);
	void setSiguiente(NodoPelicula*);
	NodoPelicula* getSiguiente();
	void setPelicula(Pelicula*);
	Pelicula* getPelicula();
};
#endif
