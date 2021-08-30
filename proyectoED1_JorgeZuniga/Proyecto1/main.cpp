#include <iostream>
#include "LinkList.h"
#include "ObjetosA.h"
/*
	JorgeZuniga
*/


int main(int argc, char** argv) {
	
	
	LinkList* list = new LinkList();
	std::string cad1 = "1";
	std::string cad2 = "2";
	std::string cad3 = "3";
	std::string cad4 = "4";
	list->insertar(1,new ObjetosA(cad1));
	list->insertar(2,new ObjetosA(cad2));
	list->insertar(3,new ObjetosA(cad3));
	list->insertar(4,new ObjetosA(cad4));
	std::cout<<"La lista al inicio:\n";
	//list->imprimir();
	//list->anular();
	std::cout<<"\n\nLa lista vacia:\n";	
	//list->imprimir();
	
	delete list;
	return 0;
}