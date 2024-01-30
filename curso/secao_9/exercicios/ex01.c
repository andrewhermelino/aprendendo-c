#include <stdio.h>
/*
Faça um programa que tenha uma função que receba um
vetor de inteiros como parâmetro e retorne o maior valor.
*/

int retornarMaiorValor(int valores[], int quantidade) {
    int maiorValor = 0;

    for (int i = 0; i < quantidade; i++) {
        if (i == 0 || valores[i] > maiorValor) {
            maiorValor = valores[i];
        }
    }

    return maiorValor;
}

int main() {
    int valores[100];

    printf("# Verificar maior valor\n");
    printf("(informe 0 para finalizar)\n\n");

    int valor = 0;
    int contador = 0;

    do {
        printf("Informe o %dº valor: ", contador + 1);
        scanf("%d", &valor);
        valores[contador] = valor;
        contador++;
    } while (valor != 0 && contador < 100);
    
    int maiorValor = retornarMaiorValor(valores, contador);

    printf("\nO maior valor digitado foi: %d", maiorValor);

    printf("\n\n");
    return 0;
}
