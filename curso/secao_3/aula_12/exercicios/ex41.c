#include <stdio.h>
// Faça um programa que leia o valor da hora de trabalho (em reais) e número de horas trabalhadas no mês. imprima o valor a ser pago ao funcionário, adicionando 10% sobre o valor calculado.

int main() {
    float valorHoraTrabalho;
    float quantidadeHorasTrabalhadas;

    printf("# Calculeo valor pago ao funcionário\n");

    printf("Valor da hora de trabalho: R$ ");
    scanf("%f", &valorHoraTrabalho);

    printf("Quantidade de horas trabalhadas no mês: ");
    scanf("%f", &quantidadeHorasTrabalhadas);

    float valorPagoBruto = valorHoraTrabalho * quantidadeHorasTrabalhadas;
    float valorPagoLiquido = valorPagoBruto * 1.10;

    printf("---\n");
    printf("Valor pago (com 10%% de acrescimo): R$ %.2f", valorPagoLiquido);

    printf("\n\n");
    return 0;
}