#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("Exercicico 5\n");

    float cateto_1, cateto_2, hipotenusa;

    printf("Cateto 1 e 2: ");
    scanf("%f%f",&cateto_1,&cateto_2);

    hipotenusa = sqrt(pow(cateto_1,2) + pow(cateto_2,2));
    
    printf("Hipotenusa: %.2f\n",hipotenusa);

    return 0;
}