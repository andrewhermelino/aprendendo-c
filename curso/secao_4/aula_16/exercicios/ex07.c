#include <stdio.h>
// Faça um programa que receba dois números e mostre o maior.
// Se por acaso, os dois números forem iguais,
// imprima a mensagem `Números iguais`.

int main() {
    
    printf("# Verificar qual número é maior\n");

    printf("Digite o número A: ");
    float a;
    scanf("%f", &a);

    printf("Digite o número B: ");
    float b;
    scanf("%f", &b);

    float diferenca;

    if (a > b) {
        diferenca = a - b;
        printf("O valor A é maior do que B");
    } else if (b > a) {
        diferenca = b - a;
        printf("O valor B é maior do que A");
    } else {
        printf("Números iguais");
    }

    printf("\n\n");
    return 0;
}