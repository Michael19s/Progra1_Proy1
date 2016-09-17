#include "NodoFuncion.h"


NodoFuncion::NodoFuncion(void)
{
}


NodoFuncion::~NodoFuncion(void)
{
}

//metodo que se encarga de modificar el valor dela lista que se encarga de manejar pelicula
void NodoFuncion::setListaPelicula(ListaPelicula* pListaPelicula)
{
	aListaPelicula = pListaPelicula;
}

//metodo que se encarga de retornar el valor de la lista que se encarga de manejar pelicula
ListaPelicula* NodoFuncion::getListaPelicula()
{
	return aListaPelicula;
}

//metodo que se encarga de modificar el valor del horario
void NodoFuncion::setHorario(Horario* pHorario)
{
	aHorario = pHorario;
}

//metodo que se encarga de modificar el valor del horario
Horario* NodoFuncion::getHorario()
{
	return aHorario;
}

//metodo que se encarga de modificar el valor dela sala
void NodoFuncion::setSala(Sala* pSala)
{
	aSala = pSala;
}

//metodo que se encarga de retonar el valor de la sala
Sala* NodoFuncion::getSala()
{
	return aSala;
}

//metodo que se encarga de modificar el valor del siguiente
void NodoFuncion::setSiguiente(NodoFuncion* pSiguiente)
{
	aSiguiente = pSiguiente;
}

//metodo que se encarga de retornar el valor del siguiente
NodoFuncion* NodoFuncion::getSiguiente()
{
	return aSiguiente;
}