#ifndef InfoPelicula_H
#define InfoPelicula_H

#pragma once
#include <sstream>
#include <string>

using namespace std;
class InfoPelicula
{
private:
	string aNombre;
	string aGenero;
	string aTipo;
	string aTipoPublico;
	string aIdioma;
	string aSinopsis;

public:
	InfoPelicula(string, string, string, string, string, string);
	~InfoPelicula(void);
	void setNombre(string);
	string getNombre();
	void setGenero(string);
	string getGenero();
	void setTipo(string);
	string getTipo();
	void setTipoPublico(string);
	string getTipoPelicula();
	void setIdioma(string);
	string getIdioma();
	void setSinopsis(string);
	string getSinopsis();
};
#endif
