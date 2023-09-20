#include <stdio.h>
// Leia um ângulo em radianos e apresente-o convertido em graus.
// A fórmula de conversão é: G = R * 180 / pi, sendo G o ângulo em graus e R em radianos e pi = 3.14

int main() {
    // Declara variáveis
    char grandeza[] = "ângulo";
    char unidadeInicial[] = "radianos";
    char unidadeFinal[] = "graus";
    float valorInicial, valorFinal;

    // Imprime cabeçalho
    printf("# Converta %s em %s para %s\n", grandeza, unidadeInicial, unidadeFinal);
    
    // Obtém valor inicial
    printf("Informe %s em %s: ", grandeza, unidadeInicial);
    scanf("%f", &valorInicial);

    // Calcula valor final aplicando a fórmula
    valorFinal = valorInicial * 180 / 3.14;

    // Imprime resultado final
    printf("---\n");
    printf("%f %s = %f %s", valorInicial, unidadeInicial, valorFinal, unidadeFinal);

    printf("\n\n");
    return 0;
}