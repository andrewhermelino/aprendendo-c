#include <stdio.h>
#include <math.h>
// Faça um programa que leia um número e,
// caso ele seja positivo, calcule e mostre.
// - O número digitado ao quadrado
// - A raiz quadrada do número digitado

int main() {
    float num;

    printf("Digite um número: ");
    scanf("%f", &num);

    if (num < 0) {
        printf("Por favor, digite um número positivo!\n\n");
        return 1;
    }

    printf("Número ao quadrado: %f\n", pow(num, 2));
    printf("Raiz quadrada do númro: %f\n", sqrt(num));

    printf("\n\n");
    return 0;
}
