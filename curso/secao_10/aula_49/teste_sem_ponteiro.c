#include <stdio.h>

void incrementa(int contador) {
    printf("# Durante a função incrementa()\n");
    printf("contador (antes) = %d\n", contador);
    printf("contador (depois) = %d\n", ++contador);
    printf("endereço = %p\n", &contador);
}

int main() {
    int contador = 10;

    printf("# Antes da função incrementa()\n");
    printf("contador = %d\n", contador);
    printf("endereço = %p\n", &contador);

    printf("\n---\n\n");

    incrementa(contador);

    printf("\n---\n\n");

    printf("# Depois da função incrementa()\n");
    printf("contador = %d\n", contador);
    printf("endereço = %p\n", &contador);

    printf("\n\n");
    return 0;
}

// Console:
/*
# Antes da função incrementa()
contador = 10

---

# Durante a função incrementa()
contador (antes) = 10
contador (depois) = 11

---

# Depois da função incrementa()
contador = 10
*/