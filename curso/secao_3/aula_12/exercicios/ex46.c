#include <stdio.h>
/*
Faça um programa que leia um número inteiro positivo de três dígitos (de 100 a 999).
Gere outro número formado pelos dígitos invertidos do número lido. Exemplo:
- Número lido = 123
- Número gerado = 321
*/

int main() {
    int numInt;

    printf("# Mostrar um número invertido\n");

    printf("Digite um número com 3 dígitos: ");
    scanf("%d", &numInt);

    if (numInt < 100 || numInt > 999) {
        printf("Digite um número de 3 dígitos válido!");
    } else {
        char numString[3];
        sprintf(numString, "%d", numInt);

        char numStringInvert[] = {
            numString[2],
            numString[1],
            numString[0]
        };

        printf("> %s", numStringInvert);
    }

    printf("\n\n");
    return 0;
}