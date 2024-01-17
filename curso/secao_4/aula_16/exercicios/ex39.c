#include <stdio.h>
/*
Uma empresa decide dar um aumento aos seus funcionários
de acordo com uma tabela que considera o salário atual e
o tempo de serviço de cada funcionário. Os funcionários
com menos salário terão um aumento proporcionalmente maior
do que os funcionários com salário maior, e conforme o tempo
de serviço na empresa, cada funcionário irá receber um bônus
adicional de salário. Faça um programa que leia:

- o valor do salário do funcionário
- o tempo de serviço desse funcionário na empresa
(número de anos de trabalho na empresa).

Use as tabelas abaixo para calcular o salário
reajustado deste funcionário e imprima o valor
do salário final reajustado, ou uma mensagem
caso o funcionário não tenha direito a nenhum aumento.

 Salário atual | Reajuste (%) | Tempo de Serviço | Bônus
---------------+--------------+------------------+-----------
até 500        |     25%      | abaixo de 1 ano  | sem bônus
até 1000       |     20%      | de 1 a 3 anos    | 100
até 1500       |     15%      | de 4 a 6 anos    | 200
até 2000       |     10%      | de 7 a 10 anos   | 300
acima de 2000  | Sem reajuste | mais de 10 anos  | 500
*/

float calcularPercentualReajustePorSalario(float);
float calcularBonusPorAnosDeServico(int);

int main() {
    float salarioAtual;
    int anosDeServico;

    printf("# Calcular reajuste de salário:\n");

    printf("Informe o salário atual: R$ ");
    scanf("%f", &salarioAtual); // todo: validar salário

    printf("Informe quantos anos de serviço o funcionário tem: ");
    scanf("%d", &anosDeServico); // todo: validar anos de serviço

    float percentualReajuste = calcularPercentualReajustePorSalario(salarioAtual);
    float valorReajuste = salarioAtual * percentualReajuste;
    float bonus = calcularBonusPorAnosDeServico(anosDeServico);

    float salarioNovo = salarioAtual + valorReajuste + bonus;

    // Imprimindo resultado
    printf("\nResultado:\n");
    if (percentualReajuste > 0) {
        printf("Reajuste: R$ %.2f (%.0f%%)\n", salarioAtual * percentualReajuste, percentualReajuste * 100);
    }
    if (bonus > 0) {
        printf("Bônus: R$ %.2f\n", bonus);
    }
    printf("Salário pós reajuste: R$ %.2f", salarioNovo);

    printf("\n\n");
    return 0;
}

float calcularPercentualReajustePorSalario(float salario) {
    if (salario <= 500) {
        return 0.25;
    } else if (salario <= 1000) {
        return 0.20;
    } else if (salario <= 1500) {
        return 0.15;
    } else if (salario <= 2000) {
        return 0.10;
    }
    return 0.0;
}

float calcularBonusPorAnosDeServico(int anosDeServico) {
    if (anosDeServico < 1) {
        return 0.0;
    } else if (anosDeServico <= 3) {
        return 100.0;
    } else if (anosDeServico <= 6) {
        return 200.0;
    } else if (anosDeServico <= 10) {
        return 300.0;
    }
    return 500.0;
}
