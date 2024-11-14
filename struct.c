/*Dados os seguintes campos de um registro “Pessoa”: nome, data de aniversário (dia, mês e ano).
• Desenvolver um programa em C que liste os meses do ano, e para cada mês, as pessoas que
fazem aniversário e suas respectivas idades.
• Pedir ao usuário a data de hoje.
• Considere um conjunto de 10 pessoas já previamente cadastradas*/
#include <stdio.h>
#define NumPessoas 10
int diahj;
int meshj;
int anohj;
typedef struct {
char nome[55]; 
int dian;
int mesn; 
int anon;}
Pessoa;
		   	  


void lista (Pessoa pessoas[NumPessoas]){
int i, j;
const char* meses[12] =
{
"Janeiro",
"Fevereiro",	
"Marco veio",
"Abril",
"Maio",
"Junho",
"Julho",
"Agosto",
"Setembro",
"Outubro",
"Novembro",
"Dezembro",
};
for(i=0; i<12; i++){
	
	printf("\n\n %s\n", meses[i]);
		for(j=0; j<10; j++){
			
		if(pessoas[j].mesn == i+1){
			printf("%s\n", pessoas[j].nome);
							
									}
	}
}
	
}




int main(){


	Pessoa pessoas[NumPessoas] = {
        {"João Silva", 15, 1, 1990},
        {"Maria Oliveira", 20, 5, 1985},
        {"Carlos Souza", 7, 1, 1992},
        {"Fernanda Costa", 14, 2, 1988},
        {"Lucas Pereira", 22, 7, 1995},
        {"Ana Santos", 3, 9, 1987},
        {"Juliana Lima", 19, 6, 1991},
        {"Ricardo Barbosa", 5, 3, 1989},
        {"Patrícia Almeida", 30, 4, 1993},
        {"Eduardo Rocha", 10, 12, 1980}	
								};
	
	printf("Digite o dia do mes de hoje\n");
	scanf(" %d", &diahj);
	printf("\nDigite o numero do mes em que estamos\n");
	scanf(" %d", &meshj);
	printf("Digite o ano em que estamos\n");
	scanf(" %d", &anohj);
	
	lista (pessoas);
		
	
	
	
	
return 0;
}
