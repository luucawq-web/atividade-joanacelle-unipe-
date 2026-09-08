#include <stdio.h>

int main() {
    int maior;
    int lado1;
    int lado2;
    int a;
    int b;
    int c;
    ptintf("Digite o primeiro lado do triangulo\n");
    scanf("%d", &a);
    printf("Digite o segundo lado do triangulo\n");
    scanf("%d", &b);
    printf("Digite o terceiro lado do triangulo\n");
    scanf("%d", &c);

// FORMAR TRIANGULO

    if (a + b > c && a + c > b && b + c > a) {
        printf("Os lados formam um triangulo\n");
    } else {
        printf("Os lados nao formam um triangulo\n");
    }
    return 0;
}

// MAIOR LADO 

    if (a >= b && a >= c) {
        maior = a;
        maior = b;
        maior = c;
    }
    else if (b >= a && b >= c) {
        maior = b;
        maior = a;
        maior = c;
    }
    else {
        maior = c;
        maior = a;
        maior = b;
    }
     
    // TIPO DE TRIANGULO

    if (a == b && b == c) {
        printf("O triangulo e equilatero\n");
    }
    else if (a == b || a == c || b == c) {
        printf("O triangulo e isosceles\n");
    }
    else {
        printf("O triangulo e escaleno\n");
    }

    // ÂNGULOS DO TRIÂNGULO

    if maior == a {
        lado1 = b;
        lado2 = c;
    }
    else if maior == b {
        lado1 = a;
        lado2 = c;
    }
    else {
        lado1 = a;
        lado2 = b;
    }