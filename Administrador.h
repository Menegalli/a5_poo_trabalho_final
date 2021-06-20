#ifndef Administrador_h
#define Administrador_h

#include "Empregado.h"

class Administrador : public Empregado
{
public:
	Administrador();
	Administrador(string nome, string t, float sal, float imposto, float ajuda);
	
	virtual void calcularSalario();

	virtual void dados();

	void setAjudaDeCusto(float ajuda);

private:
	float ajudaDeCusto;
};



#endif
