#include <stdio.h>
// Escreva um programa que, dados dois números inteiros,
// mostre na tela o maior deles, assim como a diferênca existente entre ambos.

int main() {
    
    printf("# Verificar qual número é maior\n");

    printf("Digite o número A: ");
    float a;
    scanf("%f", &a);

    printf("Digite o número B: ");
    float b;
    scanf("%f", &b);

    float diferenca;

    if (a > b) {
        diferenca = a - b;
        printf("O valor A é maior do que B com uma diferença de %.1f", diferenca);
    } else if (b > a) {
        diferenca = b - a;
        printf("O valor B é maior do que A com uma diferença de %.1f", diferenca);
    } else {
        printf("Os dois números são iguais");
    }

    printf("\n\n");
    return 0;
}
