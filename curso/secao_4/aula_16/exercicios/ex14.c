#include <stdio.h>
/*
A nota final de um estudante é calculada a partir de três
notas atribuídas entre o intervalo de 0 até 10, respectivamente,
a um trabalho de laboratório, a uma avaliação semestral e a um exame
final. A média das três notas mencionadas anteriormente obedece aos pesos:
- Trabalho de Laboratório: 2,
- Avaliação Semestral: 3,
- Exame Final: 5.
De acordo com o resultado, mostre na tela se o aluno está
reprovado (média entre 0 e 2,9), de recuperação (entre 3 e 4,9),
ou se foi aprovado. Faça todas as verificações necessárias.
*/

void lerNota(float *notaPointer, char label[]);
int isNotaValida(float nota);
void imprimirSituacao(float media);

int main() {
    float nota1, nota2, nota3, media;

    const float peso1 = 2;
    const float peso2 = 3;
    const float peso3 = 5;

    printf("# Calcular média ponderada de 3 avaliações\n");

    lerNota(&nota1, "Trabalho de Laboratório: ");
    lerNota(&nota2, "Avaliação Semeestral: ");
    lerNota(&nota3, "Exame Final: ");

    media = (nota1*peso1 + nota2*peso2 + nota3*peso3) / (peso1+peso2+peso3);

    printf("\nMédia final: %.1f\n", media);

    imprimirSituacao(media);

    printf("\n\n");
    return 0;
}

void lerNota(float *notaPointer, char label[]) {
    do {
        printf("%s", label);
        scanf("%f", notaPointer);

        if (isNotaValida(*notaPointer) == 0) {
            printf("Erro: Insira uma nota válida de 0 a 10\n");
        }
    } while (isNotaValida(*notaPointer) == 0);
}

int isNotaValida(float nota) {
    if (nota > 10 || nota < 0) {
        return 0;
    }
    return 1;
}

void imprimirSituacao(float media) {
    if (media < 3) {
        printf("Aluno reprovado ;-;");
        return;
    }
    if (media < 5) {
        printf("Aluno em recuperação :/");
        return;
    }
    printf("Aluno aprovado! :D");
}