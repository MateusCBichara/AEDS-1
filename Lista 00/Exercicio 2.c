#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exercicio 2\n");

    float salario, preco, preco_kw, consumo, desconto, valor_descontado;

    printf("Salario Minimo: \n");
    scanf("%f",&salario);
    printf("Consumo: \n");
    scanf("%f",&consumo);

    preco_kw = salario / 700;
    preco = consumo * preco_kw;
    desconto = preco / 10;
    valor_descontado = preco - desconto;

    printf("Preco do kw: %.2f\n",preco_kw);
    printf("Preco: %.2f\n",preco);
    printf("Valor descontado: %.2f\n",valor_descontado);

    return 0;
}