#include <stdio.h>

int main() {
    char funcionario[5][30];
    float vendas[5][3];
    float soma[5]; // Array para armazenar a soma de cada funcionário
    float media[5]; // Array para armazenar a média de cada funcionário
    int i, iv;

    // Entrada de dados
    for (i = 0; i < 5; i++) {
        soma[i] = 0; // Inicializa soma para cada funcionário
        printf("Digite o nome do funcionário %d:\n", i + 1);
        scanf(" %[^\n]", funcionario[i]);
        
        // Entrada para as vendas do funcionário
        for (iv = 0; iv < 3; iv++) {
            printf("Digite o valor da venda %d do funcionário %s:\n", iv + 1, funcionario[i]);
            scanf("%f", &vendas[i][iv]);
            soma[i] += vendas[i][iv]; // Acumula as vendas
        }

        media[i] = soma[i] / 3; // Calcula a média
    }

    // Saída dos resultados
    printf("\nResultados:\n");
    for (i = 0; i < 5; i++) {
        printf("\nFuncionário: %s\n", funcionario[i]);
        for (iv = 0; iv < 3; iv++) {
            printf("Venda %d: %.2f\n", iv + 1, vendas[i][iv]);
        }
        printf("Soma das vendas: %.2f\n", soma[i]);
        printf("Média das vendas: %.2f\n", media[i]);
    }

    return 0;    
}

