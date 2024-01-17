#include <stdio.h>
/*
Faça um algoritmo que calcule o IMC de uma pessoa e
mostre sua classificação de acordo com a tabela abaixo:

 IMC | Classificação
-------------+---------------
 < 18,5      | Abaixo do Peso
 18,6 a 24,9 | Saudável
 25,0 a 29,9 | Peso em excesso
 30,0 a 34,9 | Obesidade Grau I
 35,0 a 39,9 | Obesidade Grau II (severa)
 >= 40,0     | Obesidade Grau III (mórbida)

Fórmula: Peso / (altura * altura)
*/

void imprimirClassificacaoDeIMC(float);

int main() {
    printf("# Calcular IMC (Indice de Massa Corporal)\n");

    float peso, altura;

    printf("Peso (Kg): ");
    scanf("%f", &peso);

    printf("Altura (m): ");
    scanf("%f", &altura);

    float imc = peso / (altura * altura);

    printf("\nSeu IMC é: %.1f\n", imc);
    printf("Classificação: ");

    imprimirClassificacaoDeIMC(imc);

    printf("\n\n");
    return 0;
}

void imprimirClassificacaoDeIMC(float imc) {
    if (imc <= 18.5) {
        printf("Abaixo do peso");
    } else if (imc <= 24.9) {
        printf("Saudável");
    } else if (imc <= 29.9) {
        printf("Peso em excesso");
    } else if (imc <= 34.9) {
        printf("Obesidade Grau I");
    } else if (imc <= 39.9) {
        printf("Obesidade Grau II (severa)");
    } else {
        printf("Obesidade Grau III (mórbida)");
    }
}
