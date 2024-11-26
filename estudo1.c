#include <stdio.h>
#include <string.h>

void passagemParametros(int zNew, int xNew, int *yNew, int val, char n[]){
	zNew = zNew * 11;
	xNew = xNew - 10;
	*yNew = zNew;

	strcat(n, " Gabriel");
	printf("\n\nValor de ZNew: %d", zNew);
	printf("\nValor de XNew: %d", xNew);
	printf("\nValor de YNew: %d", *yNew);
	printf("\nValor de val: %d", val);
	printf("\nValor de nome: %s", n);	
}

int main(){
	int z = 10;
	int x = -10;
	int y;
	char nome[60] = "Fabricio Olivo";

	printf("\nValor de Z: %d", z);
	printf("\nValor de X: %d", x);
	printf("\nValor de Y: %d", y);
	
	passagemParametros(z, x, &y, 50, nome);
	
	printf("\n\nValor de Z: %d", z);
	printf("\nValor de X: %d", x);
	printf("\nValor de Y: %d", y);
	printf("\nValor de nome: %s", nome);
	
	return 0;
}

