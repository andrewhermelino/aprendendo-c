#include <stdio.h>
/*
Faça um programa que determine e mostre os cinco primeiros
múltiplos de 3, considerando números maiores que 0.
*/

int main() {
    printf("# Primeiros cinco números múltiplos de 3:\n");

    for (int i = 1; i <= 5; i++) {
        printf("%d\n", i * 3);
    }

    printf("\n\n");
    return 0;
}
