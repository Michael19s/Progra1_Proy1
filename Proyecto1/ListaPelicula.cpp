#include "ListaPelicula.h"


ListaPelicula::ListaPelicula()
{
}


ListaPelicula::~ListaPelicula(void)
{
}

void ListaPelicula::Agrega(string pNombre, string pGenero, string pTipo, string pTipoPublico, string pIdioma, string pSinopsis)
{
	aNodoPelicula = new NodoPelicula(pNombre, pGenero, pTipo, pTipoPublico, pIdioma, pSinopsis);

}