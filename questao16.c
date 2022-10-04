#include <stdio.h>
int main()
{
    int x, y, z;

    printf("Coloque os lados do triangulo\n");

    scanf("%d %d %d", &x, &y, &z);

    if ((x * x) + (y * y) == (z * z) || (x * x) + (z * z) == (y * y) || (y * y) + (z * z) == (x * x))
    {
        printf("Insira os três lados de um triangulo\n");
    }
    else
    {
        printf("Não é um triângulo retângulo!\n");
    }
    return 0;
}