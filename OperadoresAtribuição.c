#include <stdio.h>

int main() {

    /*
    Atribuição Simples (=)
    Atribuição com Soma (=+)
    Atribuição com Subtração (-+)
    Atribuição com Multiplicaçãp (*=)
    Atribuição com Divisão (/=)
    */

    int N1 = 2, N2 = 5, resultado;

    resultado = 10;

    //resultado = resultado + 20
    resultado += 20;
    printf("Resultado e: %d\n", resultado);

    //resultado = resultado - N1
    resultado -= N1;
    printf("Resultado e: %d\n", resultado);

    //resultado = resultado * N2
    resultado *= N2;
    printf("Resultado e: %d\n", resultado);

    //resultado = resultado / 2
    resultado /= 2;
    printf("Resultado e: %d\n", resultado);

    return 0;

}