#include <stdio.h>
#include <string.h>

#define MAX_CLIENTES 6

// Defini��o da estrutura para as contas banc�rias
typedef struct {
    int numeroConta;
    char nomeTitular[100];
    float saldo;
} ContaBancaria;

// Fun��o para listar todos os clientes
void listarClientes(ContaBancaria clientes[], int n) {
	int i;
    printf("\nListagem de Clientes:\n");
    for (i = 0; i < n; i++) {
        printf("Conta: %d | Titular: %s | Saldo: %.2f\n", clientes[i].numeroConta, clientes[i].nomeTitular, clientes[i].saldo);
    }
}

// Fun��o para realizar dep�sito
void deposito(ContaBancaria clientes[], int n) {
    int numeroConta;
    float valor;
	int i;
	
    printf("\nDigite o n�mero da conta para dep�sito: ");
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
        printf("Conta n�o encontrada.\n");
        return;
    }

    // Solicita o valor do dep�sito
    printf("Digite o valor do dep�sito: ");
    scanf("%f", &valor);

    if (valor <= 0) {
        printf("Valor inv�lido para dep�sito.\n");
        return;
    }

    // Realiza o dep�sito
    clientes[indice].saldo += valor;
    printf("\nDep�sito realizado com sucesso!\n");
    printf("Titular: %s | Saldo Atual: %.2f\n", clientes[indice].nomeTitular, clientes[indice].saldo);
}

// Fun��o para realizar saque
void saque(ContaBancaria clientes[], int n) {
    int numeroConta;
    float valor;
    int i;

    printf("\nDigite o n�mero da conta para saque: ");
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
        printf("Conta n�o encontrada.\n");
        return;
    }

    // Solicita o valor do saque
    printf("Digite o valor do saque: ");
    scanf("%f", &valor);

    if (valor <= 0) {
        printf("Valor inv�lido para saque.\n");
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
        {1, "Jo�o Silva", 0.0},
        {2, "Maria Oliveira", 0.0},
        {3, "Pedro Santos", 0.0},
        {4, "Ana Costa", 0.0},
        {5, "Carlos Pereira", 0.0},
        {6, "Juliana Souza", 0.0}
    };

    int opcao;

    do {
        // Menu de op��es
        printf("\nMenu:\n");
        printf("[1] Listagem de clientes\n");
        printf("[2] Dep�sito\n");
        printf("[3] Saque\n");
        printf("[4] Fim\n");
        printf("Escolha uma op��o: ");
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
                printf("Op��o inv�lida. Tente novamente.\n");
        }
    } while (opcao != 4);
    
    return 0;
}

