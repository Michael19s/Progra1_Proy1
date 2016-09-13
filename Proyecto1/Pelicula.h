#ifndef Pelicula_H
#define Pelicula_H

#pragma once
#include <sstream>
#include <string>

using namespace std;
class Pelicula
{
private:
	string aCodigo;
	string aNombre;
	string aGenero;
	string aTipo;
	string aTipoPublico;
	string aIdioma;
	string aSinopsis;

public:
	//Constructor y destructor
	Pelicula(string, string, string, string, string, string, string);
	~Pelicula(void);
	//Metodos para actualizar y recibir el valor del atributo codigo
	void setCodigo(string);
	string getCodigo();
	//Metodos para actualizar y recibir el valor del atributo nombre
	void setNombre(string);
	string getNombre();
	//Metodos para actualizar y recibir el valor del atributo genero
	void setGenero(string);
	string getGenero();
	//Metodos para actualizar y recibir el valor del atributo tipo de pelicula (3D o Normal)
	void setTipo(string);
	string getTipo();
	//Metodos para actualizar y recibir el valor del atributo tipo publico
	void setTipoPublico(string);
	string getTipoPelicula();
	//Metodos para actualizar y recibir el valor del atributo idioma
	void setIdioma(string);
	string getIdioma();
	//Metodos para actualizar y recibir el valor del atributo sinopsis
	void setSinopsis(string);
	string getSinopsis();
};
#endif
