#include <stdio.h>
/*
Escreva um programa que, dada a idade de um nadador,
classifique-o em uma das seguintes categorias:

Categoria  | Idade
-----------+-------------------
Infantil A | 5 a 7
Infantil B | 8 a 10
Juvenil A  | 11 a 13
Juvenil B  | 14 a 17
Sênior     | maiores de 18 anos
*/

int main() {
    int idade;

    printf("# Clasificação de nadador pela idade\n");

    printf("Idade: ");
    scanf("%d", &idade);

    if (idade < 5) {
        printf("Muito novo para ser nadador");
        printf("\n\n");
        return 0;
    }
    
    printf("Classificação: ");
    if (idade < 8) { // 5 a 7
        printf("Infantil A");
    } else if (idade < 11) { // 8 a 10
        printf("Infantil B");
    } else if (idade < 14) { // 11 a 13
        printf("Juvenil A");
    } else if (idade < 18) { // 14 a 17
        printf("Juvenil B");
    } else { // maiores que 18 anos
        printf("Sênior");
    }

    printf("\n\n");
    return 0;
}
