#include <stdio.h>
/*
As tarifas de certo parque de estacionamento são as seguintes:
- 1ª e 2ª hora - R$ 1,00 cada
- 3ª e 4ª hora - R$ 1,40 cada
- 5ª hora e seguintes - R$ 2,00 cada

O número de horas a pagar é sempre inteiro e arredondado por excesso.
Deste modo, quem estacionar durante 61 minutos pagará por duas horas,
que é o mesmo que pagaria se tivesse permanecido 120 minutos. Os momentos
de chegada ao parque e partida deste são apresentados na forma de pares
de inteiros, representando horas e minutos. Por exemplo, o par 12 50
representará "dez para a uma da tarde". Pretende-se criar um programa que,
lidos pelo teclado os momentos de chegada e de partida, escreva na tela o
preço cobrado pelo estacionamento. Adimite-se que a chegada e a partida se
dão com intervalo não superior a 24 horas. Portanto, se uma dada hora de
chegada for superior à da partida, isso não é uma situação de erro, antes
significará que a partida ocorreu no dia seguinte ao da chegada.
*/

void lerHora(int*);
void lerMinuto(int*);
int converterHorarioParaHoraEmMinuto(int, int);
int calcularPeriodoEmMinuto(int, int);
int converterMinutosEmHoras(int);
float calcularTarifaDePeriodoEmHora(int);

int main() {
    int horaChegada, minutoChegada;
    int horaSaida, minutoSaida;

    printf("# Calcular valor de estacionamento\n\n");

    printf("Informe o horário da chegada:\n");
    lerHora(&horaChegada);
    lerMinuto(&minutoChegada);

    printf("\nInforme o horário da saída:\n");
    lerHora(&horaSaida);
    lerMinuto(&minutoSaida);

    int horarioEmMinutoChegada = converterHorarioParaHoraEmMinuto(horaChegada, minutoChegada);
    int horarioEmMinutoSaida = converterHorarioParaHoraEmMinuto(horaSaida, minutoSaida);

    int periodoEmMinuto = calcularPeriodoEmMinuto(horarioEmMinutoChegada, horarioEmMinutoSaida);
    int perioroEmHora = converterMinutosEmHoras(periodoEmMinuto);

    float valorTarifa = calcularTarifaDePeriodoEmHora(perioroEmHora);

    printf("\nValor a pagar (%dh): R$ %.2f", perioroEmHora, valorTarifa);

    printf("\n\n");
    return 0;
}

void lerHora(int *hora) {
    int lerHora = -1;
    do {
        printf("Hora: ");
        scanf("%d", &lerHora);
        if (lerHora < 0 || lerHora > 23) {
            printf("* informe uma hora válida\n");
        }
    } while (lerHora < 0 || lerHora > 23);

    *hora = lerHora;
}

void lerMinuto(int *minuto) {
    int lerMinuto = -1;
    do {
        printf("Minuto: ");
        scanf("%d", &lerMinuto);
        if (lerMinuto < 0 || lerMinuto > 59) {
            printf("* informe um minuto válido\n");
        }
    } while (lerMinuto < 0 || lerMinuto > 59);

    *minuto = lerMinuto;
}

int converterHorarioParaHoraEmMinuto(int hora, int minuto) {
    int horaEmMinuto = hora * 60 + minuto;
    while (horaEmMinuto % 60 != 0) {
        horaEmMinuto++;
    }
    return horaEmMinuto;
}

int calcularPeriodoEmMinuto(int horarioEmMinutoChegada, int horarioEmMinutoSaida) {
    if (horarioEmMinutoChegada < horarioEmMinutoSaida) {
        return horarioEmMinutoSaida - horarioEmMinutoChegada;
    }
    return (horarioEmMinutoSaida + 24 * 60) - horarioEmMinutoChegada;
}

int converterMinutosEmHoras(int minutos) {
    int horas = minutos / 60;

    if (minutos % 60 != 0) {
        horas += 1;
    }

    return horas;
}

float calcularTarifaDePeriodoEmHora(int periodoEmHora) {
    const float VALOR_1_E_2_HORAS = 1.00;
    const float VALOR_3_E_4_HORAS = 1.40;
    const float VALOR_5_HORAS_MAIS = 2.00;

    float tarifaDePeriodoEmHora = 0;

    for (int i = 1; i <= periodoEmHora; i++) {
        if (i >= 5) {
            tarifaDePeriodoEmHora += VALOR_5_HORAS_MAIS;
        } else if (i >= 3) {
            tarifaDePeriodoEmHora += VALOR_3_E_4_HORAS;
        } else {
            tarifaDePeriodoEmHora += VALOR_1_E_2_HORAS;
        }
    }

    return tarifaDePeriodoEmHora;
}
