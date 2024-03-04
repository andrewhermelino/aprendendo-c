#include <stdio.h>

int main() {
    int valores[5] = {5, 12, 7, 11, 21};

    for (int i = 0; i < 5; i++) {
        printf("O valor %d tem %ld bytes\n", valores[i], sizeof(valores[i]));
    }
    printf("\nO array valores possui %ld bytes\n\n", sizeof(valores));

    printf("valores[0] vale %d e endereço de memória é %p\n", valores[0], valores);
    printf("*(valores) vale %d e endereço de memória é %p\n", *(valores), valores);

    printf("\n");

    printf("*(valores+1) vale %d e endereço de memória é %p\n", *(valores+1), valores+1);
    printf("*(valores+2) vale %d e endereço de memória é %p\n", *(valores+2), valores+2);
    printf("*(valores+3) vale %d e endereço de memória é %p\n", *(valores+3), valores+3);
    printf("*(valores+4) vale %d e endereço de memória é %p\n", *(valores+4), valores+4);

    printf("\nImprimindo os valores do array:\n");
    for (int i = 0; i < 5; i++) {
        printf("valores[%d] = %d", i, *(valores+i));
        if (valores[i] < 10) {
            printf(" ");
        }
        printf(" (endereço: %p)\n", valores+i);
    }

    printf("\n\n");
    return 0;
}
