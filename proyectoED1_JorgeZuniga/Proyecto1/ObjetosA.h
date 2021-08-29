#ifndef OBJETOSA_H
#define OBJETOSA_H
#include <string>
class ObjetosA
{
	public:
		ObjetosA();
		ObjetosA(std::string cad);
		virtual bool igual(ObjetosA*);
		virtual std::string toString();
	private:
		std::string dato;
};

#endif