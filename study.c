#include <stdio.h>

int main() {
    char funcionario[5][30];
    float vendas[5][3];
    float soma[5]; // Array para armazenar a soma de cada funcion�rio
    float media[5]; // Array para armazenar a m�dia de cada funcion�rio
    int i, iv;

    // Entrada de dados
    for (i = 0; i < 5; i++) {
        soma[i] = 0; // Inicializa soma para cada funcion�rio
        printf("Digite o nome do funcion�rio %d:\n", i + 1);
        scanf(" %[^\n]", funcionario[i]);
        
        // Entrada para as vendas do funcion�rio
        for (iv = 0; iv < 3; iv++) {
            printf("Digite o valor da venda %d do funcion�rio %s:\n", iv + 1, funcionario[i]);
            scanf("%f", &vendas[i][iv]);
            soma[i] += vendas[i][iv]; // Acumula as vendas
        }

        media[i] = soma[i] / 3; // Calcula a m�dia
    }

    // Sa�da dos resultados
    printf("\nResultados:\n");
    for (i = 0; i < 5; i++) {
        printf("\nFuncion�rio: %s\n", funcionario[i]);
        for (iv = 0; iv < 3; iv++) {
            printf("Venda %d: %.2f\n", iv + 1, vendas[i][iv]);
        }
        printf("Soma das vendas: %.2f\n", soma[i]);
        printf("M�dia das vendas: %.2f\n", media[i]);
    }

    return 0;    
}

