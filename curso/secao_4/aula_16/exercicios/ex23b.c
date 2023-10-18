#include <stdio.h>
#include <stdbool.h>
/*
Determine se um determinado ano lido é bissexto.
Sendo que um ano é bissexto se for divisível por
400 ou se for divisível por 4 e não for divisível
por 100. Por exemplo: 1988, 1992, 1996.

Variação:
Informe um ano inicial e um ano final. Com esses
dados imprima uma lista com todos os anos bissextos
dentro desse período, incluíndo os própios anos informados.
*/

bool anoIsBissexto(int);
bool numIsDivisivelPor(int, int);

int main() {
    int anoIni, anoFim = 0;

    printf("# Listar anos bissextos\n");
    do {
        printf("Informe o ano inicial: ");
        scanf("%d", &anoIni);

        printf("Informe o ano final: ");
        scanf("%d", &anoFim);

        if (anoIni > anoFim) {
            printf("Erro: ano inicial deve ser anterir ao ano final\n\n");
        }
    } while (anoIni > anoFim);

    int countAnoBissexto = 0;
    printf("\n## Lista com os anos bissextos entre %d e %d\n", anoIni, anoFim);
    for (int ano = anoIni; ano <= anoFim; ano++) {
        if (anoIsBissexto(ano)) {
            if (ano < 0) {
                printf("- %d a.C", ano * -1);
            } else {
                printf("- %d", ano);
            }
            printf("\n");
            countAnoBissexto++;
        }
    }
    printf("Total de anos bissextos: %d", countAnoBissexto);

    printf("\n\n");
    return 0;
}

bool anoIsBissexto(int ano) {
    return numIsDivisivelPor(ano, 400) || numIsDivisivelPor(ano, 4) && !numIsDivisivelPor(ano, 100);
}

bool numIsDivisivelPor(int dividendo, int divisor) {
    return dividendo % divisor == 0;
}