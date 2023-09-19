#include <stdio.h>
// Leia um valor de massa em libras e apresente-o convertido em quilogramas.
// A fórmula de conversão é: K = L * 0.45, sendo K a massa em quilogramas e L a massa em libras.

float formulaDeConvercao(float x) {
    return x * 0.45;
}

int main() {
    // Declara variáveis
    char grandeza[] = "massa";
    char unidadeInicial[] = "libras";
    char unidadeFinal[] = "quilogramas";
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