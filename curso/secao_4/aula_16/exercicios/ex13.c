#include <stdio.h>
/*
Faça um algoritmo que calcule a média ponderada das notas de 3 provas.
A primeira e a segunda prova têm peso 1 e a terceira tem peso 2.
Ao final, mostrar a média do aluno e indicar se o aluno foi aprovado ou
reprovado. A nota para aprovação deve ser igual ou superior a 60 pontos.
*/

void lerNota(float *notaPointer, int i);

int main() {
    float nota1, nota2, nota3, media;

    const float pesoNota1 = 1;
    const float pesoNota2 = 1;
    const float pesoNota3 = 2;

    printf("# Calcular média de 3 notas (de 0 a 100)\n");

    lerNota(&nota1, 1);
    lerNota(&nota2, 2);
    lerNota(&nota3, 3);

    media = (((nota1 * pesoNota1) + (nota2 * pesoNota2) + (nota3 * pesoNota3))) / 4;

    printf("Média ponderada: %.1f\n", media);

    if (media >= 60) {
        printf("Aluno aprovado! :D");
    } else {
        printf("Aluno reprovado ;-;");
    }

    printf("\n\n");
    return 0;
}

void lerNota(float *notaPointer, int i) {
    printf("Informe a nota %d: ", i);
    scanf("%f", notaPointer);
}
