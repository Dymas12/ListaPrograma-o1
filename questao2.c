
#include <stdio.h>

int main()
{
    int num,
        somaNum;

    printf("\n Entre com o numero: ");
    scanf("%d", &num);

    somaNum = (num * (num + 1)) / 2;

    printf("A soma dos %d primeiros inteiros positivos é: %d\n", num, somaNum);

    return 0;
}