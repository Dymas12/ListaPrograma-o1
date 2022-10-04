#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>

int main(void)
{
    /* Mes de março tem 31 dias. */
    int numVendas[31];
    int dia;
    int maior = 0;
    int i;

    for (i = 1; i <= 31; i++)
    {
        printf("Vendas diarias: Dia %d:", i);
        scanf("%d", &numVendas[i]);
    }
    for (i = 1; i <= 31; i++)
    {
        if (numVendas[i] > maior)
        {
            maior = numVendas[i];
            dia = i;
        }
    }
    printf("Dia com maior quantidade de vendas: %d\n", dia);
    printf("Quantidade vendida:  %d \n", maior);
}