#include <stdio.h>
// Leia um número inteiro e imprima a soma do sucessor de seu triplo com o antecessor de seu dobro.

int main() {
    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    int triplo = num * 3;
    int dobro = num * 2;

    int sucessorTriplo = triplo + 1;
    int antecessorDobro = dobro - 1;

    int soma = sucessorTriplo + antecessorDobro;

    printf("---\n");

    printf("O tripo de %d é %d\n", num, triplo);
    printf("O dobro de %d é %d\n", num, dobro);

    printf("O sucessor de %d é %d\n", triplo, sucessorTriplo);
    printf("O antecessor de %d é %d\n", dobro, antecessorDobro);

    printf("A soma entre %d e %d é %d", sucessorTriplo, antecessorDobro, soma);

    printf("\n\n");
    return 0;
}