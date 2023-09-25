#include <stdio.h>

int main() {
    int idade;

    printf("Qual é a sua idade? ");
    scanf("%d", &idade);

    printf("Sua idade é %d\n", idade);

    if (idade < 18) {
        printf("Você é menor de idade!");
    } else if (idade < 60) {
        printf("Você é adulto!");
    } else {
        printf("Você é idoso!");
    }

    printf("\n\n");
    return 0;
}
