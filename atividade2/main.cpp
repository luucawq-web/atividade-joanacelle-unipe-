#include <stdio.h>
int main () {
    int saque;
    int restante;
    int soma = 0;
    int quantidade = 0;
    printf ("Digite qual valor você deseja sacar: \n");
    scanf ("%d", &saque);
    restante = saque;


    if (saque <= 385) {


        if (restante >= 200) {
            printf ("1 nota de 200");
            restante = restante - 200;
            soma = soma + 200;
            quantidade++;
        }


        if (restante >= 100) {
            printf ("1 nota de 100\n");
            restante = restante - 100;
            soma = soma + 100;
            quantidade++;
        }


        if (restante >= 50) {
            printf ("1 nota de 50\n ");
            restante = restante - 50;
            soma = soma + 50;
            quantidade++;
        }


        if (restante >= 20) {
            printf ("1 nota de 20\n");
            restante = restante - 20;
            soma = soma + 20;
            quantidade++;
        }


        if (restante >= 10) {
            printf ("1 nota de 10\n");
            restante = restante - 10;
            soma = soma + 10;
            quantidade++;
        }


        if (restante >= 5) {
            printf ("1 nota de 5\n");
            restante = restante - 5;
            soma = soma + 5;
            quantidade++;
        }


        if (restante == 0){
            printf ("É possível realizar o saque\n");
            printf ("O valor do saque realizado foi de: %d\n", soma);
            printf ("O número de cédulas utilizadads foi de:%d\n", quantidade);
        }
        else {
            printf ("Não é possível realizar o saque");
        }
    }
    return 0;
}