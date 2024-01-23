#include <stdio.h>

int main() {
    char nome[50]; // 49 caracteres (último caracter é sempre \0)

    printf("Informe seu nome: ");
    gets(nome);

    printf("Olá %s! :D", nome);

    printf("\n\n");
    return 0;
}
