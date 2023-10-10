#include <stdio.h>
// Faça um programa que leia 2 notas de um aluno,
// verifique se as notas são válidas e exiba na tela
// a média destas notas. Uma nota válida deve ser,
// obrigatoriamente, um valor entre 0 e 10, onde caso a
// nota não possua um valor válido, este fato deve ser
// informado ao usuário e o programa termina.

int lerNota(int i, float *notaPointer);
int isNotaValida(int nota);

int main() {
    float nota1, nota2;

    printf("# Calcular média de duas notas\n");

    lerNota(1, &nota1);
    lerNota(2, &nota2);

    printf("Média: %.2f", (nota1 + nota2) / 2);

    printf("\n\n");
    return 0;
}

int lerNota(int i, float *notaPointer) {
    do {
        printf("Informe a nota %d: ", i);

        if (scanf("%f", notaPointer) == 0) {
            *notaPointer = -1;
        }

        if (!isNotaValida(*notaPointer)) {
            printf("Nota inválida!\n\n");
        }
    } while (!isNotaValida(*notaPointer));   
}

int isNotaValida(int nota) {
    if (nota > 10 || nota < 0) {
        return 0;
    }
    return 1;
}
