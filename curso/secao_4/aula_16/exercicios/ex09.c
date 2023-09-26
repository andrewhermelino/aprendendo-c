#include <stdio.h>
// Leia um salário de um trabalhador e o valor da prestação de um empréstimo.
// Se a prestação for maior que 20% do salário imprima:
// `Empréstimo não concedido`, caso contrário imprima:
// `Empréstimo concedido`.

int main() {
    float valorSalario, valorPrestacao;

    printf("# Aprovar prestação\n");

    printf("Informe o valor do salário: R$ ");
    scanf("%f", &valorSalario);

    printf("Informe o valor da prestação: R$ ");
    scanf("%f", &valorPrestacao);

    float valorMinimo = valorPrestacao * 20 / 100;

    if (valorSalario < valorMinimo) {
        printf("Empréstimo não concedido");
    } else {
        printf("Empréstimo concedido");
    }

    printf("\n\n");
    return 0;
}
