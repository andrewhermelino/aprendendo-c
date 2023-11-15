#include <stdio.h>
/*
Faça um programa que receba três números e mostre-os em ordem crescente
*/

int main() {
    
    float a, b, c;

    printf("# Exibir três números em ordem crescente\n\n");

    printf("Digite o numero A: ");
    scanf("%f", &a);

    printf("Digite o numero B: ");
    scanf("%f", &b);

    printf("Digite o numero C: ");
    scanf("%f", &c);

    printf("\nNúmeros em ordem crescente:");

    if (a < b && a < c) {
        printf("\n%f", a);
        if (b < c) {
            printf("\n%f", b);
            printf("\n%f", c);
        } else {
            printf("\n%f", c);
            printf("\n%f", b);
        }
    } else if (b < a && b < c) {
        printf("\n%f", b);
        if (a < c) {
            printf("\n%f", a);
            printf("\n%f", c);
        } else {
            printf("\n%f", c);
            printf("\n%f", a);
        }
    } else {
        printf("\n%f", c);
        if (a < b) {
            printf("\n%f", a);
            printf("\n%f", b);
        } else {
            printf("\n%f", b);
            printf("\n%f", a);
        }
    }

    printf("\n\n");
    return 0;
}
