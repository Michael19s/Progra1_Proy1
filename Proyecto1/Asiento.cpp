#include "Asiento.h"


Asiento::Asiento()
{
	aEstado = 'D';
}


Asiento::~Asiento(void)
{
}

void Asiento::setEstado(char pEstado)
{
	aEstado = pEstado;
}

char Asiento::getEstado()
{
	return aEstado;
}