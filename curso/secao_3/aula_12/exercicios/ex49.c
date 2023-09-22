#include <stdio.h>
// Faça um programa para que leia o horário (hora, minuto e segundo)
// de inicio e a duração em segundos, de uma experiência biológica.
// O programa deve resultar com o novo horário (hora, minuto e segundo)
// do termino da mesma.

const int horaEmSegundos = 3600;
const int minutoEmSegundos = 60;

void imprimirTempo(int horas, int minutos, int segundos);

int main() {
    int horaIni, minutoIni, segundoIni, duracaoEmSegundos;

    printf("# Calcular horário de término após duração em segundos\n");
    
    printf("Informe a hora do início do evendo:\n");
    printf("Hora: ");
    scanf("%d", &horaIni);
    printf("Minuto: ");
    scanf("%d", &minutoIni);
    printf("Segundo: ");
    scanf("%d", &segundoIni);

    printf("Informe a duração do evento em segundos: ");
    scanf("%d", &duracaoEmSegundos);

    // Calculo
    int horaFim = horaIni;
    int minutoFim = minutoIni;
    int segundoFim = segundoIni;
    int diasPassados = 0;

    int segundosCalc = duracaoEmSegundos;

    // Incrementa hora
    while (segundosCalc >= horaEmSegundos) {
        horaFim++;
        segundosCalc -= horaEmSegundos;
    }

    // Incrementa minuto
    while (segundosCalc >= minutoEmSegundos) {
        minutoFim++;
        segundosCalc -= minutoEmSegundos;
    }

    // Incrementa segundo
    segundoFim += segundosCalc;

    // Ajusta segundo para minuto
    while (segundoFim >= 60) {
        segundoFim -= 60;
        minutoFim++;
    }

    // Ajusta minuto para hora
    while (minutoFim >= 60) {
        minutoFim -= 60;
        horaFim++;
    }

    // Ajusta hora para dias
    while (horaFim >= 24) {
        horaFim -= 24;
        diasPassados++;
    }

    // Imprime o resultado
    printf("O horário do térmido do evento será as ");
    imprimirTempo(horaFim, minutoFim, segundoFim);
    
    if (diasPassados == 1) {
        printf(" do dia seguinte");
    } else if (diasPassados > 1) {
        printf(" após %d dias", diasPassados);
    }

    printf("\n\n");
    return 0;
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