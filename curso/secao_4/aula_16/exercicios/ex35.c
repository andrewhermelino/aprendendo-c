#include <stdio.h>
/*
Leia uma data e determine se ela é válida. Ou seja, verifique se o mês
está entre 1 e 12, e se o dia existe naquele mês. Note que Fevereiro
tem 29 dias em anos bissextos, e 28 dias em anos não bissextos.
*/

int anoValido(int);
int mesValido(int);
int diaValido(int, int, int);
int obterUltimoDiaDoMes(int, int);
int anoIsBissexto(int);
int numIsDivisivelPor(int, int);

int main() {
    
    printf("# Validador de data\n\n");

    int ano, mes, dia;

    printf("Ano: ");
    scanf("%d", &ano);

    printf("Mês: ");
    scanf("%d", &mes);

    printf("Dia: ");
    scanf("%d", &dia);

    printf("\n");

    if (!anoValido(ano)) {
        printf("\n\n");
        return 1;
    }

    if (!mesValido(mes)) {
        printf("\n\n");
        return 1;
    }

    if (!diaValido(ano, mes, dia)) {
        printf("\n\n");
        return 1;
    }

    printf("Data válida");

    printf("\n\n");
    return 0;
}

int anoValido(int ano){
    if (ano <= 0) {
        printf("Data inválida! ");
        printf("O ano precisa ser positivo");
        return 0;
    }
    return 1;
}

int mesValido(int mes){
    if (mes < 1 || mes > 12) {
        printf("Data inválida! ");
        printf("O mês precisa ser um valor de 1 a 12");
        return 0;
    }
    return 1;
}

int diaValido(int ano, int mes, int dia){
    if (dia < 1) {
        printf("Data inválida! ");
        printf("O mês precisa ser maior do que 0");
        return 0;
    }

    int ultimoDiaDoMes = obterUltimoDiaDoMes(ano, mes);
    if (dia > ultimoDiaDoMes) {
        printf("Data inválida! ");
        printf("O mês %d só vai até o dia %d", mes, ultimoDiaDoMes);
        if (ultimoDiaDoMes == 29 && anoIsBissexto(ano)) {
            printf(" no ano %d por ser bissexto", ano);
        } else if (mes == 2) {
            printf(" em anos normais");
        }
        return 0;
    }

    return 1;
}

int obterUltimoDiaDoMes(int ano, int mes) {
    if (mes == 1) {  // janeiro
        return 31;
    }
    if (mes == 2) {  // fevereiro
        if (anoIsBissexto(ano)) {
            return 29;
        }
        return 28;
    }
    if (mes == 3) {  // março
        return 31;
    }
    if (mes == 4) {  // abril
        return 30;
    }
    if (mes == 5) {  // maio
        return 31;
    }
    if (mes == 6) {  // junho
        return 30;
    }
    if (mes == 7) {  // julho
        return 31;
    }
    if (mes == 8) {  // agosto
        return 31;
    }
    if (mes == 9) {  // setembro
        return 30;
    }
    if (mes == 10) {  // outubro
        return 31;
    }
    if (mes == 11) {  // novembro
        return 30;
    }
    if (mes == 12) {  // dezembro
        return 31;
    }
    
    return 0;
}

int anoIsBissexto(int ano) {
    return numIsDivisivelPor(ano, 400) || numIsDivisivelPor(ano, 4) && !numIsDivisivelPor(ano, 100);
}

int numIsDivisivelPor(int dividendo, int divisor) {
    return dividendo % divisor == 0;
}