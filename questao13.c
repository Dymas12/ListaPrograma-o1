#include <stdio.h>
int main()
{
    int i, numero, soma = 0;

    printf("Entre com um numero:");
    scanf("%d", &numero);

    for (i = 1; i < numero; i++)
    {
        if (numero % i == 0)
            soma = soma + i;
    }

    if (soma == numero)
        printf("\n %d é um numero perfeito\n", numero);
    else
        printf("\n%d não é um numero perfeito\n", numero);

    return 0;
}