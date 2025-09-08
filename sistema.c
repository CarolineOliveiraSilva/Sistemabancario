#include <stdio.h>

void exibirMenu(){
    printf("\n=== SISTEMA BANCÁRIO ===\n");
    printf("1. Consultar Saldo\n");
    printf("2. Depositar\n");
    printf("3. Sacar\n");
    printf("4. Sair\n");
    printf("Escolha uma opção: ");
}

int main(){

    int opcao;
    float saldo = 1000.0;
    float valor;

    do{
        exibirMenu();
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1 :
            printf("Seu saldo atual é: R$ %.2f\n", saldo);
            break;
        case 2 :
            printf("Digite o valor do depósito: R$ ");
            scanf("%f", &valor);

            if( valor > 0 ){
                saldo += valor;
                 printf("Depósito realizado! Novo saldo: R$ %.2f\n", saldo);
                }else{
                    printf("Valor invalido!\n");
                }
                break;
        case 3 :
            printf("Digite o valor do saque: R$ ");
            scanf("%f", &valor);

            if( valor > 0 && valor <=saldo ){
                saldo -= valor;
                 printf("Depósito realizado! Novo saldo: R$ %.2f\n", saldo);
                }else{
                    printf("Valor invalido ou saldo insuficiente!\n");
                }
                break;
        case 4 :
                printf("Obrigado por usar nosso sistema!");
            break;
        
        default:
        printf ("Opção inválida! tente novamente.\n");
        }
    }while(opcao != 4);

    return 0;

}