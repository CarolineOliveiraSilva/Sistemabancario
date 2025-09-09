#include <stdio.h>

int main() {
    int opcao, quantidade;
    float total = 0, preco;
    char continuar;

    printf("============================================\n");
    printf(" 🍽️  Bem-vindo ao Cardápio Digital do Restaurante!\n");
    printf(" Aqui você pode escolher pratos, bebidas e sobremesas\n");
    printf(" e no final terá o valor total do pedido.\n");
    printf("============================================\n\n");

    do {
        printf("\n------ MENU PRINCIPAL ------\n");
        printf("1 - Pratos Principais\n");
        printf("2 - Bebidas\n");
        printf("3 - Sobremesas\n");
        printf("4 - Finalizar Pedido\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\n--- PRATOS PRINCIPAIS ---\n");
                printf("1 - Lasanha R$ 25.00\n");
                printf("2 - Pizza R$ 30.00\n");
                printf("3 - Hambúrguer R$ 20.00\n");
                printf("Escolha: ");
                scanf("%d", &opcao);

                if (opcao == 1) preco = 25.00;
                else if (opcao == 2) preco = 30.00;
                else if (opcao == 3) preco = 20.00;
                else {
                    printf("Opcao invalida!\n");
                    break;
                }
                printf("Digite a quantidade: ");
                scanf("%d", &quantidade);
                total += preco * quantidade;
                printf("Item adicionado ao pedido!\n");
                break;

            case 2:
                printf("\n--- BEBIDAS ---\n");
                printf("1 - Suco R$ 8.00\n");
                printf("2 - Refrigerante R$ 6.00\n");
                printf("3 - Água R$ 3.00\n");
                printf("Escolha: ");
                scanf("%d", &opcao);

                if (opcao == 1) preco = 8.00;
                else if (opcao == 2) preco = 6.00;
                else if (opcao == 3) preco = 3.00;
                else {
                    printf("Opcao invalida!\n");
                    break;
                }
                printf("Digite a quantidade: ");
                scanf("%d", &quantidade);
                total += preco * quantidade;
                printf("Item adicionado ao pedido!\n");
                break;

            case 3:
                printf("\n--- SOBREMESAS ---\n");
                printf("1 - Pudim R$ 10.00\n");
                printf("2 - Sorvete R$ 12.00\n");
                printf("3 - Mousse R$ 9.00\n");
                printf("Escolha: ");
                scanf("%d", &opcao);

                if (opcao == 1) preco = 10.00;
                else if (opcao == 2) preco = 12.00;
                else if (opcao == 3) preco = 9.00;
                else {
                    printf("Opcao invalida!\n");
                    break;
                }
                printf("Digite a quantidade: ");
                scanf("%d", &quantidade);
                total += preco * quantidade;
                printf("Item adicionado ao pedido!\n");
                break;

            case 4:
                printf("\nFinalizando pedido...\n");
                break;

            default:
                printf("Opcao invalida! Tente novamente.\n");
        }

        if (opcao != 4) {
            printf("\nDeseja continuar adicionando itens? (S/N): ");
            scanf(" %c", &continuar);
        } else {
            continuar = 'N';
        }

    } while (continuar == 'S' || continuar == 's');

    printf("\n============================================\n");
    printf(" 🧾 Valor total do pedido: R$ %.2f\n", total);

    if (total >= 100) {
        printf(" 🎉 Parabéns! Você ganhou 10%% de desconto!\n");
        total = total * 0.9;
    }

    printf(" 💰 Valor final a pagar: R$ %.2f\n", total);
    printf("============================================\n");
    printf(" Obrigado por comprar no nosso restaurante!\n");

    return 0;
}
