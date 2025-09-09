#include <stdio.h>

void exibirMenu() {
    printf("\n=== SISTEMA BANCÁRIO ===\n");
    printf("1. Consultar Saldo\n");
    printf("2. Depositar\n");
    printf("3. Sacar\n");
    printf("4. Sair\n");
    printf("Escolha uma opção: ");
}

int main() {
    int opcao;
    float saldo = 1000.0;
    float valor;

    do {
        exibirMenu();
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Seu saldo atual é: R$ %.2f\n", saldo);
        }
        else if (opcao == 2) {
            printf("Digite o valor do depósito: R$ ");
            scanf("%f", &valor);

            if (valor > 0) {
                saldo += valor;
                printf("Depósito realizado! Novo saldo: R$ %.2f\n", saldo);
            } else {
                printf("Valor invalido!\n");
            }
        }
        else if (opcao == 3) {
            printf("Digite o valor do saque: R$ ");
            scanf("%f", &valor);

            if (valor > 0 && valor <= saldo) {
                saldo -= valor;
                printf("Saque realizado! Novo saldo: R$ %.2f\n", saldo);
            } else {
                printf("Valor invalido ou saldo insuficiente!\n");
            }
        }
        else if (opcao == 4) {
            printf("Obrigado por usar nosso sistema!\n");
        }
        else {
            printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 4);

    return 0;
}