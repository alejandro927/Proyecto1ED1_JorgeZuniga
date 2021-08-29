#ifndef NODOS_H
#define NODOS_H
#include "ObjetosA.h"
#include <string>
class Nodos : public ObjetosA
{
	public:
		Nodos();
		Nodos(ObjetosA*);
		Nodos(const Nodos&);
		void setAnterior(Nodos*);
		Nodos* getAnterior();
		void setSiguiente(Nodos*);
		Nodos* getSiguiente();
		void setDatos(ObjetosA*);
		ObjetosA* getDatos();
		~Nodos();

	private:
		ObjetosA* datos;
		Nodos* siguiente;
		Nodos* anterior;
};

#endif