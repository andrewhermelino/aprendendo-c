#include <stdio.h>
/*
Faça um programa que mostre ao usuário um
menu com 4 opções de operações matemáticas
(as básicas, por exemplo). O usuário escolhe uma
das opções e o seu programa então pede dois
valores numéricos e realiza a operação, mostrando
o resultado e saindo.
*/

int isOperacaoValida(char operacao);
int isNumeroValido(int numero);

int main() {
    char operacao;
    float num[2];

    printf("# Calculadora simples\n");

    do {
        printf("Escolha uma operação [+, -, *, /]: ");
        if (scanf("%c", &operacao) == 0) {
            operacao = -1;
        }
        while(getchar() != '\n');
    } while (!isOperacaoValida(operacao));

    int numValido = 0;
    for (int i = 0; i < 2; i++) {
        do {
            printf("Informe o %dº número: ", i+1);
            numValido = scanf("%f", &num[i]);
            while(getchar() != '\n');
        } while (numValido == 0);
    }

    float resultado;
    int erro = 0;

    switch (operacao) {
    case '+':
        resultado = num[0] + num[1];
        break;
    case '-':
        resultado = num[0] - num[1];
        break;
    case '*':
        resultado = num[0] * num[1];
        break;
    case '/':
        resultado = num[0] / num[1];
        break;
    default:
        erro = 1;
        break;
    }

    if (erro) {
        printf("Algo de errado não deu certo");
    } else {
        printf("%.2f %c %.2f = %.2f", num[0], operacao, num[1], resultado);
    }

    printf("\n\n");
    return 0;
}

int isOperacaoValida(char operacao) {
    switch (operacao) {
        case '+':
        case '-':
        case '*':
        case '/':
            return 1;
        default:
            return 0;
    }
}

int isNumeroValido(int numero) {

}
