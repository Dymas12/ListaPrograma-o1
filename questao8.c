#include <stdio.h>
int main()
{
    int i, fatorial = 1, num;
    printf("Entre com o numero: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        fatorial = fatorial * i;
    }
    printf("fatorial de  %d é: %d\n", num, fatorial);
    return 0;
}