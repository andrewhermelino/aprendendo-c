#include <stdio.h>
// Leia um valor de área em hectares e apresente-o convertido em metros quadrados m^2.
// A fórmula de conversão é: M = H * 10000, sendo M a área em metros quadrados e H a área em hectares.

float formulaDeConvercao(float x) {
    return x * 10000;
}

int main() {
    // Declara variáveis
    char grandeza[] = "área";
    char unidadeInicial[] = "hectares";
    char unidadeFinal[] = "metros quadrados";
    float valorInicial, valorFinal;

    // Imprime cabeçalho
    printf("# Converta %s em %s para %s\n", grandeza, unidadeInicial, unidadeFinal);
    
    // Obtém valor inicial
    printf("Informe %s em %s: ", grandeza, unidadeInicial);
    scanf("%f", &valorInicial);

    // Calcula valor final aplicando a fórmula
    valorFinal = formulaDeConvercao(valorInicial);

    // Imprime resultado final
    printf("---\n");
    printf("%.2f %s = %.2f %s", valorInicial, unidadeInicial, valorFinal, unidadeFinal);

    printf("\n\n");
    return 0;
}