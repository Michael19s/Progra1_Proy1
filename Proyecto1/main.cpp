#include<iostream>
using namespace std;

#include "ListaPelicula.h"
#include "Horario.h"
#include "Sala.h"

void main () 
{
	//Prueba funcionamiento de lista pelicula
	string lvCodigo = "ESC029";
	string lvNombre = "EscuadronSuicida";
	string lvGenero = "Accion";
	string lvTipo = "3D";
	string lvTipoPublico = "Adultos";
	string lvIdioma = "InglesSub";
	string lvSinopsis = "UnGrupoDeVillanos...";
	string lvCodigo2 = "PURG1902";
	string lvNombre2 = "LaPurga3";
	string lvGenero2 = "Accion";
	string lvTipo2 = "Regular";
	string lvTipoPublico2 = "Adultos";
	string lvIdioma2 = "Doblada";
	string lvSinopsis2 = "LaTerceraEntregaD....";
	ListaPelicula* Lista1 = new ListaPelicula(); 
	Lista1 -> AgregarInicio(lvCodigo, lvNombre, lvGenero, lvTipo, lvTipoPublico, lvIdioma, lvSinopsis);
	Lista1 -> AgregarInicio(lvCodigo2, lvNombre2, lvGenero2, lvTipo2, lvTipoPublico2, lvIdioma2, lvSinopsis2);
	cout << Lista1 -> toString() << endl;
	//cout << Lista1 -> ExistePelicula(lvCodigo) << endl;
	cout << Lista1 -> Elimina(lvCodigo);
	cout << Lista1 -> toString() << endl;
	system("pause");
	//...................................................................................................

	//Prueba funcionamiento del horario
	//int lvHora = 18;
	//int lvMinutos = 30;
	//Horario Horario1;
	//Horario1.setHora(lvHora);
	//Horario1.setMinutos(lvMinutos);
	//cout << Horario1.toString() << endl;
	//system("pause");

	//----------------------------------------------------------------------------------------------------
	//Prueba funcionamiento de la sala
	//Sala Sala1;
	//Asiento* Asiento1 = new Asiento();
	//Asiento1 -> setEstado('O');
	//Asiento* Asiento2 = new Asiento();
	//Asiento2 ->setEstado('R');
	//Sala1.InicializarAsientos();
	//cout << Sala1.ImprimeAsientos() << endl;
	//system("pause");
	//cout<<endl;
	//Sala1.setEstadoAsiento(0, 0,Asiento1);
	//Sala1.setEstadoAsiento(5, 4, Asiento2);
	//cout << Sala1.ImprimeAsientos() << endl;
	//cout << Sala1.getDisponibilidadAsientos() << endl;
	//system("pause");
}
