#include "Nodos.h"

Nodos::Nodos(const Nodos& original) {
	
}

Nodos::Nodos() {
	this->siguiente = 0;
	this->anterior = 0;
	this->datos=0;
}

Nodos::Nodos(ObjetosA* d) {
	this->siguiente = 0;
	this->anterior = 0;
	if(d){
		this->datos = d;
	}else{
		this->datos=0;
	}	
}


void Nodos::setAnterior(Nodos* ant) {
	this->anterior = ant;
}

Nodos* Nodos::getAnterior()  {
	return this->anterior;
}

void Nodos::setSiguiente(Nodos* next) {
	this->siguiente = next;
}

Nodos* Nodos::getSiguiente()  {
	return this->siguiente;
}

ObjetosA* Nodos::getDatos() {
	return this->datos;
}

void Nodos::setDatos(ObjetosA* d) {
	this->datos = d;
}

