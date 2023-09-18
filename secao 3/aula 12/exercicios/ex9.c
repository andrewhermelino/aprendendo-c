#include <stdio.h>
// Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin.
// A fórmula de conversão é: K = C + 273.15, sendo C a temperatura em Celsius e K a temperatura em Kelvin.

int main() {
    float grausCelsius;
    printf("# Converta graus Celsius para Kelvin\n");
    printf("Informe uma temperatura em graus Celsius: ");
    scanf("%f", &grausCelsius);
    float grausKelvin = grausCelsius + 273.15;
    printf("%f Kº = %f Cº", grausCelsius, grausKelvin);
    printf("\n\n");
    return 0;
}