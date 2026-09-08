#include <stdio.h>
int main() {
    int a;
    int b;
    int c;
    pintf("Digite o primeiro número: ")
    scanf("%d", &a);
    printf("Digite o segundo número: ")
    scanf("%d", &b);   
    printf("Digite o terceiro número: ")
    scanf("%d", &c);

    // VERIFICAR SE OS NÚMEROS SÃO REPETIDOS

    if (a != b && a != c && b != c) {
        printf("Nao existem numeros repetidos\n");
}

    // IDENTIFICAR O MAIOR NÚMERO

    if (a >= b && a >= c) {
        printf("O maior numero e: %d\n", a);
    }
    else if (b >= a && b >= c) {
        printf("O maior numero e: %d\n", b);
    }
    else {
        printf("O maior numero e: %d\n", c);
    }

    // IDENTIFICAR O MENOR NÚMERO

    if (a <= b && a <= c) {
        printf("O menor numero e: %d\n", a);
    }
    else if (b <= a && b <= c) {
        printf("O menor numero e: %d\n", b);
    }
    else {
        printf("O menor numero e: %d\n", c);
    }

    // NUMERO INTERMEDIÁRIO

    if ((a > b && a < c) || (a < b && a > c)) {
        printf("O numero intermediario e: %d\n", a);
    }
    else if ((b > a && b < c) || (b < a && b > c)) {
        printf("O numero intermediario e: %d\n", b);
    }
    else {
        printf("O numero intermediario e: %d\n", c);
    }

    // ORDEM 

   if (a < b && b < c) {
            printf("Ordem crescente\n");
        }
        else if (a > b && b > c) {
            printf("Ordem decrescente\n");
        }
        else if (a < c && c < b) {
            printf("Ordem crescente\n");
        }
        else if (a > c && c > b) {
            printf("Ordem decrescente\n");
        }
        else if (b < a && a < c) {
            printf("Ordem crescente\n");
        }
        else if (b > a && a > c) {
            printf("Ordem decrescente\n");
        }
        else if (b < c && c < a) {
            printf("Ordem crescente\n");
        }
        else if (b > c && c > a) {
            printf("Ordem decrescente\n");
        }
        else if (c < a && a < b) {
            printf("Ordem crescente\n");
        }
        else if (c > a && a > b) {
            printf("Ordem decrescente\n");
        }
        else {
            printf("Sem ordem\n");
        }
    }

    // OS NUMERO QUE SAO IGUAIS

    else if (a == b && a == c) {
        printf("Todos os números são iguais\n");
    }
    
    // DOIS NÚMEROS IGUAIS

    else {
        printf("Existem números repetidos\n");
    }
    return 0;
}