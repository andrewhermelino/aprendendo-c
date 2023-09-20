#include <stdio.h>
// Leia um valor de comprimento em jardas e apresente-o em metros.
// A fórmula de conversão é: M = 0.91 * J, sendo J o comprimento em jardas e M o comprimento em metros.

float formulaDeConvercao(float x) {
    return 0.91 * x;
}

int main() {
    // Declara variáveis
    char grandeza[] = "comprimento";
    char unidadeInicial[] = "jardas";
    char unidadeFinal[] = "metros";
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