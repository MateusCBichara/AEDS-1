#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 1\n");

    int numero, unidade, dezena, centena, numero_invertido;

    printf("Digitar um numero de 3 digitos: ");
    scanf("%d",&numero);

    unidade = numero % 10;
    dezena = (numero / 10) % 10;
    centena = (numero / 100) % 10;
    numero_invertido = (unidade * 100) + (dezena * 10) + centena;

    printf("Numero invertido: %d\n",numero_invertido);

    return 0;
}