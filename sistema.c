#include <stdio.h>

void exibirMenu(){
    printf("\n ==== Sistema bancário ===\n");
    printf("1. Consultar Saldo\n");
    printf("2.Depositar\n");
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

        switch (opcao){ 

        case 1:
            printf("Seu saldo atual é: R$ %.2F\n", saldo);
            break;
        
        case 2:
            printf("Digite o valor para deposito: R$ ");
            scanf("%f", &valor);
            if(valor > 0 ){
                saldo += valor;
                printf("deposito realizado! Novo saldo: R$ %2.f\n", saldo);

            }else{
                printf("Valor inválido!\n");
        
            }
            break;
        case 3:
            printf("Digite o valor para saque: R$ ");
            scanf("%f", &valor);
            if(valor > 0 && valor <= saldo ){
                saldo -= valor;
                printf("Saque realizado! Novo saldo: R$ %2.f\n", saldo);

            }else{
                printf("Valor inválido ou saldo insuficiente!\n");
        
            }
            break;
        case 4:
             printf("Obrigado por usar nosso sistema!\n");
            break;

         default:
         printf("Opção invalida! Tente novamente.\n");

        }
    }while(opcao !=4);

return 0;

}