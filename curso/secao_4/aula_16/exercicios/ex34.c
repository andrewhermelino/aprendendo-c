#include <stdio.h>
/*
Leia a nota e o número de faltas de um aluno, e escreva seu conceito.
De acordo com a tabela abaixo, quando o aluno tem mais de 20 faltas
ocorre uma redução de conceito.

+------------------------------------------------------------------------+
| NOTA         | CONCEITO (ATÉ 20 FALTAS) | CONCEITO (MAIS DE 20 FALTAS) | 
+--------------+--------------------------+------------------------------+
| 9.0 até 10.0 |             A            |               B              |
| 7.5 até 8.9  |             B            |               C              |
| 5.0 até 7.4  |             C            |               D              |
| 4.0 até 4.9  |             D            |               E              |
| 0.0 até 3.9  |             E            |               E              |
+------------------------------------------------------------------------+
*/

void imprimirIntroducao();
char calcularConceito(float, int);

int main() {
    
    imprimirIntroducao();

    float nota;
    int quantidadeFaltas;

    printf("Nota do aluno (de 0 a 10): ");
    scanf("%f", &nota);

    printf("Quantidade de faltas do aluno: ");
    scanf("%d", &quantidadeFaltas);

    char conceito = calcularConceito(nota, quantidadeFaltas);

    printf("\nO conceito do aluno é %c", conceito);

    printf("\n\n");
    return 0;
}

void imprimirIntroducao() {
    printf("# Calcular conceito do aluno\n\n");

    printf("> O conceito do aluno é calculado de acordo com a tabela abaixo:\n\n");

    printf("+------------------------------------------------------------------------+\n");
    printf("| NOTA         | CONCEITO (ATÉ 20 FALTAS) | CONCEITO (MAIS DE 20 FALTAS) |\n");
    printf("+--------------+--------------------------+------------------------------+\n");
    printf("| 9.0 até 10.0 |             A            |               B              |\n");
    printf("| 7.5 até 8.9  |             B            |               C              |\n");
    printf("| 5.0 até 7.4  |             C            |               D              |\n");
    printf("| 4.0 até 4.9  |             D            |               E              |\n");
    printf("| 0.0 até 3.9  |             E            |               E              |\n");
    printf("+------------------------------------------------------------------------+\n");
    printf("\n");
}

char calcularConceito(float nota, int quantidadeFaltas) {
    /*
    A = 5
    B = 4
    C = 3
    D = 2
    E = 1 ou 0
    */
    int conceitoInt;
    int notaMultiplicado = nota * 10;

    if (notaMultiplicado >= 90) {
        conceitoInt = 5;
    } else if (notaMultiplicado >= 75) {
        conceitoInt = 4;
    } else if (notaMultiplicado >= 50) {
        conceitoInt = 3;
    } else if (notaMultiplicado >= 40) {
        conceitoInt = 2;
    } else {
        conceitoInt = 1;
    }

    if (quantidadeFaltas > 20) {
        conceitoInt--;
    }

    switch (conceitoInt) {
        case 5:
            return 'A';
        case 4:
            return 'B';
        case 3:
            return 'C';
        case 2:
            return 'D';
        default:
            return 'E';
    }

}
