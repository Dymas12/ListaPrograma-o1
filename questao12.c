#include <stdio.h>
int main()
{
    int numero1, numero2, i, MDC;
    printf("entre com 2 numeros: \n");
    scanf("%d %d", &numero1, &numero2);
    for (i = 1; i <= numero1 && i <= numero2; ++i)
    {
        if (numero1 % i == 0 && numero2 % i == 0)
            MDC = i;
    }
    printf("MDC de dois números é:%d\n", MDC);
    return 0;
}