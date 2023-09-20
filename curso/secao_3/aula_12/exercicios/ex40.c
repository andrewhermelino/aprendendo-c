#include <stdio.h>
// Uma empresa contrata um encanador a R$ 30,00 por dia.
// Faça um programa que solicite o número de dias trabalhados
// pelo encanador e imprima a quantia líquida que deverá ser paga,
// sabendo-se que são descontados 8% para imposto de renda.

int main() {
    // Constantes
    const float valorDiario = 30;
    const float porcentagemImpostoDeRenda = 0.08;

    // Variáveis
    int quantidadeDias;
    float valorBruto, valorLiquido;

    // Execução do programa
    printf("# Calcular valor do encanador\n");
    printf("---\n");
    printf("## valores\n");
    printf("Valor diário: R$ %.2f\n", valorDiario);
    printf("Porcentagem do imposto de renda: %.0f%%\n", porcentagemImpostoDeRenda);

    printf("---\n");
    printf("Informe a quantidade de dias trabalhados pelo encanador: ");
    scanf("%d", &quantidadeDias);
    printf("---\n");

    // Cálculos
    valorBruto = valorDiario * quantidadeDias;
    valorLiquido = valorBruto * (1.0 - porcentagemImpostoDeRenda);

    // Imprimir resultados
    printf("Valor bruto: R$ %.2f\n", valorBruto);
    printf("Valor líquido: R$ %.2f\n", valorLiquido);

    printf("\n\n");
    return 0;
}