#include <stdio.h>

int main() {
    int anoNascimento;
    printf("Informe seu ano de nascimento: ");
    scanf("%d", &anoNascimento);

    int idade = 2023 - anoNascimento;
    printf("Sua idade é %d!", idade);

    printf("\n\n");
    return 0;
}