#ifndef Fornecedor_h
#define Fornecedor_h

#include "Pessoa.h"

class Fornecedor : public Pessoa
{
public:
	Fornecedor();
	Fornecedor(string nome, string telefone, float valorC, float valorD);

	void obterSaldo();
	virtual void dados();
	
	void setValorCredito(float valorCred);
	void setValorDivida(float valorDiv);

private:
	float valorCredito;
	float valorDivida;
};



#endif
