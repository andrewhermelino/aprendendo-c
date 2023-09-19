#include <stdio.h>
// Leia um valor de volume em litros e apresente-o convertido em metros cúbicos m^3.
// A fórmula de conversão é: M = L / 1000, sendo L o volume em litros e M o volume em metros cúbicos.

double formulaDeConvercao(float x) {
    return x / 1000;
}

int main() {
    // Declara variáveis
    char grandeza[] = "volume";
    char unidadeInicial[] = "litros";
    char unidadeFinal[] = "metros cúbicos";
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