#include <iostream>
#include "LinkList.h"
#include "ObjetosA.h"
/*
	JorgeZuniga
*/

int menu() {
	/*
	int opcion=0;
	std::cout<<"*****MENU*****\n1) Insertar\n2) Suprime\n3) Anula\n4) Localiza\n5) Imprime\n6) Primero\n7) Salida\nIngrese la opcion que desea:";
	std::cin>>opcion;
	return opcion;
	*/
}

int main(int argc, char** argv) {
	/*
	LinkList* list = new LinkList();
	int opcion=1;
	while(opcion > 0 && opcion < 7) {
		opcion = menu();
		switch(opcion) {
			case 1: {
				//Agregar un objeto
				int posicion=0;
				std::string cadena="";
				std::cout << "Ingrese la posicion que desea insertar: ";
				std::cin >> posicion;
				std::cout << "Inserte lo que desea agregar: ";
				getline(std::cin,cadena);
				getline(std::cin,cadena);
				
				Objeto* ob =new Objeto (cadena);
				list->insertar(posicion,ob);
			}
			break;
			case 2: {
				//Suprimir un objeto
				int posicion=0;
				std::cout<<"Ingrese la posicion que desea suprimir:";
				std::cin>>posicion;
				//list->sumprimir(posicion);
			}
			break;
			case 3: {
				//Anular
				//list->anular();
				std::cout<<"Se ha limpiado la lista con exito!!";
			}
			break;
			case 4: {
				//localizar
				std::string cadena = "";
				int posicion=0;
				std::cout<<"Ingrese la posicion que desea localizar:";
				std::cin>>posicion;
				Objeto* ob = new Objeto(cadena);
				list->localizar(ob);
			}
			break;
			case 5: {
				//imprimir
				
				if(list->vacio() == false) {
					//list->imprimir();
				} else {
					std::cout << "Primero llene luego imprima" << std::endl;
				}
			}
			break;
			case 6: {
				//primero
				//list->primero();
			}
			break;
			case 7: {
				std::cout<<"Gracias por usar el programa!!!";
			}
			break;
		}
	}
	*/
	
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