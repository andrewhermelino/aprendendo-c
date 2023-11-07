#include <stdio.h>
/*
Leia a distância em Km e a quantidade de litros de gasolina
consumidos por um carro em um percurso, calcule o consumo em KM/L
e escreva uma mensagem de acordo com a tabela a baixo:

CONSUMO   | Km/L   | MENSAGEM
----------+--------+-----------------
menor que | 8      | Venda o carro!
entre     | 8 e 14 | Econômico!
maior que | 14     | Super econômico!
*/

int main() {
    float distanciaKm, litrosGastos;

    printf("# Calcular consumo de carro\n");

    printf("Distância em Km: ");
    scanf("%f", &distanciaKm);

    printf("Litros de gasolina gastos: ");
    scanf("%f", &litrosGastos);

    float consumoKmPorL = distanciaKm / litrosGastos;

    printf("Consumo Km/L: %.2f\n\n", consumoKmPorL);

    if (consumoKmPorL < 8) {
        printf("Venda o carro!");
    } else if (consumoKmPorL > 14) {
        printf("Super econômico!");
    } else {
        printf("Econômico");
    }

    printf("\n\n");
    return 0;
}
