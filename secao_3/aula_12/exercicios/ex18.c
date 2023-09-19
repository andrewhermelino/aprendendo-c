#include <stdio.h>
// Leia um valor de volume em metros cúbicos m^3 e apresente-o convertido em litros.
// A fórmula de conversão é: L = 1000 * M, sendo L o volume em litros e M o volume em metros cúbicos.

double formulaDeConvercao(float x) {
    return 100 * x;
}

int main() {
    // Declara variáveis
    char grandeza[] = "volume";
    char unidadeInicial[] = "metros cúbicos";
    char unidadeFinal[] = "litros";
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
    printf("%f %s = %f %s", valorInicial, unidadeInicial, valorFinal, unidadeFinal);

    printf("\n\n");
    return 0;
}