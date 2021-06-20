#ifndef Vendedor_h
#define Vendedor_h

#include "Empregado.h"

class Vendedor : public Empregado
{
public:
	Vendedor();
	Vendedor(string nome, string telefone, float sal, float valorV, float imposto, float comissao);

	virtual void calcularSalario();

	void setValorVenda(float valorV);
	void setComissao(float com);

private:
	float valorVendas;
	float comissao;
};



#endif
