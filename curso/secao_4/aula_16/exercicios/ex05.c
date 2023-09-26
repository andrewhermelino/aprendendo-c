#include <stdio.h>
// Faça um programa que receba um número inteiro e verifique
// se este número é par ou ímpar.

int main() {
    int num;

    printf("# Verifique se o número é par ou ímpar\n");
    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("Número PAR");
    } else {
        printf("Número ÍMPAR");
    }

    printf("\n\n");
    return 0;
}
