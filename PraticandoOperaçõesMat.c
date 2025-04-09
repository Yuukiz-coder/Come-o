#include <stdio.h>

int main() {

    int a = 10, b = 5;

    //Operadores aritméticos
    int soma = a + b;
    int subtracao = a - b;
    int multiplicacao = a * b;
    int divisao = a / b;

    //Operadores de Atribuição
    a -= 5; // O valor de a que antes era 10 passa a ser 5
    b += 5; // O valor de b que antes era 5 passa a ser 10

    //Operadores de Incremento e Decremento
    a++; // O valor de a que antes era 5 passa a ser 6
    b--; // O valor de b que antes era 10 passa a ser 9

    printf("A soma e: %d\n", soma);
    printf("A subtracao e: %d\n", subtracao);
    printf("A multiplicacao e: %d\n", multiplicacao);
    printf("A divisao e: %d\n", divisao);

    printf("O valor de a apos a atribuicao de -5 e a incrementacao de 1 e: %d\n", a);
    printf("O valor de b apos a atribuicao de +5 e a decrementacao de 1 e: %d\n", b);

    return 0;
}