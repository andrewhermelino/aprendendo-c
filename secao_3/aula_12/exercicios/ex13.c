#include <stdio.h>
// Leia uma distância em quilômetros e apresente-a convertida em milhas.
// A fórmula de conversão é: M = K/1.61, sendo K a distância em quilômetros e M em milhas.

int main() {
    // Declara variáveis
    char grandeza[] = "distância";
    char unidadeInicial[] = "quilômetros";
    char unidadeFinal[] = "milhas";
    float valorInicial, valorFinal;

    // Imprime cabeçalho
    printf("# Converta %s em %s para %s\n", grandeza, unidadeInicial, unidadeFinal);
    
    // Obtém valor inicial
    printf("Informe %s em %s: ", grandeza, unidadeInicial);
    scanf("%f", &valorInicial);

    // Calcula valor final aplicando a fórmula
    valorFinal = valorInicial / 1.61;

    // Imprime resultado final
    printf("---\n");
    printf("%f %s = %f %s", valorInicial, unidadeInicial, valorFinal, unidadeFinal);

    printf("\n\n");
    return 0;
}