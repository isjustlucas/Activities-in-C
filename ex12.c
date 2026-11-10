#include <stdio.h>

int main()
{
  int a, b, resto, mdc, mmc, cont = 0;

  do
  {
    printf("Valores: ");
    scanf("%d %d", &a, &b);
    if(a <= 0 || b <= 0) {
      printf("Digite dois valores positivos!\n");
    }
  } while (a <= 0 || b <= 0);
  int o_a = a;
  int o_b = b;

  while(b != 0) {
    resto = a % b;
    a = b;
    b = resto;
    cont++;
  }

  mdc = a;
  mmc = (o_a*o_b) / mdc;

  printf("MDC = %d (%d iteracoes) | MMC = %d", mdc, cont, mmc);

  return 0;
}
