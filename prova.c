/*AUTOR: Thiago costa palestino. prova 3*/
/*PROGRAMA PARA CRIAR PERFIL DE CLIENTES E CALCULAR SUA MEDIA DE GASTO NA LOJA*/
// questao 1:
#include <stdio.h>
int main(){
char clientes[10][36];
int i, ic, idades[10], perfil[10];
float compras[10][3], media[10], soma[10];
printf("PROGRAMA DE COMPRAS.\n_______________________\n\n");
 
for(i=0; i<10; i++) //repetiçao para informaçoes dos clientes
 
{
 
printf("Digite o nome do cliente n %d:\n", i+1); //pede as informaçoes do cliente
 
scanf(" %[^\n]", clientes[i]);
 
printf("Digite a idade do cliente:\n");
 
scanf(" %d", &idades[i]); 
 
for(ic=0; ic<3; ic++) //repetiçao para cada compra de cada cliente
 
{
 
printf("Digite o valor da compra n%d do cliente\n", ic+1);
 
scanf(" %f", &compras[i][ic]);
 
 
soma[i]=soma[i]+compras[i][ic]; //soma o valor das compras
 
}
 
media[i]=soma[i]/3; //calcula a media do valor das compras
 
 
if((media[i]>599)&&(idades[i]>45)) 
//perfil ouro, prata ou bronze
 
{
 
perfil[i]=1;
 
} 
 
else if((media[i]>300)||(idades[i]>30))
 
{
 
perfil[i]=2;
 
}
 
else
 
{
 
perfil[i]=3;
 
}
 
 
}
 
 
for(i=0; i<10; i++) //repetiçao para saida de dados de cada cliente
 
{
 
printf("\n\n_________________________________\n");
 
printf("cliente n%d 
%s", i+1, clientes[i]);
 
printf(" Idade: %d", idades[i]);
 
 
for(ic=0; ic<3; ic++)
 
{
 
printf("\nCompra %d: %.2f", ic+1, compras[i][ic]); 
 
}
 
printf("\nA media de valor das compras do cliente eh: %.2f\n", media[i]);
 
 
switch(perfil[i]) //nomeia os perfis 
 
{
 
case 1:
 
printf("CLIENTE OURO\n");
 
break;
 
case 2:
 
printf("CLIENTE PRATA\n");
 
break;
 
case 3:
 
printf("CLIENTE BRONZE\n"); 
 
break;
 
} 
 
} 
 
return 0;
}
/*questao 2:
PARA(i=0; i<10; i++)
ESCREVA("Digite a idade do cliente:")
LEIA(idades[i])
FIMPARA
*/
