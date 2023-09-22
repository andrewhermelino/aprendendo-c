#include <stdio.h>
/*
Faça um programa para ler as dimensões de um terreno
(comprimento c e largura l), bem como o preço do metro de tela p.
Imprima o custo para cercar este mesmo terreno com tela.
*/

int main() {
    float precoTelaPorMetro, comprimentoTerreno, larguraTerreno;
    
    printf("# Calcular preço para cercar terreno\n");
    printf("Informe:\n");

    printf("Preço por metro de tela: R$ ");
    scanf("%f", &precoTelaPorMetro);

    printf("Comprimento do terreno (m): ");
    scanf("%f", &comprimentoTerreno);

    printf("Largura do terreno (m): ");
    scanf("%f", &larguraTerreno);

    printf("---\n");

    float valorPagar = comprimentoTerreno * larguraTerreno * precoTelaPorMetro;
    printf("Valor total a pagar: R$ %.2f", valorPagar);

    printf("\n\n");
    return 0;
}