#include "Sistema.h"

Sistema::Sistema()
{
}

void Sistema::addFornecedor(string n, string t, float vc, float vd)
{
	Fornecedores.push_back(Fornecedor(n, t, vc, vd));
}

void Sistema::addPessoa(string n, string t, string e)
{
	Pessoas.push_back(Pessoa(n, t, e));
}

void Sistema::addEmpregado(string n, string t, float sal, float imposto)
{
	Empregados.push_back(Empregado(n, t, sal, imposto));
}

void Sistema::addAdministrador(string n, string t, float sal, float imposto, float ajuda)
{
	Administradores.push_back(Administrador(n, t, sal, imposto, ajuda));
}

void Sistema::addOperario(string n, string t, float sal, float vp, float imposto, float comissao)
{
	Operarios.push_back(Operario(n, t, sal, vp, imposto, comissao));
}

void Sistema::addVendedor(string n, string t, float sal, float vV, float imposto, float comissao)
{
	Vendedores.push_back(Vendedor(n, t, sal, vV, imposto, imposto));
}

void Sistema::relatorioPessoas()

{
	cout << "\n\tLista de pessoas: \n";
	for (int i = 0; i < Pessoas.size(); i++)
	{
		Pessoas[i].dados();
		
	}
	relatorioFornecedores();
	relatorioEmpregados();
}

void Sistema::relatorioFornecedores()
{
	cout << "\n\tLista de Fornecedores: \n";
	for (int i = 0; i < Fornecedores.size(); i++)
	{
		Fornecedores[i].dados();

	}
}

void Sistema::relatorioEmpregados()
{
	cout << "\n\tLista de Empregados: \n";
	for (int i = 0; i < Empregados.size(); i++)
	{
		Empregados[i].dados();

	}
	cout << "\n\tLista de Administradores: \n";
	for (int i = 0; i < Administradores.size(); i++)
	{
		Administradores[i].dados();
	}
	cout << "\n\tLista de Operarios: \n";
	for (int i = 0; i < Operarios.size(); i++)
	{
		Operarios[i].dados();

	}
	cout << "\n\tLista de Vendedores: \n";
	for (int i = 0; i < Vendedores.size(); i++)
	{
		Vendedores[i].dados();

	}
}

void Sistema::updateDados()
{
	string nome, aux1, aux2, aux3;
	int p_choice;
	float aux4, aux5, aux6, aux7;
	
	cout << "\n\n\tDeseja atualizar os dados de qual tipo de Pessoa? \n" <<
				"\n\t1 - Pessoa Comum" <<
				"\n\t2 - Fornecedor" <<
				"\n\t3 - Empregado" <<
				"\n\t4 - Administrador" <<
				"\n\t5 - Operario" <<
				"\n\t6 - Vendedor" <<
				"\n\n\tEscolha: ";

			cin >> p_choice;
			switch (p_choice){
			case 1:
				cout << "\n\tDigite o nome da pessoa que deseja atualizar: ";
				cin >> nome;
				cout << "\n\tDigite o novo nome da pessoa: ";
				cin >> aux1;
				cout << "\n\tDigite o novo telefone da pessoa: ";
				cin >> aux2;
				cout << "\n\tDigite o novo endereco da pessoa: ";
				cin >> aux3;
				
				for (int i = 0; i < Pessoas.size(); i++)
				{
					if (Pessoas[i].getNome() == nome) {
						Pessoas[i].setNome(aux1);
						Pessoas[i].setTelefone(aux2);
						Pessoas[i].setEndereco(aux3);
					}
				}				
				
				system("cls");
				cout << "\n\tPessoa atualizada com sucesso!\n\n";
			break;
			case 2:
				cout << "\n\tDigite o nome do fornecedor que deseja atualizar: ";
				cin >> nome;
				cout << "\n\tDigite o novo nome do fornecedor: ";
				cin >> aux1;
				cout << "\n\tDigite o novo telefone do fornecedor: ";
				cin >> aux2;
				cout << "\n\tDigite o novo valor de credito do fornecedor: ";
				cin >> aux4;
				cout << "\n\tDigite o novo valor de divida do fornecedor: ";
				cin >> aux5;
				
				for (int i = 0; i < Fornecedores.size(); i++)
				{
					if (Fornecedores[i].getNome() == nome) {
						Fornecedores[i].setNome(aux1);
						Fornecedores[i].setTelefone(aux2);
						Fornecedores[i].setValorCredito(aux4);
						Fornecedores[i].setValorDivida(aux5);
					}
				}
				
				system("cls");
				cout << "\n\tFornecedor atualizado com sucesso!\n\n";
			break;
			case 3:
				cout << "\n\tDigite o nome do empregado que deseja atualizar: ";
				cin >> nome;
				cout << "\n\tDigite o novo nome do empregado: ";
				cin >> aux1;
				cout << "\n\tDigite o novo telefone do empregado: ";
				cin >> aux2;
				cout << "\n\tDigite o novo valor do salario do empregado: ";
				cin >> aux4;
				cout << "\n\tDigite a nova porcentagem de impostos que sera aplicada no salario bruto do empregado: ";
				cin >> aux5;
				
				for (int i = 0; i < Empregados.size(); i++)
				{
					if (Empregados[i].getNome() == nome) {
						Empregados[i].setNome(aux1);
						Empregados[i].setTelefone(aux2);
						Empregados[i].setSalario(aux4);
						Empregados[i].setImposto(aux5);
					}
				}
				
				system("cls");
				cout << "\n\tEmpregado atualizado com sucesso!\n\n";
			break;
			case 4:
				cout << "\n\tDigite o nome do administrador que deseja atualizar: ";
				cin >> nome;
				cout << "\n\tDigite o novo nome do administrador: ";
				cin >> aux1;
				cout << "\n\tDigite o novo telefone do administrador: ";
				cin >> aux2;
				cout << "\n\tDigite o novo valor do salario do administrador: ";
				cin >> aux4;
				cout << "\n\tDigite a nova porcentagem de impostos que sera aplicado no salario bruto do administrador: ";
				cin >> aux5;
				cout << "\n\tDigite o novo valor da ajuda de custo para o administrador: ";
				cin >> aux6;
				
				for (int i = 0; i < Administradores.size(); i++)
				{
					if (Administradores[i].getNome() == nome) {
						Administradores[i].setNome(aux1);
						Administradores[i].setTelefone(aux2);
						Administradores[i].setSalario(aux4);
						Administradores[i].setImposto(aux5);
						Administradores[i].setAjudaDeCusto(aux6);
					}
				}
				
				system("cls");
				cout << "\n\tAdministrador atualizado com sucesso!\n\n";
			break;
			case 5:
				cout << "\n\tDigite o nome do administrador que deseja atualizar: ";
				cin >> nome;
				cout << "\n\tDigite o novo nome do operario: ";
				cin >> aux1;
				cout << "\n\tDigite o novo telefone do operario: ";
				cin >> aux2;
				cout << "\n\tDigite o novo valor do salario do operario: ";
				cin >> aux4;
				cout << "\n\tDigite o novo valor de producao do operario: ";
				cin >> aux5;
				cout << "\n\tDigite a nova porcentagem de impostos que sera aplicada no salario bruto do operario: ";
				cin >> aux6;
				cout << "\n\tDigite a nova porcentagem de comissao que sera aplicada no valor de producao do operario: ";
				cin >> aux7;
				
				for (int i = 0; i < Operarios.size(); i++)
				{
					if (Operarios[i].getNome() == nome) {
						Operarios[i].setNome(aux1);
						Operarios[i].setTelefone(aux2);
						Operarios[i].setSalario(aux4);
						Operarios[i].setValorProducao(aux5);
						Operarios[i].setImposto(aux6);
						Operarios[i].setComissao(aux7);
					}
				}
				
				system("cls");
				cout << "\n\tOperario atualizado com sucesso!\n\n";
			break;
			case 6:
				cout << "\n\tDigite o nome do vendedor que deseja atualizar: ";
				cin >> nome;
				cout << "\n\tDigite o novo nome do vendedor: ";
				cin >> aux1;
				cout << "\n\tDigite o novo telefone do vendedor: ";
				cin >> aux2;
				cout << "\n\tDigite o novo valor do salario do vendedor: ";
				cin >> aux4;
				cout << "\n\tDigite o novo valor de vendas do vendedor: ";
				cin >> aux5;
				cout << "\n\tDigite a nova porcentagem de impostos que sera aplicado no salario bruto do vendedor: ";
				cin >> aux6;
				cout << "\n\tDigite a nova porcentagem da comissao que sera aplicada no valor de producao do vendedor: ";
				cin >> aux7;
				
				for (int i = 0; i < Vendedores.size(); i++)
				{
					if (Vendedores[i].getNome() == nome) {
						Vendedores[i].setNome(aux1);
						Vendedores[i].setTelefone(aux2);
						Vendedores[i].setSalario(aux4);
						Vendedores[i].setValorVenda(aux5);
						Vendedores[i].setImposto(aux6);
						Vendedores[i].setComissao(aux7);
					}
				}
				
				system("cls");
				cout << "\n\tVendedor atualizado com sucesso!\n\n";
			break;
			default:
				cout << "\n\t Tipo Invalido, escolha outro tipo de Pessoa!\n\n";
			break;
			
		}
}
