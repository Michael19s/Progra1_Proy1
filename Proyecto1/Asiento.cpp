#include "Asiento.h"


Asiento::Asiento()
{
	aEstado = 'D';
}


Asiento::~Asiento(void)
{
}

bool Asiento::setEstado(char pEstado)
{
	bool lvValorRetorno = false;
	if (aEstado == 'D')
	{
		if (pEstado == 'R')
		{
			aEstado = pEstado;
			lvValorRetorno = true;
		}
		else
		{
			if (aEstado == 'R')
			{
				if ((pEstado == 'O') || (pEstado == 'D') )
				{
					aEstado = pEstado;
					lvValorRetorno = true;
				}
				else
				{
					if (aEstado == 'O')
					{
						if (pEstado == 'D')
						{
							aEstado = pEstado;
							lvValorRetorno = true;
						}
					}
				}
			}
		}
	}
	return lvValorRetorno;
}

char Asiento::getEstado()
{
	return aEstado;
}