#include <stdio.h>

int main(){

    int N1, N2;
    int soma, subtracao, multiplicacao, divisao;

    printf("Ola! Eu sou uma calculadora!\n");

    printf("Para começar, insira um numero inteiro:\n");
    scanf("%d", &N1);

    printf("Agora insira mais um:\n");
    scanf("%d", &N2);
  
    //Operação de soma
    soma = N1 + N2;
    
    //Operação de subtração
    subtracao = N1 - N2;

    //Operação de mutiplicação
    multiplicacao = N1 * N2;

    //Operação de divisão
    divisao = N1 / N2;

    printf("O resultado da soma e: %d\n", soma);
    printf("O resultado da subtracao e: %d\n", subtracao);
    printf("O resultado da multiplicacao e: %d\n", multiplicacao);
    printf("O resultado da divisao e: %d\n", divisao);

    return 0;
}