#include <stdio.h>
/*
Faça um programa que tenha uma função que
dado um valor numérico de entrada, gere e
imprima como saída o número de linhas com
pontos de exclamação, conforme o exemplo
abaixo (para n=5):
!
!!
!!!
!!!!
!!!!!
*/

void imprimirPontosDeExclamacao(int x) {
    for (int a = 1; a <= x; a++) {
        for (int b = 1; b <= a; b++) {
            printf("!");
        }
        printf("\n");
    }
}

int main() {
    int x;
    printf("Informe um número: ");
    scanf("%d", &x);

    imprimirPontosDeExclamacao(x);

    printf("\n\n");
    return 0;
}
