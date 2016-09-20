#include "ListaFuncion.h"


ListaFuncion::ListaFuncion()
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

//Metodo encargado de buscar las funciones por sus valores y determinar si existe
bool ListaFuncion::ExisteFuncion(Pelicula* pPelicula, string pNombre, string pTipo, int pHora, int pMinutos)
{
	bool lvValorRetorno = false;
	NodoFuncion* lvActual = aNodoFuncion;
	Pelicula* lvPelicula = NULL;
	Sala lvSala;
	Horario lvHorario;
	if (ListaVacia() == false)
	{
		while ((lvActual != NULL)&&(lvValorRetorno == false))
		{
			lvPelicula = lvActual -> getPelicula();
			lvHorario = lvActual -> getHorario();
			lvSala = lvActual -> getSala();
			if ((pPelicula -> getCodigo() == lvPelicula -> getCodigo())&&(pNombre == lvSala.getNombre())&&(pTipo == lvSala.getTipo())&&(pHora == lvHorario.getHora())&&(pMinutos == lvHorario.getMinutos()))
				lvValorRetorno = true;
			else
				lvActual = lvActual -> getSiguiente();
		}
	}
	return lvValorRetorno;
}

//Metodo encargado de verificar si una funcion se encuentra en la lista o no de acuerdo a los valores que contiene
bool ListaFuncion::CompararFuncion(Pelicula* pPelicula, string pNombre, string pTipo, int pHora, int pMinutos, NodoFuncion* pNodoFuncion)
{
	bool lvValorRetorno = false;
	Pelicula* lvPelicula = NULL;
	Sala lvSala;
	Horario lvHorario;
	if (pNodoFuncion != NULL)
	{
		lvPelicula = pNodoFuncion -> getPelicula();
		lvHorario = pNodoFuncion -> getHorario();
		lvSala = pNodoFuncion -> getSala();
		if ((pPelicula -> getCodigo() == lvPelicula -> getCodigo())&&(pNombre == lvSala.getNombre())&&(pTipo == lvSala.getTipo())&&(pHora == lvHorario.getHora())&&(pMinutos == lvHorario.getMinutos()))
			lvValorRetorno = true;
	}
	return lvValorRetorno;
}

//Metodo encargado de agregar una pelicula a la lista, se realiza el metodo de manera que al agregar una pelicula se agregue automaticamente al inicio 
bool ListaFuncion::AgregarInicio(int pHora, int pMinutos, string pTipo, string pNombre, Pelicula* pPelicula)
{
	bool lvValorRetorno = false;
	//Se utiliza un condicional para contemplar los dos panoramas si existe alguna pelicula o no existe ninguna
	if (ListaVacia() == true)
	{
		aNodoFuncion =new NodoFuncion(pHora, pMinutos, pTipo, pNombre, pPelicula);
		lvValorRetorno = true;
		aContador++;
	}
	else
	{
		//Ya existen peliculas
		if (ExisteFuncion(pPelicula, pNombre, pTipo, pHora,pMinutos) == false)/*Se verifica si la pelicula ya esta porque si ya esta no se puede ingresar otra vez.*/
		{
			NodoFuncion* lvAuxiliar;
			lvAuxiliar = new NodoFuncion(pHora, pMinutos, pTipo, pNombre, pPelicula);
			lvAuxiliar -> setSiguiente(aNodoFuncion);
			aNodoFuncion = lvAuxiliar;
			lvValorRetorno = true;
			aContador++;
		}
	}
	return lvValorRetorno;
}

//Metodo que se encarga de eliminar una pelicula determinada por medio del codigo de pelicula
bool ListaFuncion::Elimina(Pelicula* pPelicula, string pNombre, string pTipo, int pHora, int pMinutos)
{
	bool lvValorRetorno = false;
	if(ListaVacia() == false)
	{
		if(aContador == 1)
		{
			//En este caso solo existe una pelicula
			if (CompararFuncion(pPelicula, pNombre, pTipo, pHora, pMinutos, aNodoFuncion) == true)
			{
				delete (aNodoFuncion);
				aNodoFuncion = NULL;
			}
		}
		else
		{
			//Existen mas de una pelicula
			NodoFuncion* lvAnterior = aNodoFuncion;
			NodoFuncion* lvActual = aNodoFuncion -> getSiguiente();
			while (lvActual != NULL)
			{
				if (CompararFuncion(pPelicula, pNombre, pTipo, pHora, pMinutos, lvActual) == true)/*invoca al metodo comparar para determinar si existe la funcion en el nodo actual*/
				{
					lvAnterior -> setSiguiente(lvActual -> getSiguiente());/*Anterior pasa a apuntar al valor del siguiente de actual*/
					delete (lvActual);
					lvActual = NULL;
					lvValorRetorno = true;/*se logro eliminar*/
				}
				else
				{
					//actual y anterior avanzan para seguir buscando el codigo a eliminar
					lvAnterior = lvActual;
					lvActual = lvAnterior -> getSiguiente();
				}
			}
		}
	}
	return lvValorRetorno;
}

//Metodo encargado de imprimir en pantalla la lista
string ListaFuncion::ImprimirLista()
{
	stringstream lvMensaje;
	NodoFuncion* lvActual = aNodoFuncion;
	Pelicula* lvPelicula = NULL;
	Horario lvHorario;
	Sala lvSala;
	string lvPeliculaRetorno = " ";
	string lvHorarioRetorno = " ";
	string lvSalaRetorno = " ";

	while(lvActual != NULL)
	{
		lvPelicula = lvActual->getPelicula();
		//lvHorario = lvActual -> getHorario(); 
		//lvSala = lvActual -> getSala();
		//lvHorarioRetorno = lvHorario.ImprimirHorario();
		//lvSalaRetorno = lvSala.ImprimirSala();
		lvPeliculaRetorno = lvPelicula -> ImprimirPelicula(lvPelicula->getCodigo());
		//lvMensaje << lvHorarioRetorno << "\n";
		//lvMensaje << lvSalaRetorno << "\n";
		lvMensaje << lvPeliculaRetorno << "\n";
		lvActual = lvActual -> getSiguiente();
	}
	return lvMensaje.str();
}