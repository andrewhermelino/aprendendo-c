#include <stdio.h>
/*
Faça um programa que leia um vetor de 10 posições.
Conte e mostre quantos valores pares ele possui.
*/

int main() {
    int valores[10];
    int contadorValoresPares = 0;

    printf("# Informe 10 valores inteiros:\n");

    for (int i = 0; i < 10; i++) {
        printf("Valor %d/10: ", i + 1);
        scanf("%d", &valores[i]);

        if (valores[i] % 2 == 0) {
            contadorValoresPares++;
        }
    }

    printf("\n---\n\n");

    printf("A quantidade de valores pares informados foi: %d", contadorValoresPares);

    printf("\n\n");
    return 0;
}
