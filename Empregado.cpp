#include "Empregado.h"

Empregado::Empregado()
{
}

Empregado::Empregado(string nome, string t, float sal, float imposto)
{
	this->nome = nome;
	telefone = t;
	salarioBase = sal;
	this->imposto = imposto;
}

void Empregado::calcularSalario()
{
	float salarioL;
	float imp;

	imp = imposto / 100.0;

	salarioL = salarioBase - (salarioBase * imp);

	cout << "\n\t\tSalario de " << nome << ": " << salarioL << endl;
}

void Empregado::dados()
{
	
		cout << "\n\t\tNome: " << nome << "\n\t\tTelefone: " << telefone<<endl;
		calcularSalario();
	

}

void Empregado::setSalario(float salario)
{
	salarioBase = salario;
}

void Empregado::setImposto(float impost)
{
	imposto = impost;
}

