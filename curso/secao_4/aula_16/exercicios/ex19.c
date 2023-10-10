#include <stdio.h>
/*
Faça um programa para verificar se um determinado número inteiro e
divisível por 3 ou 5, mas não simultaneamente pelos dois.
*/

int main() {
    int num;

    printf("# Verificar se um número é divisível por 3 ou por 5, mas não pelos dois\n");
    printf("> ");
    scanf("%d", &num);

    int divisivelPor3 = num % 3 == 0;
    int divisivelPor5 = num % 5 == 0;

    if (divisivelPor3 && !divisivelPor5 || !divisivelPor3 && divisivelPor5) {
        printf("Objetivo atingido! ");
        if (divisivelPor3) {
        printf("O número %d é divisível por 3 mas não por 5", num);
        } else {
            printf("O número %d é divisível por 5 mas não por 3", num);
        }
    } else {
        printf("Objetivo não atingido. ");
        if (!divisivelPor3 && !divisivelPor5) {
            printf("O número não é divisível nem por 3 nem por 5");
        } else {
            printf("O número é divisível tanto por 3 como por 5");
        }
    }

    printf("\n\n");
    return 0;
}
