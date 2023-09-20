#include <stdio.h>
#include <math.h>
// Sejam A e B os catetos de um triângulo, onde a hipotenusa é obtida pela equação:
// hipotenusa = raiz(a^2 + b^2).
// Faça um programa que receba os valores de A e B e calcule o valor da hipotenusa através da equação. Imprima o resultado dessa operação.

float aoQuadrado(float base) {
    return base * base;
}

float raizQuadrada(float valor) {
    return sqrt(valor);
}

int main() {
    float catetoA, catetoB;

    printf("# Calcular a hipotenusa de um triangulo\n");

    printf("Cateto A: ");
    scanf("%f", &catetoA);
    printf("Cateto B: ");
    scanf("%f", &catetoB);

    printf("---\n");

    float hipotenusa = sqrt(pow(catetoA, 2) + pow(catetoB, 2));
    printf("Hipotenusa: %f", hipotenusa);

    printf("\n\n");
    return 0;
}