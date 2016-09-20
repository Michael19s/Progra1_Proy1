#include "Horario.h"

Horario::Horario()
{
}

Horario::Horario(int pHora, int pMinutos)
{
	aHora = pHora;
	aMinutos = pMinutos;
}


Horario::~Horario(void)
{
}

//metodo que se encarga de modificar el valor de la hora
//Se toma como horas base 10, 1, 3, 5, 7, 9 y 11 para limitar las horas disponibles en el cine
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
string Horario::ImprimirHorario()
{
	stringstream lvMensaje;
	lvMensaje << aHora << ":" << aMinutos;
	return lvMensaje.str();
}