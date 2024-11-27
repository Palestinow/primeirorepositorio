#include <stdio.h>
#include <stdlib.h>

#define MAX_CLIENTES 6

// Estrutura que representa uma conta bancária
typedef struct {
    int numeroConta;
    char nomeTitular[50];
    float saldo;
} ContaBancaria;

// Funções auxiliares
void listarClientes(ContaBancaria clientes[], int totalClientes);
void deposito(ContaBancaria *cliente);
void saque(ContaBancaria *cliente);

int main() {
    // Inicializando as contas com saldo 0 e dados dos clientes
    ContaBancaria clientes[MAX_CLIENTES] = {
        {1, "Cliente 1", 0},
        {2, "Cliente 2", 0},
        {3, "Cliente 3", 0},
        {4, "Cliente 4", 0},
        {5, "Cliente 5", 0},
        {6, "Cliente 6", 0}
    };
    
    int opcao;
    int numeroConta;
    int i;
    int fim = 0;

    // Loop principal do menu
    while (!fim) {
        // Exibe o menu
        printf("\nMenu:\n");
        printf("[1] Listagem de clientes\n");
        printf("[2] Deposito\n");
        printf("[3] Saque\n");
        printf("[4] Fim\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: // Listagem de clientes
                listarClientes(clientes, MAX_CLIENTES);
                break;
            
            case 2: // Depósito
                printf("Digite o numero da conta para o deposito: ");
                scanf("%d", &numeroConta);
                
                // Procura o cliente pelo numero da conta
                for (i = 0; i < MAX_CLIENTES; i++) {
                    if (clientes[i].numeroConta == numeroConta) {
                        deposito(&clientes[i]);
                        break;
                    }
                }
                
                if (i == MAX_CLIENTES) {
                    printf("Conta nao encontrada!\n");
                }
                break;
            
            case 3: // Saque
                printf("Digite o numero da conta para o saque: ");
                scanf("%d", &numeroConta);
                
                // Procura o cliente pelo numero da conta
                for (i = 0; i < MAX_CLIENTES; i++) {
                    if (clientes[i].numeroConta == numeroConta) {
                        saque(&clientes[i]);
                        break;
                    }
                }

                if (i == MAX_CLIENTES) {
                    printf("Conta nao encontrada!\n");
                }
                break;
            
            case 4: // Fim
                fim = 1;
                break;
            
            default:
                printf("Opcao invalida!\n");
                break;
        }
    }

    return 0;
}

// Função que lista todos os clientes e seus saldos
void listarClientes(ContaBancaria clientes[], int totalClientes) {
    printf("\nListagem de Clientes:\n");
    int totalClientes;
    for (int i = 0; i < totalClientes; i++) {
        printf("Conta: %d | Titular: %s | Saldo: %.2f\n", 
               clientes[i].numeroConta, 
               clientes[i].nomeTitular, 
               clientes[i].saldo);
    }
}

// Função que realiza o depósito em uma conta
void deposito(ContaBancaria *cliente) {
    float valor;
    printf("Digite o valor do deposito para a conta de %s: ", cliente->nomeTitular);
    scanf("%f", &valor);
    
    if (valor > 0) {
        cliente->saldo += valor;
        printf("Depósito realizado com sucesso! Novo saldo de %s: %.2f\n", cliente->nomeTitular, cliente->saldo);
    } else {
        printf("Valor invalido para deposito!\n");
    }
}

// Função que realiza o saque em uma conta
void saque(ContaBancaria *cliente) {
    float valor;
    printf("Digite o valor do saque para a conta de %s: ", cliente->nomeTitular);
    scanf("%f", &valor);
    
    if (valor > 0 && valor <= cliente->saldo) {
        cliente->saldo -= valor;
        printf("Saque realizado com sucesso! Novo saldo de %s: %.2f\n", cliente->nomeTitular, cliente->saldo);
    } else if (valor > cliente->saldo) {
        printf("Saldo insuficiente para o saque!\n");
    } else {
        printf("Valor invalido para saque!\n");
    }
}

