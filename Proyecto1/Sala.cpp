#include "Sala.h"

Sala::Sala(void)
{
}

Sala::Sala(string pNombre, string pTipo)
{
	aNombre = pNombre;
	aTipo = pTipo;
	aAsientos = NULL;
}

Sala::~Sala(void)
{
}

//metodo que se encarga de modificar el valor del nombre de la sala
void Sala::setNombre(string pNombre)
{
	aNombre = pNombre;
}

//metodo que se encarga de retornar el nombre de la sala
string Sala::getNombre()
{
	return aNombre;
}

//metodo que se encarga de modificar el valor del tipo de sala (Regular o VIP)
void Sala::setTipo(string pTipo)
{
	aTipo = pTipo;
}

//metodo que se encarga de retornar el valor del tipo de sala (Regular o VIP)
string Sala::getTipo()
{
	return aTipo;
}

void Sala::setAsientos(Asientos* pAsientos)
{
	aAsientos = pAsientos;
}

Asientos* Sala::getAsientos()
{
	return aAsientos;
}

void Sala::InicializarSala()
{
	aAsientos -> InicializarAsientos();
}

string Sala::ImprimirSala()
{
	stringstream lvMensaje;
	Asientos* lvAsientos;
	lvMensaje << getNombre() << "\n";
	lvMensaje << getTipo() << "\n";
	//lvMensaje << getAsientos() -> ImprimeAsientos(); 
	return lvMensaje.str();
}

