#include <stdio.h>
// Leia um ângulo em graus e apresente-o convertido em radianos.
// A fórmula de conversão é: R = G * pi / 180, sendo G o ângulo em graus e R em radianos e pi = 3.14

int main() {
    // Declara variáveis
    char grandeza[] = "graus";
    char unidadeInicial[] = "ângulo";
    char unidadeFinal[] = "radianos";
    float valorInicial, valorFinal;

    // Imprime cabeçalho
    printf("# Converta %s em %s para %s\n", grandeza, unidadeInicial, unidadeFinal);
    
    // Obtém valor inicial
    printf("Informe %s em %s: ", grandeza, unidadeInicial);
    scanf("%f", &valorInicial);

    // Calcula valor final aplicando a fórmula
    valorFinal = valorInicial * 3.14 / 180;

    // Imprime resultado final
    printf("---\n");
    printf("%f %s = %f %s", valorInicial, unidadeInicial, valorFinal, unidadeFinal);

    printf("\n\n");
    return 0;
}