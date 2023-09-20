#include <stdio.h>
// Leia um valor de comprimento em metros e apresente-o convertido em jardas.
// A fórmula de conversão é: J = M / 0.91, sendo J o comprimento em jardas e M o comprimento em metros.

float formulaDeConvercao(float x) {
    return x / 0.91;
}

int main() {
    // Declara variáveis
    char grandeza[] = "comprimento";
    char unidadeInicial[] = "metros";
    char unidadeFinal[] = "jardas";
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