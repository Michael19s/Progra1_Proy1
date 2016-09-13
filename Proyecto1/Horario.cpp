#include "Horario.h"


Horario::Horario(void)
{
	aHora = 0;
	aMinutos = 0;
}


Horario::~Horario(void)
{
}

//metodo que se encarga de modificar el valor de la hora
void Horario::setHora(int pHora)
{
	aHora = pHora;
}

//metodo que se encarga de retornar el valor de la hora
int Horario::getHora()
{
	return aHora;
}

//metodo que se encarga de modificar el valor de los minutos
void Horario::setMinutos(int pMinutos)
{
	aMinutos = pMinutos;
}

//metodo que se encarga de retornar el valor de los minutos
int Horario::getMinutos()
{
	return aMinutos;
}

//metodo encargado de imprimir en pantalla la hora en formato hora:minutos
string Horario::toString()
{
	stringstream lvMensaje;
	lvMensaje << aHora << ":" << aMinutos;
	return lvMensaje.str();
}