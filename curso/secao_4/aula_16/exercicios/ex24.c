#include <stdio.h>
/*
Uma empresa vende o mesmo produto para quatro diferentes estados.
Cada estado possui uma taxa diferente de imposto sobre o
produto (MG 7%; SP 12%; RJ 15%; MS 8%).
Faça um programa em que o usuário entre com o valor e o
estado destino do produto e o programa retorne o preço
final do produto acrescido do imposto do estado em que
ele será vendido. Se o estado digitado não for válido,
mostrar uma mensagem de erro.
*/

void lerPrecoProduto(float*);
void lerFlEstado(int*);
float calcularValorImposto(float, int);

const float percTaxaMG = 0.07;
const float percTaxaSP = 0.12;
const float percTaxaRJ = 0.15;
const float percTaxaMS = 0.08;

int main() {
    printf("# Calcular preço final de produto\n");

    float precoProduto;
    lerPrecoProduto(&precoProduto);

    int flEstado;
    lerFlEstado(&flEstado);

    float valorImposto = calcularValorImposto(precoProduto, flEstado);

    if (valorImposto < 0) {
        printf("Algo de errado ocorreu ao calcular o valor do imposto\n\n");
        return 1;
    }

    float precoFinalProduto = precoProduto - valorImposto;

    printf("Valor do imposto: R$ %.2f\n", valorImposto);
    printf("Preço final do produto: R$ %.2f\n", precoFinalProduto);

    printf("\n\n");
    return 0;
}

void lerPrecoProduto(float *precoProdutoPoint) {
    do {
        printf("Preço do produto: R$ ");
        scanf("%f", precoProdutoPoint);
        while (getchar() != '\n');
    } while (*precoProdutoPoint < 1);
}

void lerFlEstado(int *flEstadoPoint) {
    printf("Informe o estado destino:\n");
    printf("[1] MG - Minas Gerais\n");
    printf("[2] SP - São Paulo\n");
    printf("[3] RJ - Rio de Janeiro\n");
    printf("[4] MS - Mato Grosso do Sul\n");
    do {
        printf("Escolha uma opção: ");
        scanf("%d", flEstadoPoint);
        while (getchar() != '\n');
    } while (*flEstadoPoint > 4 || *flEstadoPoint < 1);
}

float calcularValorImposto(float precoProduto, int flEstado) {
    switch (flEstado) {
        case 1:
            return precoProduto * percTaxaMG;
        case 2:
            return precoProduto * percTaxaSP;
        case 3:
            return precoProduto * percTaxaRJ;
        case 4:
            return precoProduto * percTaxaMS;
        default:
            return -1;
    }
}