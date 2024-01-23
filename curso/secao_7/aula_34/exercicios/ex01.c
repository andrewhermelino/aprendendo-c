#include <stdio.h>
/*
Faça um programa que possua um vetor denominado `A`
que armazene 6 números inteiros. O programa deve
executar os seguintes passos:

a) Atribua os seguintes valores a esse vetor:
1, 0, 5, -2, -7, 7;

b) Armazene em uma variável inteira simples a soma
entre os valores das posições A[0], A[1], A[5] do
vetor e mostre na tela esta soma;

c) Modifique o vetor na posição 4, atribuindo a esta
posição o valor 100;

d) Mostre na tela cada valor do vetor A, um em cada linha.
*/

int main() {
    int A[6] = {1, 0, 5, -2, -7, 7};

    int soma = 0;

    for (int i = 0; i < 6; i++) {
        soma += A[i];
    }

    printf("Soma dos números: %d\n\n", soma);

    A[4] = 100;

    printf("Mostrando valores do vetor:\n");

    for (int i = 0; i < 6; i++) {
        printf("A[%d] = %d\n", i, A[i]);
    }

    printf("\n\n");
    return 0;
}
