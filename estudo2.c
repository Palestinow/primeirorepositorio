/*Escreva um programa que simule contas banc�rias com as seguintes especifica��es:
� Crie uma estrutura de dados para as contas banc�rias contendo o n�mero da conta, o nome do
titular da conta e o saldo.
� A estrutura de dados deve ser inicializada com os dados de 6 clientes, com saldo inicial de 0.
� Crie um menu para o programa com as seguintes op��es:
[1] Listagem de clientes
[2] Dep�sito
[3] Saque
[4] Fim
� Para cada dep�sito ou saque realizado, dever� ser mostrado o nome do titular e o saldo atualizado.
� O programa n�o deve permitir saques com valores superiores ao saldo atual do cliente, deve
utilizar estruturas de repeti��o e modulariza��o.*/
#include <stdio.h>
#include <string.h>


struct contaBanco
	{
	int numconta;
	char nome[20];
	float saldo;	
	};
	
	void listagem
	{
	for(i=0; i<6; i++)
		{	
		printf("conta %d		%s		saldo:	%.2f\n",clientes[i].numconta, clientes[i].nome, clientes[i].saldo);
		}		
	}
	
	



	int main()
	{
		int i;
		int cod; 
		struct contaBanco clientes[6] =
		{
		{1, "thi", 0,},
		{2, "clovin", 0,},
		{3, "ago", 0,},
		{4, "fubanga", 0,},
		{5, "mane", 0,},
		{6, "sla", 0,}		
		};	
		
		printf("\nMENU\ninsira:\n");
		do
		{
			printf("[1] Listagem de clientes\n[2] Dep�sito\n[3] Saque\n[4] Fim");
			scanf("%d", &cod);
			
				switch (cod)
				{
					case 1:
						listagem;
						break;
						
					case 2:
						deposito;
						break;
						
					case 3:
						saque;		
						break;
						
					case 4:
						break;
					
					default:
						printf("\nCODIGO INVALIDO. TENTE NOVAMENTE");
						break;		
				}
		} while(cod != 4);
		return 0;	
	}
	
	
	
	
	
	
	
