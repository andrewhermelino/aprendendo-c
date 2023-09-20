#include <stdio.h>
// Faça uma leitura de três valores e apresente como
// resultado a soma dos quadrados dos três valores lidos.

int main() {
    float valores[] = {0, 0, 0};

    printf("# Somar o quadrado de três valores\n");

    for (int i = 0; i < 3; i++) {
        printf("> ");
        scanf("%f", &valores[i]);
    }

    float soma = 0;
    for (int i = 0; i < 3; i++) {
        if (i != 0) {
            printf(" +");
        }
        printf("%.1f^2", valores[i]);
        soma = soma + valores[i] * valores[i];
    }
    printf(" = %.2f", soma);

    printf("\n\n");
    return 0;
}