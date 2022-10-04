#include <stdio.h>

int main()
{

  int n, i, resto = 0;
  printf("Entre com um numero positivo: ");
  scanf("%d", &n);

  if (n == 0 || n == 1)
    resto = 1;

  for (i = 2; i <= n / 2; ++i)
  {

    if (n % i == 0)
    {
      resto = 1;
      break;
    }
  }

  if (resto == 0)
    printf("%d é um numero primo.", n);
  else
    printf("%d não é um numero primo.\n", n);

  return 0;
}