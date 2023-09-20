#include <stdio.h>
// Leia um valor de área em metros quadrados m^2 e apresente-o convertido em acres.
// A fórmula de conversão é: A = M * 0.000247, sendo M a área em metros quadrados e A a área em acres.

float formulaDeConvercao(float x) {
    return x * 0.000247;
}

int main() {
    // Declara variáveis
    char grandeza[] = "área";
    char unidadeInicial[] = "metros quadrados";
    char unidadeFinal[] = "acres";
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