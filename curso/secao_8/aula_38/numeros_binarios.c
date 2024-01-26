#include <stdio.h>

int main() {
    int numero = 4; // 0000 0100
    printf("%d\n", numero);

    numero = numero >> 2; // 0000 0001
    printf("%d\n", numero);

    numero = numero << 5; // 0010 0000
    printf("%d\n", numero);

    // -----

    numero = 5; // 0000 0101
    numero = ~numero; // 1111 1010
    printf("%d\n", numero);

    printf("\n\n");
    return 0;
}
