#include <stdio.h>
// Faça um programa que leia o valor de um produto e imprima o valor com desconto, tendo em vista que o desconto foi de 12%.

int main() {
    float valorProduto, porcentagemDesconto;

    printf("# Calcular valor com desconto\n");

    printf("Valor do produto: ");
    scanf("%f", &valorProduto);

    // Valida o valor do produto
    if (valorProduto < 0) {
        printf("O valor do produto deve ser positivo\n");
        return 1;
    }

    printf("Porcentagem do desconto: ");
    scanf("%f", &porcentagemDesconto);

    // Valida a porcentagem do desconto
    if (porcentagemDesconto < 0 || porcentagemDesconto > 100) {
        printf("A porcentagem deve ser entre 0 e 100\n");
        return 1;
    }

    float valorComDesconto = valorProduto - (porcentagemDesconto / 100 * valorProduto);

    printf("---\n");
    printf("Valor com %.0f%% desconto: %.2f", porcentagemDesconto, valorComDesconto);

    printf("\n\n");
    return 0;
}