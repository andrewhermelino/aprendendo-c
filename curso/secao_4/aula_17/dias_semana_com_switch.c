#include <stdio.h>

int main() {
    int diaSemana;

    printf("Digite um dia de 1 a 7: ");
    scanf("%d", &diaSemana);

    switch (diaSemana) {
    case 1:
        printf("Domingo");
        break;
    case 2:
        printf("Segunda-feira");
        break;
    case 3:
        printf("Terca-feira");
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
        printf("Sabado");
        break;
    default:
        printf("! Dia da semana inválido !");
        break;
    }

    printf("\n\n");
    return 0;
}
