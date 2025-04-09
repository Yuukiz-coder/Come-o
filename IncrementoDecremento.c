#include <stdio.h>

int main() {
    /*
    Incremento (++)
    Pré-Incremento ++a
    Pós-Incremento a++
    Decremento (--)
    Pré-Decremento --a
    Pós-Decremento a--
    */

    int N1 = 1, resultado;

    //Incremento

    printf("Antes do pos-incremento: %d\n", N1);

    resultado = N1++;

    printf("Após o pos-incremento: N1 = %d Resultado: %d\n", N1, resultado);

    printf("Antes do pre-incremento: %d\n", N1);

    resultado = ++N1;

    printf("Apos o pre-incremento: N1: %d Resultado: %d\n", N1, resultado);

    //Decremento
    
    resultado + N1--;

    printf("Apos o pos-decremento: N1: %d Resultado: %d\n", N1, resultado);

    resultado = --N1;

    printf("Apos o pre-decremento: N1: %d Resultado: %d\n", N1, resultado);


    return 0;
}