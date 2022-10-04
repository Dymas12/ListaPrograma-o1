#include <stdio.h>
int main()
{
    int i, numero, soma = 0;
    printf("digite qualquer número: ");
    scanf("%d", &numero);
    for (i = 2; i <= numero; i += 2)
    {
        soma += i;
    }
    printf("Soma de todos os números pares de 1 a %d é: %d\n", numero, soma);
    return 0;
}