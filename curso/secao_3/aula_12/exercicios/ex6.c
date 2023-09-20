#include <stdio.h>
// Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit.
// A fórmula de conversão é: F = C * (9/5) + 32, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.

int main() {
    float grausCelsius;
    printf("# Converta graus Celsius para Fahreinheit\n");
    printf("Informe uma temperatura em graus Celsius: ");
    scanf("%f", &grausCelsius);
    float grausFahrenheit = grausCelsius * (9.0/5.0) + 32;
    printf("%f Cº = %f Fº", grausCelsius, grausFahrenheit);
    printf("\n\n");
    return 0;
}