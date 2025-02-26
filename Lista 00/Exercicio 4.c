#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("Exercicio 4\n");

    float raio, perimetro, area;

    printf("Raio: ");
    scanf("%f",&raio);

    perimetro = 2 * M_PI * raio;
    area = M_PI * pow(raio,2);

    printf("Perimetro: %.2f\n",perimetro);
    printf("Area: %.2f\n",area);

    return 0;
}