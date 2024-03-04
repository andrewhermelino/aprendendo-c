#include <stdio.h>

int main() {
    int n; // declara uma variável do tipo "inteiro"
    int* p; // declara uma variável do tipo "endereço de memória para inteiro"

    printf("Informe um número: ");
    scanf("%d", &n); // alimenta a variável um valor inteiro

    p = &n; // alimenta a variável com o endereço de memória da variável de inteiro

    printf("O número informado foi: %d\n", n);
    printf("O endereço de memória em hexadecimal (p) é: %p\n", p);
    printf("O endereço de memória em hexadecimal (&n) é: %p\n", &n);

    // os dois casos abaixo lançam um warning por tentar imprimir um endereço como inteiro (mas compila e roda)
    // printf("O endereço de memória em decimal (p) é: %d\n", p);
    // printf("O endereço de memória em decimal (&n) é: %d\n", &n);

    printf("\n\n");
    return 0;
}
