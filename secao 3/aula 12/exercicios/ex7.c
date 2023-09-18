#include <stdio.h>
// Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius.
// A fórmula de conversão é: C = 5 * (F - 32)/9, sendo C a temperatura em Celsius e F a temperatura em Fahrenheit

int main() {
    float grausFahrenheit;
    printf("# Converta graus Fahreinheit para Celsius\n");
    printf("Informe uma temperatura em graus Fahreinheit: ");
    scanf("%f", &grausFahrenheit);
    float grausCelsius = 5 * (grausFahrenheit - 32) / 9;
    printf("%f Fº = %f Cº", grausFahrenheit, grausCelsius);
    printf("\n\n");
    return 0;
}