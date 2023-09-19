#include <stdio.h>
// Leia um valor em real e a cotação do dólar.
// Em seguida, imprima o valor correspondente em dólares.

int main() {
    printf("# Converter real para dólar\n");

    float valorReal, cotacaoDolar;

    printf("Cotação do dolar: ");
    scanf("%f", &cotacaoDolar);

    printf("Valor em real: ");
    scanf("%f", &valorReal);

    float valorDolar = cotacaoDolar * valorReal;

    printf("---\n");
    printf("Valor em dolar: %.2f", valorDolar);

    printf("\n\n");
    return 0;
}