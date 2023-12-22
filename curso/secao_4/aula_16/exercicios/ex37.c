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

    printf("60: %dh\n", converterMinutosEmHoras(60));
    printf("120: %dh\n", converterMinutosEmHoras(120));
    printf("180: %dh\n", converterMinutosEmHoras(180));

    printf("---\n");

    printf("61: %dh\n", converterMinutosEmHoras(61));
    printf("121: %dh\n", converterMinutosEmHoras(121));
    printf("182: %dh\n", converterMinutosEmHoras(182));
    
    // int horaChegada, minutoChegada;
    // int horaSaida, minutoSaida;

    // printf("# Calcular valor de estacionamento\n\n");

    // printf("Informe o horário da chegada:\n");
    // lerHora(&horaChegada);
    // lerMinuto(&minutoChegada);

    // printf("\nInforme o horário da saída:\n");
    // lerHora(&horaSaida);
    // lerMinuto(&minutoSaida);

    // int horarioEmMinutoChegada = converterHorarioParaHoraEmMinuto(horaChegada, minutoChegada);
    // int horarioEmMinutoSaida = converterHorarioParaHoraEmMinuto(horaSaida, minutoSaida);

    // int periodoEmMinuto = calcularPeriodoEmMinuto(horarioEmMinutoChegada, horarioEmMinutoSaida);
    // int perioroEmHora = converterMinutosEmHoras(periodoEmMinuto);

    // float valorTarifa = calcularTarifaDePeriodoEmHora(perioroEmHora);

    // printf("\nValor a pagar: R$ %.2f", valorTarifa);

    printf("\n\n");
    return 0;
}

void lerHora(int *hora) {
    int lerHora = -1;
    do {
        printf("Hora: ");
        scanf("%d", &lerHora);
    } while (lerHora < 0 || lerHora > 23);

    *hora = lerHora;
}

void lerMinuto(int *minuto) {
    int lerMinuto = -1;
    do {
        printf("Minuto: ");
        scanf("%d", &lerMinuto);
    } while (lerMinuto < 0 || lerMinuto > 59);

    *minuto = lerMinuto;
}

int converterHorarioParaHoraEmMinuto(int hora, int minuto) {
    int horaEmMinuto = hora * 60 + minuto;
    while (horaEmMinuto & 60 != 0) {
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

    if (periodoEmHora == 1 || periodoEmHora == 2) {
        return periodoEmHora * VALOR_1_E_2_HORAS;
    }

    if (periodoEmHora == 3 || periodoEmHora == 4) {
        return periodoEmHora * VALOR_3_E_4_HORAS;
    }

    return periodoEmHora * VALOR_5_HORAS_MAIS;
}
