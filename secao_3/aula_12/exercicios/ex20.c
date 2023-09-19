#include <stdio.h>
// Leia um valor de massa em quilogramas e apresente-o convertido em libras.
// A fórmula de conversão é: L = K / 0.45, sendo K a massa em quilogramas e L a massa em libras.

double formulaDeConvercao(float x) {
    return x / 0.45;
}

int main() {
    // Declara variáveis
    char grandeza[] = "massa";
    char unidadeInicial[] = "quilogramas";
    char unidadeFinal[] = "libras";
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