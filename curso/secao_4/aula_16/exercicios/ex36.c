#include <stdio.h>
/*
Escreva um programa que, dado o valor de venda, imprima a
comissão que deverá ser paga ao vendedor. Para calcular a
comissão, considere a tabela abaixo:

+--------------------------------------------------------------------------------------+
| Venda mensal                                            | Comissão                   |
+---------------------------------------------------------+----------------------------+
| Maior ou igual a R$ 100.000,00                          | R$ 700,00 + 16% das vendas |
| Menor que R$ 100.000,00 e maior ou igual a R$ 80.000,00 | R$ 650,00 + 14% das vendas |
| Menor que R$ 80.000,00 e maior ou igual a R$ 60.000,00  | R$ 600,00 + 14% das vendas |
| Menor que R$ 60.000,00 e maior ou igual a 40.000,00     | R$ 550,00 + 14% das vendas |
| Menor que R$ 40.000,00 e maior ou igual a R$ 20.000,00  | R$ 500,00 + 14% das vendas |
| Menor que R$ 20.000,00                                  | R$ 400,00 + 14% das vendas |
+--------------------------------------------------------------------------------------+
*/

void imprimirIntroducao();
void calcularPercentualComissaoComValorBonus(float, float*, float*);
void imprimirResultado(float, float, float);

int main() {
    
    imprimirIntroducao();

    float valorTotalVendas;

    printf("Informe o valor total das vendas: R$ ");
    scanf("%f", &valorTotalVendas);

    float percentualComissao, valorBonus;

    calcularPercentualComissaoComValorBonus(valorTotalVendas, &percentualComissao, &valorBonus);

    float valorComissao = valorTotalVendas * percentualComissao;

    printf("\n");
    imprimirResultado(percentualComissao, valorBonus, valorComissao);

    printf("\n\n");
    return 0;
}

void imprimirIntroducao() {
    printf("# Calcular comissão\n\n");
    printf("> O valor da comissão é calculado de acordo com o valor total das vendas,\n");
    printf("> seguindo a tabela abaixo:\n\n");

    printf("+--------------------------------------------------------------------------------------+\n");
    printf("| VENDA MENSAL                                            | COMISSÃO                   |\n");
    printf("+---------------------------------------------------------+----------------------------+\n");
    printf("| Maior ou igual a R$ 100.000,00                          | R$ 700,00 + 16%% das vendas |\n");
    printf("| Menor que R$ 100.000,00 e maior ou igual a R$ 80.000,00 | R$ 650,00 + 14%% das vendas |\n");
    printf("| Menor que R$ 80.000,00 e maior ou igual a R$ 60.000,00  | R$ 600,00 + 14%% das vendas |\n");
    printf("| Menor que R$ 60.000,00 e maior ou igual a 40.000,00     | R$ 550,00 + 14%% das vendas |\n");
    printf("| Menor que R$ 40.000,00 e maior ou igual a R$ 20.000,00  | R$ 500,00 + 14%% das vendas |\n");
    printf("| Menor que R$ 20.000,00                                  | R$ 400,00 + 14%% das vendas |\n");
    printf("+--------------------------------------------------------------------------------------+\n");
    printf("\n");
}

void calcularPercentualComissaoComValorBonus(float valorTotalVendas, float* percentualComissao, float* valorBonus) {
    int valorTotalVendasMultiplicado = valorTotalVendas * 100;

    if (valorTotalVendasMultiplicado >= 100000 * 100) {
        *percentualComissao = 0.16;
        *valorBonus = 700.0;
        return;
    }

    if (valorTotalVendasMultiplicado >= 80000 * 100) {
        *percentualComissao = 0.14;
        *valorBonus = 650.0;
        return;
    }

    if (valorTotalVendasMultiplicado >= 60000 * 100) {
        *percentualComissao = 0.14;
        *valorBonus = 600.0;
        return;
    }

    if (valorTotalVendasMultiplicado >= 40000 * 100) {
        *percentualComissao = 0.14;
        *valorBonus = 550.0;
        return;
    }

    if (valorTotalVendasMultiplicado >= 20000 * 100) {
        *percentualComissao = 0.14;
        *valorBonus = 500.0;
        return;
    }

    *percentualComissao = 0.14;
    *valorBonus = 400.0;

}

void imprimirResultado(float percentualComissao, float valorBonus, float valorComissao) {
    printf("Valor da comissão: R$ %.2f + %.0f%% das vendas (R$ %.2f)", valorBonus, percentualComissao * 100, valorComissao);
    printf("\nTotal: %.2f", valorBonus + valorComissao);
}