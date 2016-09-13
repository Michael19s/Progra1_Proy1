#include "Sala.h"


Sala::Sala(void)
{
	for(int i = 0; i<6; i++)
		for(int j = 0; j<10; j++)
			aAsientos[i][j] = ' ';
}

Sala::~Sala(void)
{
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

//metodo que se encarga de modificar el valor de una posicion especifica de la matriz
//ademas, disminuye la cantidad de asientos disponibles, ejempo: tenia 60 asientos
void Sala::setEstadoAsiento(int pFila, int pColumna, char pValor)
{
	if ((pValor == 'O') || (pValor == 'R'))
	{
		aAsientos[pFila][pColumna] = pValor;
		aDisponibilidadAsientos--;
	}
	else
	{
		aAsientos[pFila][pColumna] = pValor;
		aDisponibilidadAsientos++;
	}
}

//metodo que se encarga de retornar el valor de una posicion
char Sala:: getEstadoAsiento(int pFila, int pColumna)
{
	return aAsientos[pFila][pColumna];
}

//retorna la cantidad de asientos que pueden ser elegidos en la sala
int Sala::getDisponibilidadAsientos()
{
	return aDisponibilidadAsientos;
}

//toda las posiciones de la matriz se inicializan en D quiere decir que todos los asientos se encuentran disponibles
void Sala::InicializarAsientos()
{
	for (int i = 0; i < 6; i++)
		for (int j = 0; j < 10; j++)
			aAsientos[i][j] = 'D';
}

//Imprime en pantalla toda la matriz.
string Sala::ImprimeAsientos()
{
	stringstream lvMensaje;
	for(int i = 0; i < 6; i++)
		for(int j = 0; j < 10; j++)
			lvMensaje << aAsientos[i][j] << " ";
	lvMensaje << endl;
	return lvMensaje.str();
}