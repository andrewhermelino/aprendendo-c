#include <stdio.h>
// Teste para entender os chamados "especificadores de formado" no printf()

int main() {
    float peso;
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Seu peso é %d!", peso);

    printf("\n");
    return 0;
}