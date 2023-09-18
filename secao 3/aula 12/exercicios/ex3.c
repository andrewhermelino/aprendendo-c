#include <stdio.h>
// Peça ao usuário para digitar três valores inteiros e imprima a soma deles

int main() {
    int num1, num2, num3;
    printf("Informe 3 números inteiros para serem somados:\n");
    printf("> ");
    scanf("%d", &num1);
    printf("> ");
    scanf("%d", &num2);
    printf("> ");
    scanf("%d", &num3);
    int soma = num1 + num2 + num3;
    printf("O resultado de %d + %d + %d = %d", num1, num2, num3, soma);
    printf("\n\n");
    return 0;
}