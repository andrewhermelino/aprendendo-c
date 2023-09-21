#include <stdio.h>
// Receba a altura do degrau de uma escada e a altura que o usuário deseja alcançar subindo a escada. Calcule e mostre quantos degraus o usuário deverá subir para atingir seu objetivo.

int main() {
    float alturaDegrauCM, alturaObjetivoM;

    printf("# Calcular quantidade de degraus para subir uma altura\n");

    printf("Altura do degrau em centímetros: ");
    scanf("%f", &alturaDegrauCM);

    printf("Altura que deseja subir em metros: ");
    scanf("%f", &alturaObjetivoM);

    // Cálculos
    float alturaDegrauM = alturaDegrauCM / 100;
    float quantidadeDegraus = alturaObjetivoM / alturaDegrauM;

    // Imprimir resultado
    printf("---\n");

    printf("Serão necessários %.1f degraus para subir a altura desejada :)", quantidadeDegraus);

    printf("\n\n");
    return 0;
}