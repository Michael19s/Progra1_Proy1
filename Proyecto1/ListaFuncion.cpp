#include "ListaFuncion.h"


ListaFuncion::ListaFuncion(void)
{
	aContador = 0;
	aNodoFuncion = NULL;
}


ListaFuncion::~ListaFuncion(void)
{
}

//Metodo que se encarga de verificar que la lista contenga o no informacion
bool ListaFuncion::ListaVacia()
{
	bool lvValorRetorno = false;
	if (aContador == 0)
		lvValorRetorno = true;
	return lvValorRetorno;
}

//Metodo encargado de buscar las peliculas por codigo y determinar si existe
bool ListaFuncion::ExisteFuncion(string pCodigo)
{
	return true;
}