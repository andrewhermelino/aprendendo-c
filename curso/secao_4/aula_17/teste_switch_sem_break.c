#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número de 0 a 10: ");
    scanf("%d", &numero);

    switch (numero) {
        case 10:
            printf("Esse número é maior do que 9\n");
        case 9:
            printf("Esse número é maior do que 8\n");
        case 8:
            printf("Esse número é maior do que 7\n");
        case 7:
            printf("Esse número é maior do que 6\n");
        case 6:
            printf("Esse número é maior do que 5\n");
        case 5:
            printf("Esse número é maior do que 4\n");
        case 4:
            printf("Esse número é maior do que 3\n");
        case 3:
            printf("Esse número é maior do que 2\n");
        case 2:
            printf("Esse número é maior do que 1\n");
        case 1:
            printf("Esse número é maior do que 0\n");
            break;
        default:
            printf("Número inválido!");
    }

    printf("\n\n");
    return 0;
}
