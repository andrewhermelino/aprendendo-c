#include <stdio.h>
#include <math.h>
// Ler um número inteiro. Se o número lido for negativo,
// escreva a mensagem "Número inválido". Se o número for
// positivo, calcular o logaritmo deste número.

int main() {
    int num;

    printf("# Calcular logaritmo\n");
    printf("Digite um número positivo: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Número inválido\n\n");
        return 1;
    }

    printf("Log(%d) = %f", num, log10(num));

    printf("\n\n");
    return 0;
}
