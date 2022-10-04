#include <stdio.h>

int main()
{
    int numero, binario = 0, remover = 0, colocar = 1;

    printf("Entre com um numero decimal:\n");
    scanf("%d", &numero);

    printf("\nEquivalente binário de %d é :", numero);
    while (numero)
    {
        remover = numero % 2;
        numero = numero / 2;
        binario = binario + (remover * colocar);
        colocar = colocar * 10;
    }
    printf("%d\n", binario);

    return 0;
}