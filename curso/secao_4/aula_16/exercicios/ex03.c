#include <stdio.h>
#include <math.h>
// Leia um número real. Se o número for positivo imprima a raiz quadrada.
// Do contrário, imprima o número ao quadrado.

int main() {
    float num;

    printf("Digite um número real: ");
    scanf("%f", &num);

    if (num > 0) {
        printf("Raiz quadrada: %f", sqrt(num));
    } else {
        printf("Valor ao quadrado: %f", pow(num, 2));
    }

    printf("\n\n");
    return 0;
}
