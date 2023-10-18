#include <stdio.h>
#include <stdbool.h>
/*
Determine se um determinado ano lido é bissexto.
Sendo que um ano é bissexto se for divisível por
400 ou se for divisível por 4 e não for divisível
por 100. Por exemplo: 1988, 1992, 1996.
*/

bool anoIsBissexto(int);
bool numIsDivisivelPor(int, int);

int main() {
    int ano;

    printf("# Verificar se ano é bissexto\n");

    printf("Informe o ano: ");
    scanf("%d", &ano);

    if (anoIsBissexto(ano)) {
        printf("> Ano é bissexto");
    } else {
        printf("> Ano não é bissexto");
    }

    printf("\n\n");
    return 0;
}

bool anoIsBissexto(int ano) {
    return numIsDivisivelPor(ano, 400) || numIsDivisivelPor(ano, 4) && !numIsDivisivelPor(ano, 100);
}

bool numIsDivisivelPor(int dividendo, int divisor) {
    return dividendo % divisor == 0;
}