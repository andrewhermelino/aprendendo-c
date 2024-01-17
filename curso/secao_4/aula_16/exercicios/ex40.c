#include <stdio.h>
/*
O custo ao consumidor de um carro novo é a soma do custo
de fábrica, da comissão do distribuidor, e dos impostos.
A comissão e os impostos são calculados sobre o custo de
fábrica, de acordo com a tabela abaixo. Leia o custo de
fábrica e escreva o custo ao consumidor.

 Custo de fábrica               | % do distribuidor | % dos impostos
--------------------------------+-------------------+----------------
 até R$ 12.000,00               |         5%        |     isento     
 entre R$ 12.000,00 e 25.000,00 |        10%        |       15%
 acima de R$ R$25.000,00        |        15%        |       20%
*/

float calcularPorcentagemDistribuidor(float);
float calcularPorcentagemImpostos(float);

int main() {
    printf("# Calcular custo de carro ao comprador\n");

    float custoDeFabrica;
    printf("Informe o custo de fábrica: R$ ");
    scanf("%f", &custoDeFabrica);

    float porcentagemDistribuidor = calcularPorcentagemDistribuidor(custoDeFabrica);
    float porcentagemImpostos = calcularPorcentagemImpostos(custoDeFabrica);

    float valorDistribuidor = custoDeFabrica * porcentagemDistribuidor;
    float valorImpostos = custoDeFabrica * porcentagemImpostos;

    float custoAoComprador = custoDeFabrica + valorDistribuidor + valorImpostos;

    printf("---\n");

    printf("Comissão do distribuidor: R$ %.2f (%.0f%%)\n", valorDistribuidor, porcentagemDistribuidor * 100);

    if (valorImpostos > 0) {
        printf("Impostos: R$ %.2f (%.0f%%)\n", valorImpostos, porcentagemImpostos * 100);
    } else {
        printf("Impostos: isento\n");
    }

    printf("Valor da compra: R$ %.2f", custoAoComprador);

    printf("\n\n");
    return 0;
}

float calcularPorcentagemDistribuidor(float custoDeFabrica){ 
    if (custoDeFabrica <= 12000) {
        return 0.05;
    } else if (custoDeFabrica <= 25000) {
        return 0.10;
    }
    return 0.15;
}

float calcularPorcentagemImpostos(float custoDeFabrica){ 
    if (custoDeFabrica <= 12000) {
        return 0.0;
    } else if (custoDeFabrica <= 25000) {
        return 0.15;
    }
    return 0.20;
}
