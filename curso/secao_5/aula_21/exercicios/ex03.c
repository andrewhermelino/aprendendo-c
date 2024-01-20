#include <stdio.h>
/*
Faça um programa que leia 10 números e escreva o maior e o menor valor lido.
*/

void alimentarMaiorNumero(int*, int);
void alimentarMenorNumero(int*, int);

int main() {
    int maior = -1;
    int menor = -1;

    int cont = 1;
    int max = 5;
    while (cont <= max) {
        printf("Informe um número (%d/%d): ", cont, max);
        int numero;
        scanf("%d", &numero);
        alimentarMaiorNumero(&maior, numero);
        alimentarMenorNumero(&menor, numero);
        cont++;
    }

    printf("---\n");
    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);

    printf("\n");

    return 0;
}

void alimentarMaiorNumero(int *maior, int numero) {
    if (*maior < 0 || numero > *maior) {
        *maior = numero;
    }
}

void alimentarMenorNumero(int *menor, int numero) {
    if (*menor < 0 || numero < *menor) {
        *menor = numero;
    }
}
