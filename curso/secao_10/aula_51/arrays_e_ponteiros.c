#include <stdio.h>

int main() {

    /*
      0   1   2   3   4
    +-------------------+
    |   |   |   |   |   |
    +-------------------+
    */

    int valores[5];

    for (int i = 0; i < 5; i++) {
        printf("Informe o valor %d de 5: ", i + 1);
        scanf("%d", &valores[i]);
    }

    printf("\nValores informados:\n");

    for (int i = 0; i < 5; i++) {
        printf("[%d] -> %d\n", i, valores[i]);
    }

    printf("\n");

    printf("%p -> %d\n", &valores[0], valores[0]);
    printf("%p -> %d\n", valores, valores[0]);

    printf("\n\n");
    return 0;
}
