#ifndef Pessoa_h
#define Pessoa_h

#include <iostream>
using namespace std;


class Pessoa
{
public:
	Pessoa();
	Pessoa(string nome, string telefone, string endereco);

	string getNome();
	string getEndereco();
	string getTelefone();

	virtual void setNome(string n);
	virtual void setEndereco(string e);
	virtual void setTelefone(string t);

	virtual void dados();


protected:
	string nome;
	string endereco;
	string telefone;

	
};


#endif
