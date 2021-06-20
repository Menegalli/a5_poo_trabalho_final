#ifndef Operario_h
#define Operario_h

#include "Empregado.h"

class Operario : public Empregado
{
public:
	Operario();
	Operario(string nome, string telefone, float sal, float valorP, float imposto, float comissao);

	virtual void calcularSalario();

	void setValorProducao(float valorp);
	void setComissao(float com);

private:
	float valorProducao;
	float comissao;
};



#endif
