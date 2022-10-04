#include <stdio.h>

int main()
{
    int num,
        numQuadrado;

    printf("\nEntre com a sequencia de numeros interios não nulos:\n");
    scanf("%d", &num);

    while (num >= 0)
    {
        numQuadrado = num * num;
        printf("Numero %d : Seu Quadrado: %d\n", num, numQuadrado);
        scanf("%d", &num);
    }
    return 0;
}