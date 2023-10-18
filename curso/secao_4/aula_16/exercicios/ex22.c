#include <stdio.h>
/*
Leia a idade e o tempo de serviço de um trabalhador
e escreva se ele pode aposentar.
As condições para aposentadoria são:
- Ter pelo menos 65 anos;
- Ou ter trabalhado pelo menos 30 anos;
- Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.
*/

int main() {
    int idade, tempoServico;

    printf("# Calcular se pode se aposentar\n");

    printf("Idade: ");
    scanf("%d", &idade);

    printf("Anos de serviço: ");
    scanf("%d", &tempoServico);

    if (idade >= 65) {
        printf("> Pode se aposentar");
        printf("\n\n");
        return 0;
    }

    if (tempoServico >= 30) {
        printf("> Pode se aposentar");
        printf("\n\n");
        return 0;
    }

    if (idade >= 60 && tempoServico >= 25) {
        printf("> Pode se aposentar");
        printf("\n\n");
        return 0;
    }

    printf("> Não pode se aposentar");
    printf("\n\n");
    return 0;
}
