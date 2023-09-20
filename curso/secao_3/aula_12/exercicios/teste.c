#include <stdio.h>
#include <math.h>
// Teste para entender os chamados "especificadores de formado" no printf()

int main() {
    float x = 25;
    float y = 2;

    printf("%f\n", sqrt(x));
    printf("%f\n", pow(y, 4));

    printf("\n");
    return 0;
}