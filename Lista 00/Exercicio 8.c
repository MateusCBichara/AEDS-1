#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 8\n");

    float numero_1, numero_2, troca;

    printf("1 Numero real: ");
    scanf("%f",&numero_1);
    printf("2 Numero real: ");
    scanf("%f",&numero_2);

    troca = numero_1;
    numero_1 =  numero_2;
    numero_2 = troca;

    printf("Numero real 1: %.2f\n",numero_1);
    printf("Numero real 2: %.2f\n",numero_2);

    return 0;
}