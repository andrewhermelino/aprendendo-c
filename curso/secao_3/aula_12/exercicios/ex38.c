#include <stdio.h>
// Leia o salário de um funcionário. Calcule e imprima o valor do novo salário, sabendo que ele recebeu um aumento de 25%.

int main() {
    float salarioAtual, porcentagemAumento;

    printf("# Calcule o salário do funcionário com aumento\n");

    printf("Salário atual: ");
    scanf("%f", &salarioAtual);

    printf("Porcentagem aumento: ");
    scanf("%f", &porcentagemAumento);

    float novoSalario = salarioAtual * (porcentagemAumento / 100 + 1);

    printf("---\n");

    printf("O novo salário é: R$ %.2f", novoSalario);

    printf("\n\n");
    return 0;
}