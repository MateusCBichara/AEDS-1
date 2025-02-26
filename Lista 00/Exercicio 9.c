#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 9\n");

    float resultado, numerador, denominador;

    printf("Escolher o Numerador e Denominador respectivamente: ");
    scanf("%f%f",&numerador,&denominador);

    resultado = numerador / denominador;

    printf("Resultado: %.3f\n",resultado);

    return 0;
}