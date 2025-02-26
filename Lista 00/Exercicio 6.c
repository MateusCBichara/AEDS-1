#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 6\n");

    float numero, razao;

    printf("Primeiro Numero: ");
    scanf("%f",&numero);
    printf("Razao: ");
    scanf("%f",&razao);

    numero = numero + (razao * 9);

    printf("Decimo termo da PA: %.2f",numero);


    return 0;
}