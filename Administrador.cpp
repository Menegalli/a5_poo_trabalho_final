#include "Administrador.h"

Administrador::Administrador()
{
}

Administrador::Administrador(string nome, string t, float sal, float imposto, float ajuda)
{
	this->nome = nome;
	telefone = t;
	salarioBase = sal;
	this->imposto = imposto;
	ajudaDeCusto = ajuda;
}

void Administrador::calcularSalario()
{
	float salarioL;
	float imp;
	imp = imposto / 100.0;

	salarioL = salarioBase - (salarioBase * imp);

	salarioL = salarioL + ajudaDeCusto;

	cout << "\n\t\tSalario de " << nome << ": " << salarioL << endl;
}

void Administrador::dados()
{
	cout << "\n\t\tNome: " << nome << "\n\t\tTelefone: " << telefone;
	calcularSalario();
}

void Administrador::setAjudaDeCusto(float ajuda)
{
	ajudaDeCusto = ajuda;
}
