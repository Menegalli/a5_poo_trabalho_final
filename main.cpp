#include "Administrador.h"
#include "Empregado.h"
#include "Fornecedor.h"
#include "Operario.h"
#include "Pessoa.h"
#include "Sistema.h"
#include "Vendedor.h"

#include <stdlib.h>

/* Integrantes do Grupo:
 1 - Leonardo Martins Menegalli
 2 - Joao Vitor Da Silva Stefani
 3 - Vitoria Vieira da Silva
*/

int main() {

	Sistema sistema;

	string nome, tel, endereco;
	float salario, imposto, ajudaCusto, credito, divida, comissao, producao, venda;
	

	int op = 0, p_choice = 0, report_choice = 0;

	
	while (op != 4)
	{
		cout << "==============Sistema de Gestao de Pessoas================" <<
			"\n\n\t\n\t1 - Incluir uma Pessoa\n" <<
			"\t2 - Alterar dados de uma Pessoa\n" <<
			"\t3 - Relatorios\n" <<
			"\t4 - Sair do sistema\n\n\tFuncao: ";
		cin >> op;
		
		system("cls");

		switch (op)
		{
		case 1:
			
			cout << "\n\n\tQual o tipo de pessoa que desejas adicionar? \n" <<
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
				cout << "\n\tDigite o nome da pessoa: ";
				cin >> nome;
				cout << "\n\tDigite o telefone para contato da pessoa: ";
				cin >> tel;
				cout << "\n\tDigite o endereco da pessoa: ";
				cin >> endereco;
				sistema.addPessoa(nome, tel, endereco);
				system("cls");
				cout << "\n\tPessoa adicionada com sucesso!\n\n";
			break;
			case 2:
				cout << "\n\tDigite o nome do fornecedor: ";
				cin >> nome;
				cout << "\n\tDigite o telefone para contato do fornecedor: ";
				cin >> tel;
				cout << "\n\tDigite o valor de credito do fornecedor: ";
				cin >> credito;
				cout << "\n\tDigite o valor de divida do fornecedor: ";
				cin >> divida;
				sistema.addFornecedor(nome, tel, credito, divida);
				system("cls");
				cout << "\n\tFornecedor adicionado com sucesso!\n\n";
			break;
			case 3:
				cout << "\n\tDigite o nome do empregado: ";
				cin >> nome;
				cout << "\n\tDigite o telefone para contato do empregado: ";
				cin >> tel;
				cout << "\n\tDigite o valor do salario do empregado: ";
				cin >> salario;
				cout << "\n\tDigite a porcentagem de impostos que sera aplicada no salario bruto do empregado: ";
				cin >> imposto;
				sistema.addEmpregado(nome, tel, salario, imposto);
				system("cls");
				cout << "\n\tEmpregado adicionado com sucesso!\n\n";
			break;
			case 4:
				cout << "\n\tDigite o nome do administrador: ";
				cin >> nome;
				cout << "\n\tDigite o telefone para contato do administrador: ";
				cin >> tel;
				cout << "\n\tDigite o valor do salario do administrador: ";
				cin >> salario;
				cout << "\n\tDigite a porcentagem de impostos que sera aplicado no salario bruto do administrador: ";
				cin >> imposto;
				cout << "\n\tDigite o valor da ajuda de custo para o administrador: ";
				cin >> ajudaCusto;
				sistema.addAdministrador(nome, tel, salario, imposto, ajudaCusto);
				system("cls");
				cout << "\n\tAdministrador adicionado com sucesso!\n\n";
			break;
			case 5:
				cout << "\n\tDigite o nome do operario: ";
				cin >> nome;
				cout << "\n\tDigite o telefone para contato do operario: ";
				cin >> tel;
				cout << "\n\tDigite o valor do salario do operario: ";
				cin >> salario;
				cout << "\n\tDigite o valor de producao do operario: ";
				cin >> producao;
				cout << "\n\tDigite a porcentagem de impostos que sera aplicada no salario bruto do operario: ";
				cin >> imposto;
				cout << "\n\tDigite a porcentagem de comissao que sera aplicada no valor de producao do operario: ";
				cin >> comissao;
				sistema.addOperario(nome, tel, salario, producao, imposto, comissao);
				system("cls");
				cout << "\n\tOperario adicionado com sucesso!\n\n";
			break;
			case 6:
				cout << "\n\tDigite o nome do vendedor: ";
				cin >> nome;
				cout << "\n\tDigite o telefone para contato do vendedor: ";
				cin >> tel;
				cout << "\n\tDigite o valor do salario do vendedor: ";
				cin >> salario;
				cout << "\n\tDigite o valor de vendas do vendedor: ";
				cin >> venda;
				cout << "\n\tDigite a porcentagem de impostos que sera aplicado no salario bruto do vendedor: ";
				cin >> imposto;
				cout << "\n\tDigite a porcentagem da comissao que sera aplicada no valor de producao do vendedor: ";
				cin >> comissao;
				sistema.addVendedor(nome, tel, salario, venda, imposto, comissao);
				system("cls");
				cout << "\n\tVendedor adicionado com sucesso!\n\n";
			break;
			default:
				cout << "\n\t Tipo Invalido, escolha outro tipo de Pessoa!\n\n";
			break;
			}
			break;
		case 2:
			sistema.updateDados();
			break;
		case 3:
			cout << "\n\tQual o tipo de registro que deseja acessar?\n\n\t1 - Todas as pessoas registradas\n\t2 - Todos os fornecedores registrados\n\t3 - Todos os empregados registrados\n\n\tEscolha: ";
			cin >> report_choice;
			switch (report_choice) {
			case 1:
				sistema.relatorioPessoas();
				break;
			case 2:
				sistema.relatorioFornecedores();
				break;
			case 3:
				sistema.relatorioEmpregados();
				break;
			default:
				cout << "\n\tTipo Invalido, escolha outro tipo de Relatorio!\n\n";

				break;
			}
			break;
		case 4:
			cout << "\n\t Finalizando e desligando o Sistema.... \n\n";
			cout << "\n\n=================================================";
			break;
		default:
			cout << "\n\tOperacao Invalida, por favor, escolha uma operacao valida!\n\n";
			break;

		}
	}

}
