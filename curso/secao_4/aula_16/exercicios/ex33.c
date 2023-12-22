#include <stdio.h>
/*
Um produto vai sofrer aumento de acordo com a tabela abaixo.
Leia o preço antigo, calcule e escreva o preço novo, e escreva
uma mensagem em função do preço novo (de acordo com a segunda tabela).

+----------------------------------------------+
| PREÇO ANTIGO         | PERCENTUAL DE AUMENTO |
+----------------------+-----------------------+
| até R$ 50            |           5%          |
| entre R$ 50 e R$ 100 |          10%          |
| acima de R$ 100      |          15%          |
+----------------------------------------------+
*/

void imprimirIntroducao();
float obterPercencualAumento(float);
float calcularPrecoComAumento(float, float);
void imprimirResultado(float, float, float);

int main() {
    
    imprimirIntroducao();

    printf("\nInforme o preço original do produto: R$ ");

    float precoOriginal;
    scanf("%f", &precoOriginal);

    float percentualAumento = obterPercencualAumento(precoOriginal);
    float precoComAumento = calcularPrecoComAumento(precoOriginal, percentualAumento);

    printf("\n------------------------------------------------\n\n");

    imprimirResultado(precoOriginal, percentualAumento, precoComAumento);

    printf("\n\n");
    return 0;
}

void imprimirIntroducao() {
    printf("# Calcular aumento do produto\n\n");

    printf("> O aumento do produto é calculado de acordo\n");
    printf("> com a tabela abaixo\n\n");

    printf("+----------------------------------------------+\n");
    printf("| PREÇO ANTIGO         | PERCENTUAL DE AUMENTO |\n");
    printf("+----------------------+-----------------------+\n");
    printf("| até R$ 50            |           5%%          |\n");
    printf("| de R$ 50 a R$ 100    |          10%%          |\n");
    printf("| acima de R$ 100      |          15%%          |\n");
    printf("+----------------------------------------------+\n");
}

float obterPercencualAumento(float precoOriginal) {
    int precoOriginalMultiplicado = precoOriginal * 100;
    
    if (precoOriginalMultiplicado < 50 * 100) {
        return 0.05;
    }

    if (precoOriginalMultiplicado <= 100 * 100) {
        return 0.10;
    }

    return 0.15;
}

float calcularPrecoComAumento(float precoOriginal, float percentualAumento) {
    float valorAumento = precoOriginal * percentualAumento;
    float precoComAumento = precoOriginal + valorAumento;
    return precoComAumento;
}

void imprimirResultado(float precoOriginal, float percentualAumento, float precoComAumento) {
    printf("Preço original: R$ %.2f\n", precoOriginal);
    printf("Percentual do aumento: %.0f%%\n", percentualAumento * 100);
    printf("Preço com aumento: R$ %.2f\n", precoComAumento);
}
