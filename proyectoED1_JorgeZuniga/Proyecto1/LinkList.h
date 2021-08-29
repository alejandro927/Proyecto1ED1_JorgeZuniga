#ifndef LINKLIST_H
#define LINKLIST_H
#include <iostream>
#include "ListaPadre.h"
#include "Nodos.h"
#include <string>
class LinkList : public ListaPadre {
	public:
		LinkList();
		LinkList(const LinkList&);
		virtual ~LinkList();
		virtual ObjetosA* primero();
		virtual void insertar(int, ObjetosA* );
		virtual ObjetosA* sumprimir(int);
		virtual void anular();
		virtual int localizar(ObjetosA*);
		virtual ObjetosA* siguiente(int);
		virtual ObjetosA* anterior(int);
		virtual ObjetosA* recuperar(int);
		virtual void imprimir();
		virtual bool vacio();
	private:
		Nodos* inicio;
		Nodos* moverse(int);
};

#endif