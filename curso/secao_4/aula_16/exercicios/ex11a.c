#include <stdio.h>
/*
Escreva um programa que leia um número inteiro maior do que zero
e devolva, na tela, a soma de todos os seus algarismos.
Por exemplo, o número 251 corresponderá o valor 8 (2 + 5 + 1).
Se o número lido não for maior do que zero, o programa terminará
com a mensagem `Número inválido`.
*/

// Primeira solução

int charToInt(char c);
int getNumLenght(int n);

int main() {
    int num;

    printf("# Somar todos os algarismos de um número\n");
    printf("Digite um valor positivo: ");
    scanf("%d", &num);

    if (num <= 0 || num > 999999999) {
        printf("Número inválido\n\n");
        return 1;
    }

    // valor máx do int: 4294967295
    char numStr[9];
    sprintf(numStr, "%d", num);
    int numLenght = getNumLenght(num);

    int soma = 0;

    printf("---\n");

    for (int i = 0; i < numLenght; i++) {
        if (i != 0) {
            printf(" + ");
        }
        printf("%c", numStr[i]);
        soma += charToInt(numStr[i]);
    }

    printf(" = %d", soma);


    printf("\n\n");
    return 0;
}

int charToInt(char c) {
    switch (c) {
    case ' ':
        return 0;
    case '0':
        return 0;
    case '1':
        return 1;
    case '2':
        return 2;
    case '3':
        return 3;
    case '4':
        return 4;
    case '5':
        return 5;
    case '6':
        return 6;
    case '7':
        return 7;
    case '8':
        return 8;
    case '9':
        return 9;    
    default:
        return -1;
    }
}

int getNumLenght(int n) {
    if (n < 0) return -1;
    if (n <= 9) return 1;
    if (n <= 99) return 2;
    if (n <= 999) return 3;
    if (n <= 9999) return 4;
    if (n <= 99999) return 5;
    if (n <= 999999) return 6;
    if (n <= 9999999) return 7;
    if (n <= 99999999) return 8;
    if (n <= 999999999) return 9;
    if (n <= 9999999999) return 10;
    return -1;
}

/*
while (numero != 0) {
    soma += numero % 10; // Obtém o último dígito e soma à variável 'soma'
    numero /= 10;       // Remove o último dígito do número
}
*/