#include <stdio.h>
#include <string.h>

#define MAX_CLIENTES 6

// Definição da estrutura para as contas bancárias
typedef struct {
    int numeroConta;
    char nomeTitular[100];
    float saldo;
} ContaBancaria;

// Função para listar todos os clientes
void listarClientes(ContaBancaria clientes[], int n) {
	int i;
    printf("\nListagem de Clientes:\n");
    for (i = 0; i < n; i++) {
        printf("Conta: %d | Titular: %s | Saldo: %.2f\n", clientes[i].numeroConta, clientes[i].nomeTitular, clientes[i].saldo);
    }
}

// Função para realizar depósito
void deposito(ContaBancaria clientes[], int n) {
    int numeroConta;
    float valor;
	int i;
	
    printf("\nDigite o número da conta para depósito: ");
    scanf("%d", &numeroConta);

    // Verifica se a conta existe
    int indice = -1;
    for (i = 0; i < n; i++) {
        if (clientes[i].numeroConta == numeroConta) {
            indice = i;
            break;
        }
    }

    if (indice == -1) {
        printf("Conta não encontrada.\n");
        return;
    }

    // Solicita o valor do depósito
    printf("Digite o valor do depósito: ");
    scanf("%f", &valor);

    if (valor <= 0) {
        printf("Valor inválido para depósito.\n");
        return;
    }

    // Realiza o depósito
    clientes[indice].saldo += valor;
    printf("\nDepósito realizado com sucesso!\n");
    printf("Titular: %s | Saldo Atual: %.2f\n", clientes[indice].nomeTitular, clientes[indice].saldo);
}

// Função para realizar saque
void saque(ContaBancaria clientes[], int n) {
    int numeroConta;
    float valor;
    int i;

    printf("\nDigite o número da conta para saque: ");
    scanf("%d", &numeroConta);

    // Verifica se a conta existe
    int indice = -1;
    for (i = 0; i < n; i++) {
        if (clientes[i].numeroConta == numeroConta) {
            indice = i;
            break;
        }
    }

    if (indice == -1) {
        printf("Conta não encontrada.\n");
        return;
    }

    // Solicita o valor do saque
    printf("Digite o valor do saque: ");
    scanf("%f", &valor);

    if (valor <= 0) {
        printf("Valor inválido para saque.\n");
        return;
    }

    if (valor > clientes[indice].saldo) {
        printf("Saldo insuficiente para saque.\n");
        return;
    }

    // Realiza o saque
    clientes[indice].saldo -= valor;
    printf("\nSaque realizado com sucesso!\n");
    printf("Titular: %s | Saldo Atual: %.2f\n", clientes[indice].nomeTitular, clientes[indice].saldo);
}

int main() {
    // Inicializa os clientes com os dados fornecidos
    ContaBancaria clientes[MAX_CLIENTES] = {
        {1, "João Silva", 0.0},
        {2, "Maria Oliveira", 0.0},
        {3, "Pedro Santos", 0.0},
        {4, "Ana Costa", 0.0},
        {5, "Carlos Pereira", 0.0},
        {6, "Juliana Souza", 0.0}
    };

    int opcao;

    do {
        // Menu de opções
        printf("\nMenu:\n");
        printf("[1] Listagem de clientes\n");
        printf("[2] Depósito\n");
        printf("[3] Saque\n");
        printf("[4] Fim\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                listarClientes(clientes, MAX_CLIENTES);
                break;
            case 2:
                deposito(clientes, MAX_CLIENTES);
                break;
            case 3:
                saque(clientes, MAX_CLIENTES);
                break;
            case 4:
                printf("Fim do programa.\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 4);
    
    return 0;
}

