#include <stdio.h>
// Leia um número real e imprima o resultado do quadrado desse número

int main() {
    float num;
    printf("Informe um número real: ");
    scanf("%f", &num);
    float quadrado = num * num;
    printf("O quadrado de %f é %f", num, quadrado);
    printf("\n\n");
    return 0;
}