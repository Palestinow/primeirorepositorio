/*1. Escreva um programa que receba o valor de 3 vendas de 5 funcion�rios, armazene os valores
em um array, e utilizando estrutura de repeti��o, apresente na tela uma lista numerada contendo as
os valores, a somat�ria e a m�dia das vendas de cada funcion�rio.
2. Continue o programa da  1 paatividadera que armazene os nomes dos funcion�rios e apresente
na tela a mesma lista anterior, por�m agora com o nome dos funcion�rio.*/

#include <stdio.h>
int main(){
	char fun[5][30];
	float valor[5][3], soma, media;
	int ifun, iv, jv, jfun;
	int maxfun = 5;
	int maxvenda = 3;
	for (ifun = 0; ifun < maxfun; ifun++)
	{
        printf("Digite o nome do funcionario:\n");
        scanf(" %30[^\n]", fun[ifun]);
		
		for (jv=0; jv<maxvenda; jv++) 
		{
        printf("\nDigite o valor da venda %d desse funcionario:\n", jv+1);
        scanf(" %f", valor[jv]);
            soma += valor[iv][jv];
            media = soma/3;
            printf("\nFuncionario %d: %s", ifun+1, fun[ifun]);
   			printf("\nValor da venda %d: %.2f"), iv+1, valor[iv][jv]; 
		  	printf("\n");
        }
   
    
    }
   
	
	
	
return 0;	
}
