#include "Fornecedor.h"

Fornecedor::Fornecedor() 
{
}

Fornecedor::Fornecedor(string nome, string telefone, float valorC, float valorD)
{
	this->nome = nome;
	this->endereco = endereco;
	this->telefone = telefone;

	valorCredito = valorC;
	valorDivida = valorD;
}

void Fornecedor::obterSaldo()
{
	float saldo;

	saldo = valorCredito - valorDivida;

	cout << "\n\t\tSaldo: "  << saldo <<endl;
}

void Fornecedor::dados()
{
	cout << "\n\t\tNome: " << nome << "\n\t\tTelefone: " << telefone;
	obterSaldo();
}

void Fornecedor::setValorCredito(float valorCred)
{
	valorCredito = valorCred;
}

void Fornecedor::setValorDivida(float valorDiv)
{
	valorDivida = valorDiv;
}

