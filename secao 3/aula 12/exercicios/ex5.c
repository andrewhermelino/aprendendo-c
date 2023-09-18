#include <stdio.h>
// Leia um número real e imprima a quinta parte deste número

int main() {
    float numero;
    printf("Informe um número real: ");
    scanf("%f", &numero);
    float quintaParte = numero / 5;
    printf("A quinta parte de %f é %f", numero, quintaParte);
    printf("\n\n");
    return 0;
}