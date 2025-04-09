#include <stdio.h>

int main() {

    char nome[10];
    int idade;
    float altura;
    float salario;
    char curso[2];
    char opcao; 

    //Coleta de dados.

    printf("Seja muito bem vindo!\n");
    printf("Iremos apenas te fazer algumas perguntas. Ok?\n");

    printf("Qual e o seu nome?\n");
    scanf(" %s", nome);

    printf("Qual a sua idade?\n ");
    scanf(" %d", &idade);

    printf("Qual e a sua altura?\n ");
    scanf(" %f", &altura);

    printf("Quanto voce ganha?\n ");
    scanf(" %f", &salario);

    printf("Qual sua area de atuacao?\n ");
    scanf(" %s", curso);


    //Monitor exibe os dados ao usuário.

    printf("Seu nome e %s\n", nome);
    printf("Voce tem %d anos\n", idade);
    printf("Sua altura e %.2f metros\n", altura);
    printf("Sua renda atual e de %.2f reais\n", salario);
    printf("Voce trabalha na area de %s\n", curso);

    //Confirmação dos dados.

    printf("Seus dados estao corretos? Responda com Y ou N.\n");
    scanf(" %c", &opcao);

    //Mensagem final ao usuário.

    printf("Obrigado pelo seu tempo e pelos seus dados\n");
    printf("Seja muito bem vindo ao Mundo da Programacao em C\n");

    return 0;

}
