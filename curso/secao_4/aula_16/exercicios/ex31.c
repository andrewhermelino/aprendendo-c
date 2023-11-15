#include <stdio.h>
/*
Faça um programa que receba a altura e o peso de uma pessoa.
De acordo com a tabela a seguir, verifique e mostra qual a
classificação dessa pessoa.

+-------------------------------------------------------------------+
| Altura         |                       Peso                       |
|                +--------------------------------------------------+
|                | Até 60 | Entre 60 e 90 (inclusive) | Acima de 90 |
+----------------+--------+---------------------------+-------------+
| Menor que 1,20 |   A    |             D             |      G      |
| De 1,20 a 1,70 |   B    |             E             |      H      |
| Mair que 1,70  |   C    |             F             |      I      |
+-------------------------------------------------------------------+
*/

int obterClassificacao(float altura, float peso);
void imprimirTabelaDeClassificacoes();

int main() {
    
    float altura, peso;

    printf("# Classificar de acordo com altura e peso\n\n");

    printf("Informe sua altura em metros: ");
    scanf("%f", &altura);

    printf("Informe seu peso em kg: ");
    scanf("%f", &peso);

    printf("\nExibindo classificação conforme a seguinte tabela:\n");
    imprimirTabelaDeClassificacoes();

    char classificacao = obterClassificacao(altura, peso);
    printf("\nSua classificação: %c", classificacao);

    printf("\n\n");
    return 0;
}

int obterClassificacao(float altura, float peso) {
    int alturaMultiplicada = altura * 100;
    int pesoMultiplicado = peso * 100;

    if (alturaMultiplicada < 120) {
        if (pesoMultiplicado <= 6000) {
            return 'A';
        } else if (pesoMultiplicado <= 9000) {
            return 'D';
        } else {
            return 'G';
        }
    } else if (alturaMultiplicada <= 170) {
        if (pesoMultiplicado <= 6000) {
            return 'B';
        } else if (pesoMultiplicado <= 9000) {
            return 'E';
        } else {
            return 'H';
        }
    } else {
        if (pesoMultiplicado <= 6000) {
            return 'C';
        } else if (pesoMultiplicado <= 9000) {
            return 'F';
        } else {
            return 'I';
        }
    }
}

void imprimirTabelaDeClassificacoes() {
    printf("+-------------------------------------------------------------------+\n");
    printf("| Altura         |                       Peso                       |\n");
    printf("|                +--------------------------------------------------+\n");
    printf("|                | Até 60 | Entre 60 e 90 (inclusive) | Acima de 90 |\n");
    printf("+----------------+--------+---------------------------+-------------+\n");
    printf("| Menor que 1,20 |   A    |             D             |      G      |\n");
    printf("| De 1,20 a 1,70 |   B    |             E             |      H      |\n");
    printf("| Maior que 1,70 |   C    |             F             |      I      |\n");
    printf("+-------------------------------------------------------------------+\n");
}