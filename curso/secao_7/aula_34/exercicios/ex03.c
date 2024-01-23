#include <stdio.h>
/*
Faça um programa que leia um vetor de 10 posições
e atribua valor 0 para todos os elementos que
possuírem valores negativos.
*/

int main() {
    int valores[10];

    printf("Informe 10 valores inteiros positivos ou negativos:\n");

    for (int i = 0; i < 10; i++) {
        printf("Número %d/10: ", i + 1);
        scanf("%d", &valores[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (valores[i] < 0) {
            valores[i] = 0;
        }
    }

    printf("\nValores após substituir valores negativos por 0:\n");
    
    for (int i = 0; i < 10; i++) {
        printf("[%d] -> %d\n", i + 1, valores[i]);
    }

    printf("\n\n");
    return 0;
}
