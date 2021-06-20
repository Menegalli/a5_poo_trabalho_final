#include "Pessoa.h"

Pessoa::Pessoa() 
{
}

Pessoa::Pessoa(string nome, string telefone, string endereco)
{
	this->nome = nome;
	this->telefone = telefone;
	this->endereco = endereco;
}

string Pessoa::getNome()
{
	return nome;
}

string Pessoa::getEndereco()
{
	return endereco;
}

string Pessoa::getTelefone()
{
	return telefone;
}

void Pessoa::setNome(string n)
{
	nome = n;
}

void Pessoa::setEndereco(string e)
{
	endereco = e;
}

void Pessoa::setTelefone(string t)
{
	telefone = t;
}


void Pessoa::dados()
{
	cout << "\n\t\tNome: " << nome << "\n\t\tTelefone: " << telefone<<"\n\t\tEndereco: "<<endereco<<endl;
}
