#include <stdio.h>
/*
Escreva um programa de ajuda para vendedores. A partir de um valor total lido, mostre:
- o total a pagar com desconto de 10%;
- o valor de cada parcela, no parcelamento de 3x sem juros;
- a comissão do vendedor, no caso da venda ser a vista (5% sobre o valor com desconto);
- a comissão do vendedor, no caso da venda ser parcelada (5% sobre o valor total);
*/

int main() {
    // Constantes
    const float porcentDesconto = 0.10;
    const float porcentComissao = 0.05;

    // Variáveis
    float valorPedido, valorPedidoComDesconto, valorParcela, comissaoAVista, comissaoParcelada;

    // Execução do programa

    printf("# Calcular valor do pedido e comissão\n");

    printf("Valor total do pedido: R$ ");
    scanf("%f", &valorPedido);

    // Calculos
    valorPedidoComDesconto = valorPedido * (1.0 - porcentDesconto);
    valorParcela = valorPedidoComDesconto / 3;
    comissaoAVista = valorPedidoComDesconto * porcentComissao;
    comissaoParcelada = valorPedido * porcentComissao;

    // Imprimir resultados
    printf("---\n");

    printf("Valor do pedido com desconto de %.0f%%: R$ %.2f\n", porcentDesconto * 100, valorPedidoComDesconto);

    printf("Valor de cada parcela em 3x sem juros: R$ %.2f\n", valorParcela);

    printf("Comissão do vendedor no caso de venda a vista: %.2f\n", comissaoAVista);

    printf("Comissão do vendedor no caso de venda parcelada: %.2f\n", comissaoParcelada);

    printf("\n\n");
    return 0;
}