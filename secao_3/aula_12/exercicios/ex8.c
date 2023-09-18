#include <stdio.h>
// Leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius.
// A fórmula de conversão é: C = K - 273.15, sendo C a temperatura em Celsius e K a temperatura em Kelvin.

int main() {
    float grausKelvin;
    printf("# Converta graus Kelvin para Celsius\n");
    printf("Informe uma temperatura em graus Kelvin: ");
    scanf("%f", &grausKelvin);
    float grausCelsius = grausKelvin - 273.15;
    printf("%f Kº = %f Cº", grausKelvin, grausCelsius);
    printf("\n\n");
    return 0;
}