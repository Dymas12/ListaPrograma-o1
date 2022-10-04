#include <stdio.h>
int main()
{
    int contador, numero;
    int x, y;
    printf("Digite os valores de x e n:\n");
    scanf("%d%d", &x, &numero);
    y = 1;
    contador = 1;
    while (contador <= numero)
    {
        y = y * x;
        contador++;
    }
    printf("x=%d; n=%d; \nx para a potencia n=%d\n", x, numero, y);
    return 0;
}