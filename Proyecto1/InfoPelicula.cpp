#include "InfoPelicula.h"

//Constructor con parametros
InfoPelicula::InfoPelicula(string pNombre, string pGenero, string pTipo, string pTipoPublico, string pIdioma, string pSinopsis)
{
	aNombre = pNombre;
	aGenero = pGenero;
	aTipo = pTipo;
	aTipoPublico = pTipoPublico;
	aIdioma = pIdioma;
	aSinopsis = pSinopsis;
}

//Destructor
InfoPelicula::~InfoPelicula(void)
{
}

//Metodo encargado de modificar el valor del nombre
void InfoPelicula::setNombre(string pNombre)
{
	aNombre = pNombre;
}

////Metodo encargado de retornar el valor del nombre
string InfoPelicula::getNombre()
{
	return aNombre;
}

//Metodo encargado de modificar el valor del genero
void InfoPelicula::setGenero(string pGenero)
{
	aGenero = pGenero;
}

//Metodo encargado de retornar el valor del genero
string InfoPelicula::getGenero()
{
	return aGenero;
}

//Metodo encargado de modificar el valor del tipo
void InfoPelicula::setTipo(string pTipo)
{
	aTipo = pTipo;
}

//Metodo encargado de retornar el valor del tipo
string InfoPelicula::getTipo()
{
	return aTipo;
}

//Metodo encargado de modificar el valor del tipo de publico
void InfoPelicula::setTipoPublico(string pTipoPublico)
{
	aTipoPublico = pTipoPublico;
}

//Metodo encargado de retornar el valor del tipo de publico
string InfoPelicula::getTipoPelicula()
{
	return aTipoPublico;
}

//Metodo encargado de modificar el valor del idioma
void InfoPelicula::setIdioma(string pIdioma)
{
	aIdioma = pIdioma;
}

//Metodo encargado de retornar el valor del idioma
string InfoPelicula::getIdioma()
{
	return aIdioma;
}

//Metodo encargado de modificar el valor de la sinopsis
void InfoPelicula::setSinopsis(string pSinopsis)
{
	aSinopsis = pSinopsis;
}

//Metodo encargado de retornar el valor de la sinopsis
string InfoPelicula::getSinopsis()
{
	return aSinopsis;
}