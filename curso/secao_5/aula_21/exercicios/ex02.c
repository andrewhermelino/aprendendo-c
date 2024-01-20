#include <stdio.h>
/*
Escreva um programa que declare um inteiro, inicialize-o com 0,
incremente-o de 100 em 100, imprimindo seu valor na tela,
até que seu valor seja 100000 (cem mil).
*/

int main() {
    printf("# Imprimindo números de 0 a 100.000 de 100 em 100:\n");

    int numero = 0;

    do {
        numero += 100;
        printf("%d\n", numero);
    } while (numero < 100000);

    return 0;
}
