#ifndef NodoFuncion_H
#define NodoFuncion_H

#pragma once
#include "ListaPelicula.h"
#include "Horario.h"
#include "Sala.h"

using namespace std;
class NodoFuncion
{
private:
	Pelicula* aPelicula;
	Horario aHorario;
	Sala aSala;
	NodoFuncion* aSiguiente;

public:
	NodoFuncion(int, int, string, string, Pelicula*);
	~NodoFuncion(void);
	void setPelicula(Pelicula*);
	Pelicula* getPelicula();
	void setHorario(Horario);
	Horario getHorario();
	void setSala(Sala);
	Sala getSala();
	void setSiguiente(NodoFuncion*);
	NodoFuncion* getSiguiente();
};
#endif

