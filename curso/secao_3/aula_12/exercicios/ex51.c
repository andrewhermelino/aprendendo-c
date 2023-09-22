#include <stdio.h>
#include <math.h>
// Escreva um programa que leia as coordenadas x e y de
// pontos no R^2 e calcule sua distância da origem (0, 0).

int main() {
    int x, y;
    
    printf("# Calcule a distância das coordenadas x e y da origem\n");
    printf("X: ");
    scanf("%d", &x);
    printf("Y: ");
    scanf("%d", &y);

    float distancia = sqrt(pow(x, 2) + pow(y, 2));

    printf("> %.2f", distancia);

    printf("\n\n");
    return 0;
}