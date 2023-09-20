#include <stdio.h>
#include <math.h>
// Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro.
// O volume de um cilindro circular é calculado por meio da seguinte fórmula:
// V = pi * raio^2 * altura, onde pi = 3.141592

int main() {
    const float pi = 3.141592;
    float altura, raio;

    printf("# Calcule o volume de um cilincro\n");

    printf("Altura: ");
    scanf("%f", &altura);

    printf("Raio: ");
    scanf("%f", &raio);

    float volume = pi * pow(raio, 2) * altura;

    printf("---\n");
    printf("Volume: %.2f", volume);

    printf("\n\n");
    return 0;
}