#include <stdio.h>
// Faça um programa que receba dois números e mostre qual deles é o maior

int main() {
    
    printf("Digite o número A: ");
    float a;
    scanf("%f", &a);

    printf("Digite o número B: ");
    float b;
    scanf("%f", &b);

    if (a > b) {
        printf("O número A é maior do que o número B");
    } else if (b > a) {
        printf("O número B é maior do que o número A");
    } else {
        printf("Os dois números são iguais");
    }

    printf("\n\n");
    return 0;
}
