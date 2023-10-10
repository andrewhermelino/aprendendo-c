#include <stdio.h>
/*
Faça um programa que calcule e mostre a área de um trapézio. Sabe-se que:
     basemaior + basemenor) * altura
A = ---------------------------------
                  2
Lembre-se a base maior e a base menor devem ser números maiores que zero.
*/

void lerFloatValido(char[], float*);
int isFloatValido(float val);

int main() {
    float baseMaior, baseMenor, altura, area;

    printf("# Calcular a área de um trapézio\n");

    lerFloatValido("Base maior", &baseMaior);
    lerFloatValido("Base menor", &baseMenor);
    lerFloatValido("Altura", &altura);

    area = ((baseMaior + baseMenor) * altura) / 2;

    printf("---\n");

    printf("Área: %.2f", area);

    printf("\n\n");
    return 0;
}

void lerFloatValido(char label[], float *valPointer) {
    printf("\n%s\n", label);

    do {
        printf("> ");
        if (scanf("%f", valPointer) == 0) {
            while (getchar() != '\n');
            *valPointer = -1;
        }
        if (!isFloatValido(*valPointer)) {
            printf("Erro! informe um valor válido\n");
        }
    } while (!isFloatValido(*valPointer));
}

int isFloatValido(float val) {
    return val > 0;
}
