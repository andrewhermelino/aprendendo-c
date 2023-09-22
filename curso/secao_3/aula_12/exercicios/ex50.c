#include <stdio.h>
#include <time.h>
// Implemente um programa que calcule o ano de nascimento de uma
// pessoa apartir de sua idade e do ano atual.

int getAnoAtual();

int main() {
    int anoAtual = getAnoAtual();

    int idade;

    printf("# Calcule o ano de nascimento\n");
    printf("Digite sua idade atual: ");
    scanf("%d", &idade);

    printf("Você nasceu no ano %d", anoAtual - idade);

    printf("\n\n");
    return 0;
}

int getAnoAtual() {
    time_t t;
    t = time(NULL);
    struct tm tm = *localtime(&t);
    return tm.tm_year+1900;
}