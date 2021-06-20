#ifndef Empregado_h
#define Empregado_h

#include "Pessoa.h"

class Empregado : public Pessoa
{
public:
	Empregado();
	Empregado(string nome, string t, float sal, float imposto);

	virtual void calcularSalario();
	
	virtual void dados();

	virtual void setSalario(float salario);
	virtual void setImposto(float impost);

protected:
	int codSetor;
	float salarioBase;
	int imposto;
};




#endif
