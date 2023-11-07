#if defined(__MINGW32__) || defined(_MSC_VER)
#define limpar_tela() system("cls")
#else
#include <stdio_ext.h>
#define limpar_tela() system("clear")
#endif

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

/*
Faça um programa que leia três números inteiros positivos e efetue
o cálculo de uma das seguintes médias de acordo com um valor numérico
digitado pelo usuário:

a) Geométrica: raíz cúbica de (x * y * z)
b) Ponderada: (x + 2 * y + 3 * z) / 6
c) Harmônica: 1 / (1/x + 1/y + 1/z)
d) Aritmética: (x + y + z) / 3
*/

void telaInformarNotas();
float lerNotaComRotulo(int);
bool isNotaValida(float);
void telaInformarTipoDeMedia(float, float, float);
bool lerSimOuNao(char[]);
void imprimirMediaPorOpcao(float, float, float, int);
void imprimirNotas(float, float, float);

int main() {
    telaInformarNotas();
    printf("Programa finalizado");
    printf("\n\n");
    return 0;
}

void telaInformarNotas() {
    printf("# Cálcular média de 3 notas\n");
    bool executarTela = true;
    do {
        float n1, n2, n3;

        n1 = lerNotaComRotulo(1);
        n2 = lerNotaComRotulo(2);
        n3 = lerNotaComRotulo(3);

        telaInformarTipoDeMedia(n1, n2, n3);

        executarTela = lerSimOuNao("Deseja informar notas novamente?");
    } while(executarTela);
}

float lerNotaComRotulo(int numNota) {
    float nota;
    do {
        printf("Informe a nota %d: ", numNota);
        scanf("%f", &nota);
        if (!isNotaValida(nota)) {
            printf("Erro: informe uma nota de 0 a 10\n");
        }
    } while(!isNotaValida(nota));
    return nota;
}

bool isNotaValida(float nota) {
    return nota >= 0 && nota <= 10;
}

void telaInformarTipoDeMedia(float n1, float n2, float n3) {
    limpar_tela();
    bool executarTela = true;
    do {
        printf("\nEscolha uma forma de calcular média:\n");
        printf("[1] Geométrica -> ³√(x * y * z)\n");
        printf("[2] Ponderada  -> (x + 2 * y + 3 * z) / 6\n");
        printf("[3] Harmônica  -> 1 / (1/x + 1/y + 1/z)\n");
        printf("[4] Aritmética -> (x + y + z) / 3\n");
        printf("[5] Voltar\n");
        
        int opcao;
        do {
            printf("> ");
            scanf("%d", &opcao);
            while (getchar() != '\n');
        } while (opcao > 5 || opcao < 1);

        limpar_tela();

        if (opcao == 5) {
            executarTela = false;
        } else {
            imprimirMediaPorOpcao(n1, n2, n3, opcao);
        }

        printf("\n");
    } while(executarTela);
    limpar_tela();
}

void imprimirMediaPorOpcao(float n1, float n2, float n3, int opcao) {
    switch (opcao) {
        case 1: // Geométrica
            imprimirNotas(n1, n2, n3);
            printf("Média Geométrica: %.1f", pow(n1 * n2 * n3, 1.0/3.0));
            break;
        case 2: // Ponderada
            imprimirNotas(n1, n2, n3);
            printf("Média Ponderada: %.1f", (n1 + 2 * n2 + 3 * n3) / 6);
            break;
        case 3: // Harmônica
            imprimirNotas(n1, n2, n3);
            printf("Média Harmônica: %.1f", 1 / (1/n1 + 1/n2 + 1/n3));
            break;
        case 4: // Aritmética
            imprimirNotas(n1, n2, n3);
            printf("Média Aritmética: %.1f", (n1 + n2 + n3) / 3);
            break;
        default:
            break;
    }
}

void imprimirNotas(float n1, float n2, float n3) {
    printf("Notas: %.1f, %.1f, %.1f\n", n1, n2, n3);
}

bool lerSimOuNao(char rotulo[]) {
    char r = ' ';
    while (r != 'S' && r != 's' && r != 'N' && r != 'n') {
        printf("%s [S/N]: ", rotulo);
        scanf("%c", &r);
        while (getchar() != '\n');
    }
    return r == 'S' || r == 's';
}