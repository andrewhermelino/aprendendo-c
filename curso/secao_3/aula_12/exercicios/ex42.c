#include <stdio.h>
// Receba o salário-base de um funcionário. Calcule e imprima o salário a receber, sabendo-se que esse funcionário tem uma gratificação de 5% sobre o salário-base. Além disso, ele paga 7% de imposto sobre o salário-base.

int main() {
    // Constantes
    const float porcentagemGratificacao = 0.05;
    const float porcentagemImposto = 0.07;

    // Variáveis
    float salarioBase, valorGratificacao, valorImposto, salarioReceber;

    // Execução do programa
    printf("# Calcular salário a receber\n");

    printf("Salário base: R$ ");
    scanf("%f", &salarioBase);

    printf("---\n");

    // Cálculos
    valorGratificacao = salarioBase * porcentagemGratificacao;
    valorImposto = salarioBase * porcentagemImposto;
    salarioReceber = salarioBase + valorGratificacao - valorImposto;

    // Imprimir resultado
    printf("Valor da gratificação: + R$ %.2f (%.0f%%)\n", valorGratificacao, porcentagemGratificacao * 100);

    printf("Valor de imposto: - R$ %.2f (%.0f%%)\n", valorImposto, porcentagemImposto * 100);

    printf("Salário a receber: R$ %.2f\n", salarioReceber);

    printf("\n\n");
    return 0;
}