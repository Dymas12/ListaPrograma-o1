
#include <stdio.h>
int main()
{
    int num[10];
    int a, j, i, n;

    printf("Entre com o total de elementos ");
    scanf("%d", &n);

    printf("Digite 1 por 1 \n");
    for (i = 0; i < n; ++i)
    {
        scanf("%d", &num[i]);
    }
    for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (num[i] > num[j])
            {
                a = num[i];
                num[i] = num[j];
                num[j] = a;
            }
        }
    }
    printf("Numeros em ordem crescente: \n");
    for (i = 0; i < n; ++i)
    {
        printf("%d\n", num[i]);
    }
    return 0;
}