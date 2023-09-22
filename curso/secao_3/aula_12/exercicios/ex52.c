#include <stdio.h>
/*
Três amigos jogaram na loteria.
Caso eles ganhem, o prêmio deve ser repartido
proporcionalmente ao valor que cada um deu
para a realização da aposta. Faça um programa que
leia quanto cada apostador investiu, o valor do prêmio,
e imprima quanto cada um ganharia do prêmio com base no valor investido.
*/

void printArr(float numArr[], int len) {
    printf("[ ");
    for (int i = 0; i < len; i++) {
        if (i != 0) {
            printf(", ");
        }
        printf("%f", numArr[i]);
    }
    printf(" ]\n");
}

int main() {
    float valorApostaArr[3];
    float valorTotalAposta = 0;
    float valorPremio;

    printf("# Distribuir valor de loteria entre amigos\n");

    printf("Informe o valor do prêmio: R$ ");
    scanf("%f", &valorPremio);

    for (int i = 0; i < 3; i++) {
        printf("Informe quando o %dº amigo apostou: ", i+1);
        scanf("%f", &valorApostaArr[i]);
        valorTotalAposta += valorApostaArr[i];
    }

    float porcentValorApostaArr[3];
    for (int i = 0; i < 3; i++) {
        porcentValorApostaArr[i] = ((100 * valorApostaArr[i]) / valorTotalAposta) / 100;
    }

    printf("---\n");

    for (int i = 0; i < 3; i++) {
        printf("> O %dº amigo ganhará R$ %.2f\n", i+1, valorPremio * porcentValorApostaArr[i]);
    }

    printf("\n\n");
    return 0;
}
