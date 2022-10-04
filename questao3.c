#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Entre com o  numero:");
    scanf("%d", &n);
    printf("Primeiro %d numeros impares são:\n", n);
    for (j = 1, i = 1; j <= n; i = i + 2, j++)
    {
        printf("%d \n", i);
    }
    return 0;
}