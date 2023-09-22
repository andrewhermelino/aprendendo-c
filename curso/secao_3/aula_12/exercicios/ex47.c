#include <stdio.h>
// Leia um número inteiro de 4 dígitos (de 1000 a 9999) e imprima 1 dígito por linha.

int main() {
    int numInt;

    printf("# Imprimir cada caractere do número em uma linha\n");

    printf("Digite um número com 4 dígitos: ");
    scanf("%d", &numInt);

    if (numInt < 1000 || numInt > 9999) {
        printf("Digite um número de 4 dígitos válido!");
    } else {
        char numString[4];
        sprintf(numString, "%d", numInt);

        for (int i = 0; i < 4; i++) {
            printf("> %c\n", numString[i]);
        }
    }

    printf("\n\n");
    return 0;
}