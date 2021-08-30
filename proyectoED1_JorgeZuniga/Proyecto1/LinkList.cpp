#include "LinkList.h"

LinkList::LinkList() {
	inicio = 0;
	this->numeroElementos = 0;
}

LinkList::LinkList(const LinkList& original) {
}

LinkList::~LinkList() {
	delete inicio;
}


void LinkList::imprimir() {

	if(inicio) {
		Nodos* temporal = inicio;
		while(temporal) {
			std::cout<<temporal->getDatos()->toString() << std::endl;
			temporal = temporal->getSiguiente();
		}
	}
	
}

bool LinkList::vacio() {
	return inicio == 0;
}

ObjetosA* LinkList::primero() {
	if(inicio) {
		return inicio->getDatos();
	} else {
		return 0;
	}
}

Nodos* LinkList::moverse(int posicion) {
	Nodos* temporal = inicio;
	for(int i = 1; i<posicion - 1 ; i++) {
		temporal = temporal->getSiguiente();
	}
	return temporal;
}


void LinkList::insertar(int posicion, ObjetosA* datos) {

	if (posicion == 1 && datos != NULL) {
		Nodos* temporal = new Nodos();
		temporal->setDatos(datos);
		temporal->setSiguiente(inicio);
		if (inicio != NULL) {
			inicio->setAnterior(temporal);
		}
		inicio = temporal;
		numeroElementos++;
	} else {
		if (posicion != numeroElementos + 1) {
			Nodos *temporal = moverse(posicion);
			Nodos *temporal2 = new Nodos();
			Nodos *temporal3 = moverse(posicion + 1);
			temporal2->setDatos(datos);
			temporal2->setAnterior(temporal);
			temporal2->setSiguiente(temporal3);
			temporal3->setAnterior(temporal2);
			numeroElementos++;
		} else {
			Nodos *temporal = moverse(posicion);
			Nodos *temporal2 = new Nodos();
			temporal2->setDatos(datos);
			temporal->setSiguiente(temporal2);
			temporal2->setAnterior(temporal);
			numeroElementos++;
		}
	}

}


ObjetosA* LinkList::sumprimir(int posicion) {
	ObjetosA* ob = NULL;
	if (posicion > 0 && posicion <= numeroElementos) {
		Nodos* temporal = inicio;
		Nodos* tempSiguiente;
		if (posicion == 1) {
			
			tempSiguiente = temporal->getSiguiente();
			if (tempSiguiente) {

				temporal->setSiguiente(NULL);
				tempSiguiente->setAnterior(NULL);
				ob = temporal->getDatos();
				temporal->setDatos(NULL);
				delete temporal;
				inicio = tempSiguiente;
				temporal = NULL;
			} else {

				ob = temporal->getDatos();
				temporal->setDatos(NULL);
				delete temporal;
				temporal = NULL;
				inicio = NULL;
			}
			
		} else {
			temporal = moverse(posicion);
			tempSiguiente = temporal->getSiguiente();
			temporal->setSiguiente(tempSiguiente->getSiguiente());
			if (posicion != numeroElementos) {
				temporal->getSiguiente()->setAnterior(temporal);
			}
			ob = tempSiguiente->getDatos();
			tempSiguiente->setSiguiente(NULL);
			tempSiguiente->setAnterior(NULL);
			tempSiguiente->setDatos(NULL);
			delete tempSiguiente;
		}
		numeroElementos--;
	}
	return ob;
}

void LinkList::anular() {
	delete inicio;
	inicio=NULL;
	while (inicio) {
		Nodos* temporal;
		temporal = inicio;
		inicio = inicio->getSiguiente();
		if (temporal->getDatos()) {
			delete temporal->getDatos();
			temporal->setDatos(NULL);
			temporal->setSiguiente(NULL);
		}
		delete temporal;
	}
	numeroElementos = 0;
}


ObjetosA* LinkList::siguiente(int posicion) {
	if (posicion >= 1 || posicion < numeroElementos) {
		Nodos* temporal = moverse(posicion + 2);
		return temporal->getDatos();
	} else {
		ObjetosA* ob = NULL;
		return ob;
		//delete ob;
	}
}

ObjetosA* LinkList::anterior(int posicion) {
	if (posicion <= 1 || posicion > numeroElementos) {
		return NULL;
	} else {
		Nodos* temporal = inicio;
		temporal = moverse(posicion);
		return temporal->getDatos();
		//delete temporal;
	}
}

ObjetosA* LinkList::recuperar(int posicion) {
	if (posicion >= 2 && posicion <= numeroElementos ) {
		Nodos* temporal = moverse(posicion);
		return temporal->getSiguiente()->getDatos();
	} else if (posicion == 1) {
		return primero();
	}else {
		return 0;
	}
	
}


