#include <stdio.h>
#include <stdbool.h>
/*
Escrever um programa que leia o código do produto escolhido do
cardápio de uma lanchonete e a quantidade. O programa deve
calcular o valor a ser pago por aquele lanche.
Considere que a cada execução somente será calculado um
pedido. O cardápio da lanchonete segue o padrão abaixo:

+---------------------------------+
| Especificação  | Código | Preço |
+----------------+--------+-------+
| Cachoro Quente |    100 |  1.20 |
| Bauro Simples  |    101 |  1.30 |
| Bauru com Ovo  |    102 |  1.50 |
| Hamburguer     |    103 |  1.20 |
| Cheeseburguer  |    104 |  1.70 |
| Suco           |    105 |  2.20 |
| Refrigerante   |    106 |  1.00 |
+---------------------------------+
*/

void imprimirTitulo();
void imprimirCardapio();
void lerCodigo(int*);
bool isCodigoValido(int);
void lerQuantidade(int*);
bool isQuantidadeValida(int);
int obterPrecoItemPorCodigo(int);

int main() {
    
    imprimirTitulo();
    printf("\nConfira nosso cardápio:\n");
    imprimirCardapio();
    printf("\nFaça o seu pedido!");

    char finalizarPedido;
    int valorTotalPedido = 0;

    do {
        printf("\n-----------------------------------\n\n");
        int codigo, quantidade;

        lerCodigo(&codigo);
        printf("\n");
        lerQuantidade(&quantidade);

        int precoItem = obterPrecoItemPorCodigo(codigo);

        valorTotalPedido += precoItem * quantidade;

        printf("\nDeseja finalizar seu pedido? [S/N] ");
        scanf("%c", &finalizarPedido);
        while(getchar() != '\n');

    } while(finalizarPedido != 'S' && finalizarPedido != 's');

    float valorTotalPedidoDecimal = valorTotalPedido / 100.00;
    printf("\n\nValor total do seu pedido: R$ %.2f", valorTotalPedidoDecimal);

    printf("\n\n");
    return 0;
}

void imprimirTitulo() {
    printf(">=================================<\n");
    printf("-       FACEBURG lanchonete       -\n");
    printf(">=================================<\n");
}

void imprimirCardapio() {
    printf("+---------------------------------+\n");
    printf("| Item           | Código | Preço |\n");
    printf("+----------------+--------+-------+\n");
    printf("| Cachoro Quente |    100 |  1.20 |\n");
    printf("| Bauro Simples  |    101 |  1.30 |\n");
    printf("| Bauru com Ovo  |    102 |  1.50 |\n");
    printf("| Hamburguer     |    103 |  1.20 |\n");
    printf("| Cheeseburguer  |    104 |  1.70 |\n");
    printf("| Suco           |    105 |  2.20 |\n");
    printf("| Refrigerante   |    106 |  1.00 |\n");
    printf("+---------------------------------+\n");
}

void lerCodigo(int *codigo) {
    printf("Escolha um item do cardápio (digite o código):");
    int lerCodigo;
    while (true) {
        printf("\n> ");
        scanf("%d", &lerCodigo);
        while(getchar() != '\n');

        if (isCodigoValido(lerCodigo)) {
            *codigo = lerCodigo;
            return;
        }

        printf("Código inválido! Por favor, informe um item do cardápio");
    }
}

bool isCodigoValido(int codigo) {
    return codigo >= 100 && codigo <= 106;
}

void lerQuantidade(int *quantidade){
    printf("Informe quantas unidades desse item você deseja:");
    int lerQuantidade;
    while (true) {
        printf("\n> ");
        scanf("%d", &lerQuantidade);
        while(getchar() != '\n');

        if (isQuantidadeValida(lerQuantidade)) {
            *quantidade = lerQuantidade;
            return;
        }

        printf("Quantidade inválida! Por favor, informe quanto desse item você deseja");
    }
}

bool isQuantidadeValida(int quantidade) {
    return quantidade <= 9999 && quantidade > 0;
}

int obterPrecoItemPorCodigo(int codigo) {
    switch (codigo) {
        case 100:
            return 120;
        case 101:
            return 130;
        case 102:
            return 150;
        case 103:
            return 120;
        case 104:
            return 170;
        case 105:
            return 220;
        case 106:
            return 100;
        default:
            return 0;
    }
}
