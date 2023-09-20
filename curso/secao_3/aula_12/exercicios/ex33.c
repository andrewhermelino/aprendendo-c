#include <stdio.h>
// Leia o tamanho do lado de um quadrado e imprima como resultado a sua área.

int main() {
    int tamanho;

    printf("# Calcular área do quadrado\n");
    printf("Digite o tamanho do lado: ");
    scanf("%d", &tamanho);

    int area = tamanho * tamanho;

    printf("A área desse quadrado é %d", area);

    printf("\n\n");
    return 0;
}