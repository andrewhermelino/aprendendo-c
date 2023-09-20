#include <stdio.h>
// Leia um número inteiro e imprima o seu antecessor e o seu sucessor.

int main() {
    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    int antecessor = num - 1;
    int sucessor = num + 1;

    printf("---\n");
    printf("O antecessor é %d\n", antecessor);
    printf("O sucessor é %d", sucessor);

    printf("\n\n");
    return 0;
}