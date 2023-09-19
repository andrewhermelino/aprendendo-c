#include <stdio.h>
// Leia um valor de comprimento em centímetros e apresente-o convertido em polegadas.
// A fórmula de conversão é: P = C / 2.54, sendo C o comprimento em centímetros e P o comprimento em polegadas.

int main() {
    // Declara variáveis
    char grandeza[] = "comprimento";
    char unidadeInicial[] = "centímetros";
    char unidadeFinal[] = "polegadas";
    float valorInicial, valorFinal;

    // Imprime cabeçalho
    printf("# Converta %s em %s para %s\n", grandeza, unidadeInicial, unidadeFinal);
    
    // Obtém valor inicial
    printf("Informe %s em %s: ", grandeza, unidadeInicial);
    scanf("%f", &valorInicial);

    // Calcula valor final aplicando a fórmula
    valorFinal = valorInicial / 2.54;

    // Imprime resultado final
    printf("---\n");
    printf("%f %s = %f %s", valorInicial, unidadeInicial, valorFinal, unidadeFinal);

    printf("\n\n");
    return 0;
}