#include <stdio.h>
// Leia um valor inteiro em segundos e imprima-o em horas, minutos e segundos.

const int horaEmSegundos = 3600;
const int minutoEmSegundos = 60;

int calcularHorasInteiroDeSegundos(int segundos) {
    int horas = 0;
    while (segundos >= horaEmSegundos) {
        horas++;
        segundos -= horaEmSegundos;
    }
    return horas;
}

int calcularMinutosInteiroDeSegundos(int segundos) {
    int minutos = 0;
    while (segundos >= minutoEmSegundos) {
        minutos++;
        segundos -= minutoEmSegundos;
    }
    return minutos;
}

void imprimirTempo(int horas, int minutos, int segundos) {
    if (horas < 10) {
        printf("0");
    }
    printf("%d", horas);

    printf(":");

    if (minutos < 10) {
        printf("0");
    }
    printf("%d", minutos);

    printf(":");

    if (segundos < 10) {
        printf("0");
    }
    printf("%d", segundos);
}

int main() {
    int horas, minutos, segundos;

    printf("# Converter segundos para horas, minutos e segundos\n");

    printf("Digite um valor inteiro em segundos: ");
    scanf("%d", &segundos);

    horas = calcularHorasInteiroDeSegundos(segundos);
    segundos -= horas * horaEmSegundos;
    minutos = calcularMinutosInteiroDeSegundos(segundos);
    segundos -= minutos * minutoEmSegundos;

    imprimirTempo(horas, minutos, segundos);

    printf("\n\n");
    return 0;
}