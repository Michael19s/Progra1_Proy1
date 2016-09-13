#include "Pelicula.h"

//Constructor con parametros
Pelicula::Pelicula(string pCodigo, string pNombre, string pGenero, string pTipo, string pTipoPublico, string pIdioma, string pSinopsis)
{
	aCodigo = pCodigo;
	aNombre = pNombre;
	aGenero = pGenero;
	aTipo = pTipo;
	aTipoPublico = pTipoPublico;
	aIdioma = pIdioma;
	aSinopsis = pSinopsis;
}

//Destructor
Pelicula::~Pelicula(void)
{
}

//Metodo encargado de modificar el valor del codigo
void Pelicula::setCodigo(string pCodigo)
{
	aCodigo = pCodigo;
}

//Metodo encargado de retornar el valor del codigo
string Pelicula::getCodigo()
{
	return aCodigo;
}

//Metodo encargado de modificar el valor del nombre
void Pelicula::setNombre(string pNombre)
{
	aNombre = pNombre;
}

//Metodo encargado de retornar el valor del nombre
string Pelicula::getNombre()
{
	return aNombre;
}

//Metodo encargado de modificar el valor del genero
void Pelicula::setGenero(string pGenero)
{
	aGenero = pGenero;
}

//Metodo encargado de retornar el valor del genero
string Pelicula::getGenero()
{
	return aGenero;
}

//Metodo encargado de modificar el valor del tipo
void Pelicula::setTipo(string pTipo)
{
	aTipo = pTipo;
}

//Metodo encargado de retornar el valor del tipo
string Pelicula::getTipo()
{
	return aTipo;
}

//Metodo encargado de modificar el valor del tipo de publico
void Pelicula::setTipoPublico(string pTipoPublico)
{
	aTipoPublico = pTipoPublico;
}

//Metodo encargado de retornar el valor del tipo de publico
string Pelicula::getTipoPelicula()
{
	return aTipoPublico;
}

//Metodo encargado de modificar el valor del idioma
void Pelicula::setIdioma(string pIdioma)
{
	aIdioma = pIdioma;
}

//Metodo encargado de retornar el valor del idioma
string Pelicula::getIdioma()
{
	return aIdioma;
}

//Metodo encargado de modificar el valor de la sinopsis
void Pelicula::setSinopsis(string pSinopsis)
{
	aSinopsis = pSinopsis;
}

//Metodo encargado de retornar el valor de la sinopsis
string Pelicula::getSinopsis()
{
	return aSinopsis;
}