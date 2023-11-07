#include <stdio.h>
#include <math.h>
/*
Calcule as raízes da equação de 2º grau. Lembrando que:

x = (-b ± √Δ) / 2a

onde:

Δ = b² - 4ac

E ax² + bx + c = representa uma equação de 2º grau.

A variável `a` tem que ser diferente de zero.
Caso seja igual, imprima a mensagem "Não é equação de segundo grau".

- Se Δ < 0, não existe real. Imprima a mensagem "Não existe raiz"
- Se Δ = 0, existe uma raiz real. Imprima a raiz e a mensagem "Raiz única".
- Se Δ ≥ 0, imrpima as duas raízes reais.
*/

float calcularDelta(float a, float b, float c);
float calcularRaizComSoma(float a, float b, float delta);
float calcularRaizComSubtracao(float a, float b, float delta);

int main() {
    float a, b, c;

    printf("# Calcular equação de segundo grau\n");

    do {
        printf("A: ");
        scanf("%f", &a);
        if (a == 0) {
            printf("Erro: variável A precisa ser diferente de 0 para ser uma função de segundo grau\n");
        }
    } while (a == 0);

    printf("B: ");
    scanf("%f", &b);

    printf("c: ");
    scanf("%f", &c);

    float delta = calcularDelta(a, b, c);
    printf("Delta: %.2f\n\n", delta);

    if (delta < 0) {
        printf("Não existe raiz");
        
        printf("\n\n");
        return 0;
    }
    
    if (delta == 0) {
        printf("Raiz única: ");
        printf("%.2f", calcularRaizComSoma(a, b, delta));

        printf("\n\n");
        return 0;    
    }

    printf("Duas raízes:\n");

    printf("Raiz com soma: ");
    printf("%.2f\n", calcularRaizComSoma(a, b, delta));

    printf("Raiz com subtração: ");
    printf("%.2f\n", calcularRaizComSubtracao(a, b, delta));

    printf("\n\n");
    return 0;
}

float calcularDelta(float a, float b, float c) {
    return pow(b, 2) - 4 * a * c;
}

float calcularRaizComSoma(float a, float b, float delta) {
    return (-b + sqrt(delta)) / (2 * a);
}

float calcularRaizComSubtracao(float a, float b, float delta) {
    return (-b - sqrt(delta)) / (2 * a);
}
