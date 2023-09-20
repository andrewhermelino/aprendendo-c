#include <stdio.h>
/*
A importância de R$ 780.000,00 será dividida entre três ganhadores de um curso.
Sendo que da quantia total:
  - O primeiro ganhador receberá 46%;
  - O segundo receberá 32%;
  - O terceiro receberá o restante;
Calcule e imprima a quantia ganha por cada um dor ganhadores.
*/

float calcularPorcentagemDeValor(float valor, float porcentagem) {
    return valor * porcentagem / 100;
}

int main() {
    float importancia = 780000;
    float valorGanhadores[] = {0, 0, 0};
    float porcentagemGanhadores[3];
    porcentagemGanhadores[0] = 46;
    porcentagemGanhadores[1] = 32;
    porcentagemGanhadores[2] = 100 - porcentagemGanhadores[0] - porcentagemGanhadores[1];

    for (int i = 0; i < 3; i++) {
        valorGanhadores[i] = calcularPorcentagemDeValor(importancia, porcentagemGanhadores[i]);
    }

    printf("A importância de R$ %.2f será dividida entre três ganhadores de um curso.\n", importancia);
    printf("Sendo que da quantia total:\n");

    printf("- O primeiro ganhador receberá: %.0f%% (R$ %.2f)\n", porcentagemGanhadores[0], valorGanhadores[0]);
    printf("- O segundo ganhador receberá: %.0f%% (R$ %.2f)\n", porcentagemGanhadores[1], valorGanhadores[1]);
    printf("- O terceiro receberá o restante: %.0f%% (R$ %.2f)\n", porcentagemGanhadores[2], valorGanhadores[2]);

    printf("\n\n");
    return 0;
}