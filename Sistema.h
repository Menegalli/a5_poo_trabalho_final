#ifndef Sistema_h
#define Sistema_h

#include <vector>
#include <iostream>
#include "Pessoa.h"
#include "Administrador.h"
#include "Empregado.h"
#include "Fornecedor.h"
#include "Operario.h"
#include "Vendedor.h"

using namespace std;


class Sistema
{
public:
	Sistema();
	
	void addFornecedor(string n, string t, float vc, float vd);
	void addPessoa(string n, string e, string t);
	void addEmpregado(string n, string t, float sal, float imposto);
	void addAdministrador(string n, string t, float sal, float imposto, float ajuda);
	void addOperario(string n, string t, float sal, float vp, float imposto, float comissao);
	void addVendedor(string n, string t, float sal, float vV, float imposto, float comissao);

	void relatorioPessoas();
	void relatorioFornecedores();
	void relatorioEmpregados();
 
	void updateDados();
	
private:
	
	vector<Pessoa> Pessoas;
	vector<Fornecedor> Fornecedores;
	vector<Empregado> Empregados;
	vector<Administrador> Administradores;
	vector<Operario> Operarios;
	vector<Vendedor> Vendedores;
	
};



#endif

