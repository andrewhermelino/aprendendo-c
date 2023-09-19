# printf()
A função `printf()` em C é usado para imprimir valores e mensagens no terminal. Note que ele não quebra linha automáticamente, sendo necessário adicionar um "\n" no fim de cada fase.
```c
printf("Olá mundo!\n");
printf("Essa é uma mensagem em C :D\n");
```

## Imprimindo variáveis
Essa função recebe como primeiro parâmetro uma string com a mensagem que será exibida, e os restantes dos parâmetros serão as variáveis usadas para alimentar a mensagem dinâmicamente.

### Imprimindo uma string
> No caso do C não existe o tipo _string_ em sí, então é usado um array de caracteres.

Para imprimir uma string será usado o especificador de formato `%s`
```c
char heroi[] = "Homem de ferro";
printf("Meu heroi favorito é o %s", palavra);
// Imprime: Meu heroi favorito é o Homem de ferro
```

### Imprimindo um número inteiro
Para imprimir um número inteiro será usado o especificador de formato `%d`
```c
int resposta = 42;
printf("O significado da vida, do universo e tudo mais é %d", resposta);
// Imprime: O significado da vida, do universo e tudo mais é 42
```

### Imprimindo um número real
Para imprimir um número real será usado o especificador de formato `%f`
```c
float aceleracaoGravidade = 9.81;
printf("A aceleração da gravidade na terra é de %f m/s^2", aceleracaoGravidade);
// Imprime: A aceleração da gravidade na terra é de 9.81 m/s^2
```
Ainda é possível arredondar o número:
```c
float aceleracaoGravidade = 9.81;
printf("A aceleração da gravidade na terra é de %.1f m/s^2", aceleracaoGravidade);
// Imprime: A aceleração da gravidade na terra é de 9.8 m/s^2
```

## Outros especificadores de formato em C
Especificador | Descrição
--------------|-------------------
%c            | um único caractere
%s            | uma string
%hi           | shoort (com sinal)
%hu           | short (sem sinal)
%Lf           | long double
%n            | sem impressão
%d            | um inteiro decimal (assume a base 10)
%i            | um decimal inteiro (detecta a base automaticamente)
%o            | um inteiro octal (base 8)
%x            | um inteiro hexadecimal (base 16)
%p            | um endereço (ou pointer)
%f            | um número de ponto flutuante para floats
%u            | int decimal sem sinal
%e            | um número de ponto flutuante em notação científica
%E            | um número de ponto flutuante em notação científica
%%            | um símbolo %

---

# scanf()
A função `scanf()` em C é usado para ler valores do teclado. Essa função recebe como primeiro parâmetro um especificador de formato, e o segundo parâmetro é o **endereço de memória** da variável que será alimentada.
Para passar o endereço de memória de uma variável basta passar essa variável junto com o operador `&`.
```c
int idade;
printf("Digite sua idade: ");
scanf("%d", &idade);
printf("Sua idade é %d!", idade);
```
Note como o `%d` serve para definir o tipo da entrada esperado.

Dependendo do tipo de valor que você espera, deve usar o especificador de formato adequado
```c
float peso;
printf("Digite seu peso: ");
scanf("%f", &peso);
printf("Seu peso é %d!", peso);
```
