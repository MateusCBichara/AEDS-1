#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 10\n");

    int hora, minuto, tempo;

    printf("Horario: ");
    scanf("%d%d",&hora,&minuto);

    tempo = (hora * 60) + minuto;

    printf("Tempo passado em minutos: %d",tempo);

    return 0;
}