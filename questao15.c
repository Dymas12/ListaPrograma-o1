#include <stdio.h>
int main()
{
    int numero, i, j;

    printf("Entre com um numero decimal:\n");
    scanf("%d", &numero);

    printf("%d em binario é:\n", numero);

    for (i = 31; i >= 0; i--)
    {
        j = numero >> i;

        if (j & 1)
            printf("1");
        else
            printf("0");
    }

    printf("\n");

    return 0;
}