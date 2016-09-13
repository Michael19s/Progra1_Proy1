#include "ListaPelicula.h"


ListaPelicula::ListaPelicula()
{
}


ListaPelicula::~ListaPelicula(void)
{
}
//Metodo que se encarga de verificar que la lista contenga o no informacion
bool ListaPelicula::ListaVacia()
{
	bool lvValorRetorno = false;
	if (aContador == 0)
		lvValorRetorno = true;
	return lvValorRetorno;
}
//Metodo encargado de buscar las peliculas por codigo y determinar si existe
bool ListaPelicula::ExistePelicula(string pCodigo)
{
	bool lvValorRetorno = false;
	NodoPelicula* lvActual = aNodoPelicula;
	Pelicula* lvPelicula = NULL;
	while ((lvActual != NULL)&&(lvValorRetorno = false))
	{
		lvPelicula = lvActual ->getPelicula();
		if (pCodigo == lvPelicula -> getCodigo())
			lvValorRetorno = true;
		else
			lvActual = lvActual -> getSiguiente();
	}
	return lvValorRetorno;
}

//Metodo encargado de verificar si una pelicula se encuentra en la lista o no de acuerdo al codigo que contiene
bool ListaPelicula::CompararPelicula(string pCodigo, NodoPelicula* pNodoPelicula)
{
	bool lvValorRetorno = false;
	Pelicula* lvPelicula = NULL;
	if (pNodoPelicula != NULL)
	{
		lvPelicula = pNodoPelicula ->getPelicula();/*Lo que se pretende con este proceso es que la variable pelicula tenga acceso al get codigo que se utiliza posteriormente*/
		if (pCodigo == lvPelicula -> getCodigo())
			lvValorRetorno = true;
	}
	return lvValorRetorno;
}
//Metodo encargado de buscar una pelicula y retornar su informacion
//bool ListaPelicula::BucarPelicula(string pCodigo)
//{
//	NodoPelicula* lvActual = aNodoPelicula;
//	Pelicula* lvPelicula = NULL;
//	while (lvActual != NULL)
//	{
//		lvPelicula = lvActual ->getPelicula();
//		if (pCodigo == lvPelicula -> getCodigo())
//			return lvPelicula;
//		else
//			lvActual = lvActual -> getSiguiente();
//	}
//}
//Metodo encargado de agregar una pelicula a la lista, se realiza el metodo de manera que al agregar una pelicula se agregue automaticamente al inicio 
bool ListaPelicula::AgregarInicio(string pCodigo, string pNombre, string pGenero, string pTipo, string pTipoPublico, string pIdioma, string pSinopsis)
{
	bool lvValorRetorno = false;
	//Se utiliza un condicional para contemplar los dos panoramas si existe alguna pelicula o no existe ninguna
	if (ListaVacia() == true)
	{
		aNodoPelicula->setSiguiente(new NodoPelicula(pCodigo, pNombre, pGenero, pTipo, pTipoPublico, pIdioma, pSinopsis));
		lvValorRetorno = true;
		aContador++;
	}
	else
	{
		//Ya existen peliculas
		if (ExistePelicula(pCodigo)==false)/*Se verifica si la pelicula ya esta porque si ya esta no se puede ingresar otra vez.*/
		{
			NodoPelicula* lvAuxiliar;
			lvAuxiliar = new NodoPelicula(pCodigo, pNombre, pGenero, pTipo, pTipoPublico, pIdioma, pSinopsis);
			lvAuxiliar -> setSiguiente(aNodoPelicula);
			aNodoPelicula = lvAuxiliar;
			lvValorRetorno = true;
			aContador++;
		}
	}
	return lvValorRetorno;
}

//Metodo que se encarga de eliminar una pelicula determinada por medio del codigo de pelicula
bool ListaPelicula::Elimina(string pCodigo)
{
	bool lvValorRetorno = false;
	if(ListaVacia() == false)
	{
		if(aContador == 1)
		{
			//En este caso solo existe una pelicula
			if (CompararPelicula(pCodigo, aNodoPelicula) == true)
			{
				delete (aNodoPelicula);
				aNodoPelicula = NULL;
			}
		}
		else
		{
			//Existen mas de una pelicula
			NodoPelicula* lvAnterior = aNodoPelicula;
			NodoPelicula* lvActual = aNodoPelicula -> getSiguiente();
			while (lvActual != NULL)
			{
				if (CompararPelicula(pCodigo, lvActual) == true)/*invoca al metodo comparar para determinar si existe la pelicula en el nodo actual*/
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
string ListaPelicula::toString()
{
	stringstream lvMensaje;
	NodoPelicula* lvActual = aNodoPelicula;
	while(lvActual != NULL)
	{
		lvMensaje << lvActual -> getPelicula() << "->";
		lvActual = lvActual -> getSiguiente();
	}
	lvMensaje << "NULL";
	return lvMensaje.str();
}

