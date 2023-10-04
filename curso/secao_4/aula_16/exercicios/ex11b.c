#include <stdio.h>
#include <stdbool.h>
/*
Escreva um programa que leia um número inteiro maior do que zero
e devolva, na tela, a soma de todos os seus algarismos.
Por exemplo, o número 251 corresponderá o valor 8 (2 + 5 + 1).
Se o número lido não for maior do que zero, o programa terminará
com a mensagem `Número inválido`.
*/

// Segunda solução com ajuda do mestre José ;)
/*
while (numero != 0) {
    soma += numero % 10; // Obtém o último dígito e soma à variável 'soma'
    numero /= 10;       // Remove o último dígito do número
}
*/

void lerNumero(int *numeroPointer);
bool isNumeroValido(int numero);
int obterSomaAlgarismos(int numero);
void imprimirCalculo(int numero, int soma);

int main() {
    int numero, soma = 0;

    printf("# Somar todos os algarismos de um número\n");

    do {
        lerNumero(&numero);
    } while (isNumeroValido(numero) == false);
    
    soma = obterSomaAlgarismos(numero);

    imprimirCalculo(numero, soma);

    printf("\n\n");
    return 0;
}

void lerNumero(int *numeroPointer) {
    printf("Digite um valor positivo: ");
    if (scanf("%d", numeroPointer) != 1) {
        while (getchar() != '\n');
        *numeroPointer = -1;
    };
}

bool isNumeroValido(int numero) {
    if (numero <= 0) {
        return false;
    }
    return true;
}

int obterSomaAlgarismos(int numero) {
    int soma = 0;
    while (numero != 0) {
        soma += numero % 10;
        numero /= 10;
    }
    return soma;
}

void imprimirCalculo(int numero, int soma) {
    char numeroStr[9];

    while (getchar() != '\n');
    sprintf(numeroStr, "%d", numero);

    for(int i = 0; numeroStr[i] != '\0'; i++) {
        if (i != 0) printf(" + ");
        printf("%c", numeroStr[i]);
    }

    printf(" = %d", soma);
}
