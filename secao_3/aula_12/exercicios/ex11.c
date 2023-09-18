#include <stdio.h>
// Leia uma velocidade em m/s (metros por segundo) e apresente-a convertida em km/h (quilômetros por hora).
// A fórmula de conversão é: K = M * 3.6, sendo K a velocidade em km/h e M em m/s

int main() {
    // Declara variáveis
    char grandesa[] = "velocidade";
    char unidadeInicial[] = "m/s";
    char unidadeFinal[] = "km/h";
    float valorInicial, valorFinal;

    // Imprime cabeçalho
    printf("# Converta %s em %s para %s\n", grandesa, unidadeInicial, unidadeFinal);
    printf("# Converta %s em %s para %s\n", grandesa, unidadeInicial, unidadeFinal);
    
    // Obtém valor inicial
    printf("Informe %s em %s: ", grandesa, unidadeInicial);
    scanf("%f", &valorInicial);

    // Calcula valor final aplicando a fórmula
    valorFinal = valorInicial * 3.6;

    // Imprime resultado final
    printf("---\n");
    printf("%f %s = %f %s", valorInicial, unidadeInicial, valorFinal, unidadeFinal);

    printf("\n\n");
    return 0;
}