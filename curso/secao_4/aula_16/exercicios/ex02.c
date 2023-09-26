#include <stdio.h>
#include <math.h>
// Leia um número fornecido pelo usuário.
// Se esse número for positivo, calcule a raiz quadrada do número.
// Se o número for negativo, mostre uma mensagem dizendo que o número é inválido.

int main() {
    float num;

    printf("# Calcular raiz quadrada de número positivo\n");
    printf("Informe um número positivo: ");
    scanf("%f", &num);

    if (num < 0) {
        printf("Número inválido!\n\n");
        return 1;
    }

    printf("Resultado: %.2f", sqrt(num));

    printf("\n\n");
    return 0;
}
