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
	ListaPelicula* aListaPelicula;
	Horario* aHorario;
	Sala* aSala;
	NodoFuncion* aSiguiente;

public:
	NodoFuncion(void);
	~NodoFuncion(void);
	void setListaPelicula(ListaPelicula*);
	ListaPelicula* getListaPelicula();
	void setHorario(Horario*);
	Horario* getHorario();
	void setSala(Sala*);
	Sala* getSala();
	void setSiguiente(NodoFuncion*);
	NodoFuncion* getSiguiente();
};
#endif

