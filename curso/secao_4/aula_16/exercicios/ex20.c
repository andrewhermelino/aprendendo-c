#include <stdio.h>
/*
Dados três valores, A, B, C, verificar se eles podem ser
valores dos lados de um triângulo e, se forem, se é um
triângulo escaleno, equilátero ou isóscele, considerando
os seguintes conceitos:
  - O comprimento de cada lado de um triângulo é menor do
    que a soma dos outros dois lados.
  - Chama-se equilátero o triângulo que tem três lados iguais.
  - Denominam-se isósceles o triângulo que tem o comprimento
    de dois lados iguais.
  - Recebe o nome de escaleno o triângulo que tem os três
    lados diferentes.
*/

void lerLado(char[], float*);
int isTriangulo(float, float, float);
int isTrianguloEquilatero(float, float, float);
int isTrianguloIsosceles(float, float, float);

int main() {
    printf("# Classificar triângulo pelos seus lados\n");

    float a, b, c;

    lerLado("Comprimento do lado A: ", &a);
    lerLado("Comprimento do lado B: ", &b);
    lerLado("Comprimento do lado C: ", &c);

    if (!isTriangulo(a, b, c)) {
        printf("As medidas informadas não formam um triângulo\n\n");
        return 0;
    }

    if (isTrianguloEquilatero(a, b, c)) {
        printf("Este é um triângulo equilátero");
    } else if (isTrianguloIsosceles(a, b, c)) {
        printf("Este é um triângulo isósceles");
    } else {
        printf("Este é um triângulo escaleno");
    }

    printf("\n\n");
    return 0;
}

void lerLado(char label[], float *comprimento) {
    do {
        printf("%s", label);
        if (!scanf("%f", comprimento)) {
            while(getchar() != '\n');
            *comprimento = -1;
        }
    } while(*comprimento <= 0);
}

int isTriangulo(float a, float b, float c) {
    if (a >= b + c) return 0;
    if (b >= a + c) return 0;
    if (c >= b + a) return 0;
    return 1;
}

int isTrianguloEquilatero(float a, float b, float c) {
    return a == b && b == c;
}

int isTrianguloIsosceles(float a, float b, float c) {
    return a == b || a == c || b == c;
}
