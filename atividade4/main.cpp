#include <stdio.h>

int main() {
    int numero;
    int menu;

    do {
        printf("\n===== MENU =====\n");
        printf("1 - Verificar numero par ou impar\n");
        printf("2 - Verificar se e positivo ou negativo\n");
        printf("3 - Calcular o quadrado do numero\n");
        printf("4 - Sair\n");

        printf("\nEscolha uma opcao: ");
        scanf("%d", &menu);

        switch (menu) {

            // CASO 1 - PAR OU IMPAR
            case 1:
                printf("\nDigite um numero: ");
                scanf("%d", &numero);

                if (numero % 2 == 0) {
                    printf("O numero %d e par.\n", numero);
                } else {
                    printf("O numero %d e impar.\n", numero);
                }

                break;

            // CASO 2 - POSITIVO OU NEGATIVO
            case 2:
                printf("\nDigite um numero: ");
                scanf("%d", &numero);

                if (numero > 0) {
                    printf("O numero %d e positivo.\n", numero);
                } else if (numero == 0) {
                    printf("O numero e zero.\n");
                } else {
                    printf("O numero %d e negativo.\n", numero);
                }

                break;

            // CASO 3 - NUMERO AO QUADRADO
            case 3:
                printf("\nDigite um numero: ");
                scanf("%d", &numero);

                printf("O quadrado de %d e %d.\n", numero, numero * numero);

                break;

            // CASO 4 - SAIR
            case 4:
                printf("\nVoce saiu do programa!\n");
                break;

            // OPCAO INVALIDA
            default:
                printf("\nOpcao invalida! Tente novamente.\n");
                break;
        }

    } while (menu != 4);

    return 0;
}