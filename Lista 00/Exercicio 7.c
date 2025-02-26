#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("Exercicio 7\n");

    float numero, razao;

    printf("Primeiro Numero: ");
    scanf("%f",&numero);
    printf("Razao: ");
    scanf("%f",&razao);

    numero = numero * pow(razao,4);

    printf("Quinto termo da PG: %.2f",numero);

    return 0;
}