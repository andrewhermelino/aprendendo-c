#include <stdio.h>
/*
Leia uma data de nascimento de uma pessoa fornecida
através de três números inteiros: Dia, Mês e Ano.
Teste a validade desta data para saber se esta é uma
data válida. Teste se o dia fornecido é um dia válido:
dia > 0, dia <= 28 para o mês de fevereiro (29 se o ano for bissexto),
dia <= 30 em abril, junho, setembro e novembro,
dia <= 31 nos outros meses.

Teste a validade do mês:
mês > 0 e mês < 13.

Teste a validade do ano:
ano <= ano atual (use uma constante definida com o valor igual a 2008).

Imprimir: "data válida" ou "data inválida" no final da execução do programa.
*/

int anoInvalido(int);
int mesInvalido(int);
int diaInvalido(int, int, int);
int isAnoBisexto(int);
int numIsDivisivelPor(int, int);

const int ANO_ATUAL = 2024;

const int JANEIRO = 1;
const int FEVEREIRO = 2;
const int MARCO = 3;
const int ABRIL = 4;
const int MAIO = 5;
const int JUNHO = 6;
const int JULHO = 7;
const int AGOSTO = 8;
const int SETEMBRO = 9;
const int OUTUBRO = 10;
const int NOVEMBRO = 11;
const int DEZEMBRO = 12;

int main() {
    int dia, mes, ano;

    printf("# Verificar validade de data\n");

    printf("Dia: ");
    scanf("%d", &dia);

    printf("Mês: ");
    scanf("%d", &mes);

    printf("Ano: ");
    scanf("%d", &ano);

    printf("\n");

    if (anoInvalido(ano)) {
        printf("ano inválido! ;-;");
    } else if (mesInvalido(mes)) {
        printf("Mês inválido! ;-;");
    } else if (diaInvalido(dia, mes, ano)) {
        printf("Dia inválido! ;-;");
    } else {
        printf("Data válida! :D");
    }

    printf("\n\n");
    return 0;
}

int anoInvalido(int ano) {
    return ano < 0 || ano > ANO_ATUAL;
}

int mesInvalido(int mes) {
    return mes < 1 || mes > 12;
}

int diaInvalido(int dia, int mes, int ano) {
    if (dia <= 0) {
        return 1;
    }

    if (mes == ABRIL || mes == JUNHO || mes == SETEMBRO || mes == NOVEMBRO) {
        return dia > 30;
    } else if (mes != FEVEREIRO) {
        return dia > 31;
    }

    if (isAnoBisexto(ano)) {
        return dia > 29;
    }

    return dia > 28;
}

int isAnoBisexto(int ano) {
    return numIsDivisivelPor(ano, 400) || numIsDivisivelPor(ano, 4) && !numIsDivisivelPor(ano, 100);
}

int numIsDivisivelPor(int dividendo, int divisor) {
    return dividendo % divisor == 0;
}
