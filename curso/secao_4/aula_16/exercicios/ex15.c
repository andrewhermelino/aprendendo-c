#include <stdio.h>
/*
Usando o switch, escreva um programa que leia um
inteiro entre 1 e 7 e imprima o dia da semana correspondente
a esse número. isto é, domingo se 1, segunda-feira se 2,
e assim por diante.
*/

int main() {
    
    int diaInt;

    printf("# Imprimir dia da semana\n");

    printf("Digite um dia da semana [1-7]: ");
    scanf("%d", &diaInt);

    switch (diaInt) {
        case 1:
            printf("Domingo");
            break;
        case 2:
            printf("Segunda-feira");
            break;
        case 3:
            printf("Terça-feira");
            break;
        case 4:
            printf("Quarta-feira");
            break;
        case 5:
            printf("Quinta-feira");
            break;
        case 6:
            printf("Sexta-feira");
            break;
        case 7:
            printf("Sábado");
            break;
        default:
            printf("Dia da semana inválivo");
    }

    printf("\n\n");
    return 0;
}
