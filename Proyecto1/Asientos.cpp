#include "Asientos.h"


Asientos::Asientos()
{
	aDisponibilidadAsientos = 60;
	for (int i = 0; i< 6; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			aAsientos[i][j] = new Asiento();
		}

	}
}


Asientos::~Asientos(void)
{
}

//metodo que se encarga de modificar el valor de una posicion especifica de la matriz
void Asientos::setEstadoAsiento(int pFila, int pColumna, char pValor)
{
	if ((pValor == 'O') || (pValor == 'R'))
	{
		aAsientos[pFila][pColumna] -> setEstado(pValor);
		aDisponibilidadAsientos--;
	}
	else
	{
		aAsientos[pFila][pColumna] -> setEstado(pValor);
		aDisponibilidadAsientos++;
	}
}

//metodo que se encarga de retornar el valor de una posicion
Asiento* Asientos:: getEstadoAsientos(int pFila, int pColumna)
{
	return aAsientos[pFila][pColumna];
}

//metodo que se encargad de retornar la catnidad de asientos que quedan libres
int Asientos::getDisponibilidadAsientos()
{
	return aDisponibilidadAsientos;
}

//toda las posiciones de la matriz se inicializan en D quiere decir que todos los asientos se encuentran disponibles
void Asientos::InicializarAsientos()
{
	for (int i = 0; i < 6; i++)
		for (int j = 0; j < 10; j++)
			aAsientos[i][j] -> setEstado('D');
}

//Imprime en pantalla toda la matriz.
void Asientos::ImprimeAsientos()
{
	int lvFila = 1;
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	//stringstream lvMensaje;
	for(int i = 0; i < 6; i++)
	{
		if ( lvFila == 1)
			cout << 'A';
		if ( lvFila == 2)
			cout << 'B';
		if ( lvFila == 3)
			cout << 'C';
		if ( lvFila == 4)
			cout << 'D';
		if ( lvFila == 5)
			cout << 'E';
		if ( lvFila == 6)
			cout << 'F';

		for(int j = 0; j < 10; j++)
		{
			SetConsoleTextAttribute(hConsole, 32);
			cout << "| " << aAsientos[i][j] -> getEstado() << " |";
			if (j == 9)
			{
				cout << SetConsoleTextAttribute(hConsole, 15) << endl << "----------------------------------------------------";
				cout << endl;
			}

		}
		lvFila++;
		//cout << "\n";
		//cout << "\n";
		
	}
	
	cout << "\n";
	//return cout.str();
}