#include <stdio.h>
#include <ctype.h>
// Faça um programa para converter uma letra maiúscula em letra minúscula. Use a tabela ASCII para resolver o problema.

int main() {
    char letraMaiuscula;

    printf("# Converta uma letra maiúscula para minuscula\n");
    printf("> ");
    scanf("%c", &letraMaiuscula);

    if (letraMaiuscula >= 'A' && letraMaiuscula <= 'Z') {
        char letraMinuscula = letraMaiuscula + 32;
        printf("> %c", letraMinuscula);
    } else {
        printf("Digite uma letra maiúscula válida!");
    }
    

    printf("\n\n");
    return 0;
}

// O método abaixo também funciona, mas achei fácil de mais...
// int main() {
//     char letraMaiuscula;

//     printf("# Converta uma letra maiúscula para minuscula\n");
//     printf("> ");
//     scanf("%c", &letraMaiuscula);

//     printf("> %c", tolower(letraMaiuscula));

//     printf("\n\n");
//     return 0;
// }