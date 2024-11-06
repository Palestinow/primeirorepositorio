 /*Escreva um programa que armazene em array de escopo local a tabela abaixo, que relaciona a
distancia entre várias cidades (em Km).*/
/*Crie um procedimento que apresente uma lista das distâncias entre cada cidade da tabela, sem
repetições, isto é, se a distância entre as cidades 1 e 3 foi emitida, não é necessário emitir a distância
entre 3 e 1;*/
/*Crie uma função que leia do teclado o código de duas cidades, calcule, apresente e retorne a
distância entre elas, até que seja lido o código 0 para uma delas;*/
/*Crie uma função que leia um determinado percurso para até 5 cidades, calcule, apresente e retorne
a distância a ser percorrida. Exemplo: dado o percurso 1, 2, 3, 2, 5, teremos: 15 + 10 + 10 + 28 = 63km*/

#include <stdio.h>
int i, j;
int cidades[5][5] = {00, 15, 30, 05, 12,
			 		 15, 00, 10, 17, 28,
			 		 30, 10, 00, 03, 11,
			 		 05, 17, 03, 00, 80,
			  		 12, 28, 11, 80, 00 };
int dist();
int percurso();
void lista();
void lista(){
	
	printf("Lista da distancia entre as cidades\n");
	
	for (i=0; i<5; i++){
		for (j=0; j<5; j++){
			if(i<j){
	printf("\nCidade %d e cidade %d:   %d km de distancia\n", i+1, j+1, cidades[i][j]);					
					}
		}		
	}
}
int dist(){
	int cod = 1;
	
	printf("\nDigite 1 para descobrir a distancia entre uma cidade e outra ou 0 para finalizar:  ");
		scanf(" %d", &cod);
	
	while (cod != 0) {
		
	printf("\nDigite o numero da primeira cidade:  ");
		scanf(" %d", &i);
	
	printf("\nDigite o numero da segunda cidade:  ");
		scanf(" %d", &j);
			
	printf("\nA distancia entre a cidade %d e a cidade %d eh de %d km.", i, j, cidades[i-1][j-1]);
		
	printf("\nDigite 1 para repetir o processo ou 0 para finalizar:  ");
		scanf(" %d", &cod);	
					}
return 0;
		}
int percurso(){
	
}		



int main(){
lista();
dist();
return 0;
}
