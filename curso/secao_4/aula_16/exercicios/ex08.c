#include <stdio.h>
// Faça um programa que leia 2 notas de um aluno,
// verifique se as notas são válidas e exiba na tela
// a média destas notas. Uma nota válida deve ser,
// obrigatoriamente, um valor entre 0 e 10, onde caso a
// nota não possua um valor válido, este fato deve ser
// informado ao usuário e o programa termina.

int lerNota(int i, float *notaPointer);

int main() {
    float nota1, nota2;

    printf("# Calcular média de duas notas\n");

    if (!lerNota(1, &nota1)) {
        return 1;
    }

    if (!lerNota(2, &nota2)) {
        return 1;
    }

    printf("Média: %.2f", (nota1 + nota2) / 2);

    printf("\n\n");
    return 0;
}

int lerNota(int i, float *notaPointer) {
    float nota;
    printf("Informe a nota %d: ", i);
    scanf("%f", &nota);
    *notaPointer = nota;

    if (nota > 0 && nota < 10) {
        return 1;
    }
    printf("Nota inválida!\n\n");
    return 0;
}