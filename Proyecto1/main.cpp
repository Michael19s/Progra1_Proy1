#include<iostream>
using namespace std;

#include "ListaPelicula.h"
#include "Horario.h"
#include "Sala.h"
#include "ListaFuncion.h"

string completarCadena(string pCadena, char pCaracter, int pTamanno)
{
	string lvRetorno = pCadena;
	for (int lvTamanno=lvRetorno.length(); lvTamanno<=pTamanno;  lvTamanno++)
		lvRetorno = lvRetorno + pCaracter;
	return lvRetorno;
}
void desplegarTitulo(string pTitulo, int pAncho)
{
	char lvCharacter = 201;
	cout << lvCharacter;
	lvCharacter = 205;
	for (int lvCoordX = 1; lvCoordX<pAncho; lvCoordX++)
		cout << lvCharacter;
	lvCharacter = 187;
	cout << lvCharacter << "\n";
	lvCharacter = 186;
	cout << lvCharacter;
	cout << completarCadena(pTitulo, ' ', pAncho-2);
	cout << lvCharacter;
	cout << "\n";

	lvCharacter = 204;
	cout << lvCharacter;
	lvCharacter = 205;
	for (int lvCoordX = 1; lvCoordX<pAncho; lvCoordX++)
		cout << lvCharacter;
	lvCharacter = 185;
	cout << lvCharacter << "\n";

	lvCharacter = 186;
	cout << lvCharacter;
	cout << completarCadena("", ' ', pAncho-2);
	cout << lvCharacter;
	cout << "\n";

	lvCharacter = 186;
	cout << lvCharacter;
	cout << completarCadena("", ' ', pAncho-2);
	cout << lvCharacter;
	cout << "\n";

	lvCharacter = 186;
	cout << lvCharacter;
	cout << completarCadena("", ' ', pAncho-2);
	cout << lvCharacter;
	cout << "\n";


	lvCharacter = 200;
	cout << lvCharacter;
	lvCharacter = 205;
	for (int lvCoordX = 1; lvCoordX<pAncho; lvCoordX++)
		cout << lvCharacter;
	lvCharacter = 188;
	cout << lvCharacter;
	cout << "\n";
}
void main () 
{
	desplegarTitulo("Titulo de prueba", 50);
	desplegarTitulo("Titulo de prueba 2", 110);

	//Prueba funcionamiento lista funcion
	string lvCodigo = "ESC029";
	string lvNombre = "EscuadronSuicida";
	string lvGenero = "Accion";
	string lvTipo = "3D";
	string lvTipoPublico = "Adultos";
	string lvIdioma = "InglesSub";
	string lvSinopsis = "UnGrupoDeVillanos...";
	ListaPelicula* ListaP = new ListaPelicula(); 
	ListaP -> AgregarInicio(lvCodigo, lvNombre, lvGenero, lvTipo, lvTipoPublico, lvIdioma, lvSinopsis);
	cout << ListaP -> ImprimirLista() << endl;
	//Pelicula* lvPelicula = ListaP -> BuscarPelicula(lvCodigo);
	ListaFuncion* ListaF = new ListaFuncion();
	//ListaF -> AgregarInicio (11, 30, "VIP", "Sala1", lvPelicula);
	cout << ListaF -> ImprimirLista() << endl;
	system("pause");
	//Prueba funcionamiento de lista pelicula
	//string lvCodigo = "ESC029";
	//string lvNombre = "EscuadronSuicida";
	//string lvGenero = "Accion";
	//string lvTipo = "3D";
	//string lvTipoPublico = "Adultos";
	//string lvIdioma = "InglesSub";
	//string lvSinopsis = "UnGrupoDeVillanos...";
	//string lvCodigo2 = "PURG1902";
	//string lvNombre2 = "LaPurga3";
	//string lvGenero2 = "Accion";
	//string lvTipo2 = "Regular";
	//string lvTipoPublico2 = "Adultos";
	//string lvIdioma2 = "Doblada";
	//string lvSinopsis2 = "LaTerceraEntregaD....";
	//ListaPelicula* Lista1 = new ListaPelicula(); 
	//Lista1 -> AgregarInicio(lvCodigo, lvNombre, lvGenero, lvTipo, lvTipoPublico, lvIdioma, lvSinopsis);
	//Lista1 -> AgregarInicio(lvCodigo2, lvNombre2, lvGenero2, lvTipo2, lvTipoPublico2, lvIdioma2, lvSinopsis2);
	//cout << Lista1 -> ImprimirLista() << endl;
	////cout << Lista1 -> ExistePelicula(lvCodigo) << endl;
	//cout << Lista1 -> Elimina(lvCodigo);
	//cout << Lista1 -> ImprimirLista() << endl;
	//cout << Lista1 -> BuscarPelicula(lvCodigo2) << endl;
	//system("pause");
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
