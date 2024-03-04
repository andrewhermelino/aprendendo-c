#include <stdio.h>
/*
Faça um programa que declare um inteiro, um real e um char,
e ponteiros para inteiro, real e char. Associe as variáveis
aos ponteiros (use &). Modifique os valores de cada variável
usando os ponteiros. Imprima os valores das variáveis antes
e após amodificação.
*/

int main() {
    int valorInteiro;
    float valorReal;
    char valorCaracter;

    int* ponteiroInteiro = &valorInteiro;
    float* ponteiroReal = &valorReal;
    char* ponteiroCaracter = &valorCaracter;

    printf("Informe um inteiro: ");
    scanf("%d", ponteiroInteiro);

    printf("Informe um real: ");
    scanf("%f", ponteiroReal);

    printf("Informe um caracter: ");
    scanf("%d", ponteiroCaracter);

    int valorInteiroAntes = *ponteiroInteiro;
    float valorRealAntes = *ponteiroReal;
    char valorCaracterAntes = *ponteiroCaracter;

    printf("---\n");

    printf("Altere o valor inteiro: ");
    scanf("%d", ponteiroInteiro);

    printf("Altere o valor real: ");
    scanf("%f", ponteiroReal);

    printf("Altere o valor caractér: ");
    scanf("%d", ponteiroCaracter);

    printf("\n# Imprimindo valores antes e depois:\n");

    printf("Inteiro antes: %d\n", valorInteiroAntes);
    printf("Inteiro depois: %d\n", valorInteiro);
    printf("---\n");

    printf("Real antes: %f\n", valorRealAntes);
    printf("Real depois: %f\n", valorReal);
    printf("---\n");

    printf("Caracter antes: %d\n", valorCaracterAntes);
    printf("Caracter depois: %d\n", valorCaracter);
    printf("---\n");

    printf("\n\n");
    return 0;
}
