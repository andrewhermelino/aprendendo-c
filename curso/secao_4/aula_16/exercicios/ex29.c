#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/*
Faça uma prova de matemática para crianças que estão aprendendo a
somar números inteiros menores do que 100. Escolha números aleatórios
entre 1 e 100, e mostre na tela a pergunta: "Qual é a soma de a + b?",
onde a e b são números aleatórios. Peça a resposta. Faça cinco perguntas
ao aluno, e mostre para ele as perguntas e as respostas corretas, além de
quantas vezes o aluno acertou.
*/

/*
+---------------------------------------------------------+
| # | Questão | Valor informado | Valor correto | Correto |
+---+---------+-----------------+---------------+---------+
| 1 |  1 + 2  |               3 |             3 | Sim     |
| 2 | 50 + 71 |              13 |            45 | Não     |
| 3 | 42 + 6  |               3 |             3 | Sim     |
| 4 |  5 + 40 |              13 |            45 | Não     |
| 5 |  0 + 0  |               3 |             3 | Sim     |
+---------------------------------------------------------+
> Nota final: 8.5

Executar novamente? [S/N]: 
*/

int getRandomInt(int min, int max) {
    return (rand() % ((max+1) - min)) + min;
}

struct structQuestion {
    int questionIndex;
    int a;
    int b;
    int answer;
    int correctAnswer;
    bool isCorrect;
};

struct structQuestion questionConstructor(int questionIndex, int a, int b, int answer) {
    struct structQuestion quest;
    quest.questionIndex = questionIndex;
    quest.a = a;
    quest.b = b;
    quest.answer = answer;
    quest.correctAnswer = a + b;
    quest.isCorrect = quest.answer == quest.correctAnswer;
    return quest;
}

const int NUMBER_OF_QUESTIONS = 5;

int main() {

    while (true) {

        struct structQuestion questArray[NUMBER_OF_QUESTIONS];
        float nota = 0;
        
        // Ler respostas
        for (int questionIndex = 0; questionIndex < NUMBER_OF_QUESTIONS; questionIndex++) {
            int a = getRandomInt(1, 100);
            int b = getRandomInt(1, 100);

            printf("%d) Qual é o resultado da soma %d + %d?\n> ", questionIndex+1, a, b);

            int answer;
            do {
                scanf("%d", &answer);
                if (answer <= 1 || answer >= 1000) {
                    printf("A resposta deve ser maior do que 1 e menor do que 100\n> ");
                }
            } while (answer <= 1 || answer >= 1000);
            printf("\n");

            questArray[questionIndex] = questionConstructor(questionIndex, a, b, answer);
        }

        // Imprimir prova
        printf("+---------------------------------------------------------+\n");
        printf("| # | Questão | Valor informado | Valor correto | Correto |\n");
        printf("+---+---------+-----------------+---------------+---------+\n");
        for (int questionIndex = 1; questionIndex <= NUMBER_OF_QUESTIONS; questionIndex++) {
            struct structQuestion quest = questArray[questionIndex-1];

            printf(
                "| %d",
                quest.questionIndex+1
            );

            if (quest.a >= 10) {
                printf(" | %d", quest.a);
            } else {
                printf(" |  %d", quest.a);
            }

            printf(" + ");

            if (quest.b >= 10) {
                printf(
                    "%d |             ",
                    quest.b
                );
            } else {
                printf(
                    "%d  |             ",
                    quest.b
                );
            }
            

            if (quest.answer >= 100) {
                printf(
                    "%d | ",
                    quest.answer
                );
            } else if (quest.answer >= 10) {
                printf(
                    " %d | ",
                    quest.answer
                );
            } else {
                printf(
                    "  %d | ",
                    quest.answer
                );
            }

            printf("          ");

            if (quest.correctAnswer >= 100) {
                printf(
                    "%d | ",
                    quest.correctAnswer
                );
            } else if (quest.correctAnswer >= 10) {
                printf(
                    " %d | ",
                    quest.correctAnswer
                );
            } else {
                printf(
                    "  %d | ",
                    quest.correctAnswer
                );
            }

            if (quest.isCorrect) {
                printf("Sim");
                nota += 2;
            } else {
                printf("Não");
            }

            printf("     |\n");

        }
        printf("+---------------------------------------------------------+");

        // Imprimindo a nota
        printf("\n> Nota final: %.1f", nota);

        // Perguntar se quer continuar
        printf("\n\nExecutar novamente? [S/N]: ");
        char continuar;

        while (getchar() != '\n');

        scanf("%c", &continuar);

        if (continuar != 'S' && continuar != 's') {
            break;
        }

        printf("\n\n=====================================================\n\n\n");

    }

    printf("\n\n");
    return 0;
}
