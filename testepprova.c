#include <stdio.h>

int main() {
    int matriz[4][4]; // Definindo uma matriz 4x4
    int i, j;

    // Preencher a matriz com n�meros
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            matriz[i][j] = i * 4 + j + 1; // Atribui n�meros de 1 a 16
        }
    }

    // Imprimir a matriz
    printf("Matriz 4x4:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%2d ", matriz[i][j]); // Imprimir cada n�mero
        }
        printf("\n"); // Nova linha ap�s cada linha da matriz
    }

	return 0;
}

