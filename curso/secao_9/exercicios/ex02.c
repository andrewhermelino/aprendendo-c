#include <stdio.h>
/*
Faça um programa que tenha uma função que, dado um
caractere quaquer de entrada, retorne o mesmo caractere
sempre em maiúsculo.
*/

char returnUpperCaseChar(char c) {
    return c - 32;
}

int main() {
    printf("# Retornar caractere maiúsculo\n\n");

    printf("Informe um caractere: ");

    char caractere;
    scanf("%c", &caractere);

    char caractereMaiusculo = returnUpperCaseChar(caractere);

    if (caractereMaiusculo < 65 || caractereMaiusculo > 90) {
        printf("Caractere inválido!\n\n");
        return 0;
    }

    printf("Caractere maiúsculo: %c", caractereMaiusculo);

    printf("\n\n");
    return 0;
}
