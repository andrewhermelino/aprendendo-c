#include <stdio.h>
#include <stdlib.h>
/*
Escreva o menu de opções abaixo. Leia a opção do
usuário e execute a operação escolhida.
Escreva uma mensagem de erro se a opção for inválida.
```
Escolha a opção:
1- Soma de 2 números.
2- Diferença entre 2 números (maior pelo menor).
3- Produto entre 2 números.
4- Divisão entre 2 números (o denominador não pode ser zero).
Opção: 
```
*/

void imprimirMenu();
void somaDoisNumeros(float *, float *);
void lerDoisNumeros(float *, float *);
void diferencaDoisNumeros(float *, float *);
void produtoDoisNumeros(float *, float *);
void divisaoDoisNumeros(float *, float *);

int main() {
    int executar = 1;
    int opcao;
    float n1, n2 = 0;

    while (executar) {

        imprimirMenu();
        scanf("%d", &opcao);

        printf("\n");
        switch (opcao) {
            case 1:
                somaDoisNumeros(&n1, &n2);
                break;
            case 2:
                diferencaDoisNumeros(&n1, &n2);
                break;
            case 3:
                produtoDoisNumeros(&n1, &n2);
                break;
            case 4:
                divisaoDoisNumeros(&n1, &n2);
                break;
            case 5:
                executar = 0;
                break;
            default:
                while(getchar() != '\n');
                printf("Opção inválida");
                break;
        }
        printf("\n\n");
    }

    printf("\n\n");
    return 0;
}

void imprimirMenu() {
    printf("# Calculadora\n");
    printf("---\n");
    printf("[1] Soma de dois números\n");
    printf("[2] Diferença entre 2 números\n");
    printf("[3] Produto de 2 números\n");
    printf("[4] Divisão de 2 números\n");
    printf("[5] Sair\n");
    printf("Opção: ");
}

void somaDoisNumeros(float *n1, float *n2) {
    printf("## Soma entre dois números\n");
    lerDoisNumeros(n1, n2);
    printf("> A soma entre %.0f e %.0f é %.0f", *n1, *n2, *n1 + *n2);
}

void lerDoisNumeros(float *n1, float *n2) {
    printf("Primeiro número: ");
    scanf("%f", n1);

    printf("Segundo número: ");
    scanf("%f", n2);
}

void diferencaDoisNumeros(float *n1, float *n2) {
    printf("## Diferença entre dois números\n");
    lerDoisNumeros(n1, n2);

    float x = *n1 - *n2;
    if (x < 0) {
        x = x * -1;
    }

    printf("> A diferença entre %.0f e %.0f é %.0f", *n1, *n2, x);
}

void produtoDoisNumeros(float *n1, float *n2) {
    printf("## Produto de dois números\n");
    lerDoisNumeros(n1, n2);
    printf("> O produto de %.0f e %.0f é %.0f", *n1, *n2, *n1 * *n2);
}

void divisaoDoisNumeros(float *n1, float *n2) {
    printf("## Divisão de dois números\n");
    lerDoisNumeros(n1, n2);
    if (*n2 == 0) {
        printf("> Erro: não é possível dividir por 0");
        return;
    }
    printf("> O produto de %.0f e %.0f é %.0f", *n1, *n2, *n1 / *n2);
}
