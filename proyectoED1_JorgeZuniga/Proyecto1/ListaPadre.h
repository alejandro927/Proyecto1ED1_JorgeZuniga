#ifndef LISTAPADRE_H
#define LISTAPADRE_H
#include "ObjetosA.h"

class ListaPadre
{
	public:
		ListaPadre();
		ListaPadre(const ListaPadre& original);
		virtual ~ListaPadre();

		virtual ObjetosA* primero()=0;
		virtual void insertar(int, ObjetosA* )=0;
		virtual ObjetosA* sumprimir(int)=0;
		virtual void anular()=0;
		virtual ObjetosA* siguiente(int)=0;
		virtual ObjetosA* anterior(int)=0;
		virtual ObjetosA* recuperar(int)=0;
		virtual void imprimir()=0;
		virtual bool vacio()=0;

	protected:
		int numeroElementos;
};

#endif