#include <stdio.h>
/*
Faça um programa que receba a altura e o sexo de uma pessoa
e calcule e mostre seu peso ideal, utilizando as seguintes
fórmulas (onde h corresponde à altura):
  - Homens: (72.7 * h) - 58
  - Mulheres: (62.1 * h) - 44.7
*/

int main() {
    char sexo;
    float altura;

    printf("# Calcular o peso ideal\n");

    printf("Altura: ");
    scanf("%f", &altura);

    printf("Sexo (M/F): ");
    scanf(" %c", &sexo);

    if (altura <= 0) {
        printf("Informe uma altura válida\n\n");
        return 1;
    }

    switch (sexo) {
    case 'm':
    case 'M':
        printf("Peso ideal: %.2f Kg", (72.7 * altura) - 58);
        break;
    case 'f':
    case 'F':
        printf("Peso ideal: %.2f Kg", (62.1 * altura) - 44.7);
        break;
    default:
        printf("Sexo inválido! Selecione entre 'M' (masculimo) ou 'F' (feminino)");
        break;
    }

    printf("\n\n");
    return 0;
}
