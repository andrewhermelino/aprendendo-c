#include <stdio.h>
// Leia quatro notas, calcule a média aritmética e imprima o resultado.

int main() {
    // Obtendo as notas
    printf("# Calcular média de aluno");
    printf("Informe as notas do aluno:\n");
    float nota1, nota2, nota3;

    printf("> ");
    scanf("%f", &nota1);

    printf("> ");
    scanf("%f", &nota2);

    printf("> ");
    scanf("%f", &nota3);

    float media = (nota1 + nota2 + nota3) / 3;

    // Imprimindo as notas
    printf("---\n");
    printf("Nota 1: %.1f\n", nota1);
    printf("Nota 2: %.1f\n", nota2);
    printf("Nota 3: %.1f\n", nota3);
    printf("Média:  %.1f", media);

    printf("\n\n");
    return 0;
}