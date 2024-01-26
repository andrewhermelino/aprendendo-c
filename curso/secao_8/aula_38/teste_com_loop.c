#include <stdio.h>

int main() {
    
    int numero = 3;

    for (int i = 0; i < 50; i++) {
        printf("%d -> %d\n", i, numero);
        numero = numero << 1;
    }

    printf("\n\n");
    return 0;
}
