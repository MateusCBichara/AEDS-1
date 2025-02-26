#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("Exercicio 3\n");
    
    float base, altura, area, perimetro, diagonal;

    printf("Base e Altura: ");
    scanf("%f%f",&base,&altura);

    area = base * altura;
    perimetro = (base * 2) + (altura * 2);
    diagonal = sqrt(pow(base,2) + pow(altura,2));

    printf("Area: %.2f\n",area);
    printf("Perimetro: %.2f\n",perimetro);
    printf("Dagonal: %.2f\n",diagonal);

    return 0;
}