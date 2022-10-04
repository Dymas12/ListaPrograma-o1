
#include <stdio.h>

int main()
{
    int numero, i, soma = 0;
    printf("Entre com o numero: ");
    scanf("%d", &numero);

    for (i = 0; i < numero; i++)
    {
        soma = soma + i;

        if (soma == numero)
        {
            printf("%d é triangular.\n", numero);
            break;
        }
    }

    if (numero == i)
    {
        printf("%d não e triangular\n", numero);
    }
    return (0);
}