#include <stdio.h>
#include <math.h>
// Leia o valor do raio de um círculo e calcule e imprima a área do círculo correspondente.
// A área do círculo é pi * raio ^2, considere pi = 3.141592.

int main() {
    const float pi = 3.141592;
    float raio;

    printf("# Calcule a área do circulo\n");
    printf("Digite o raio: ");
    scanf("%f", &raio);

    float x = pi * raio;
    float area = pi * (raio * raio);

    printf("A área do círculo é %.2f", area);

    printf("\n\n");
    return 0;
}