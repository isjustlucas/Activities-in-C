#include <stdio.h>

int main(void)
{
  int mes, ano, dias = 0;
  int valido = 1;

  printf("Mes e ano: ");
  scanf("%d %d", &mes, &ano);

  switch (mes)
  {
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
    dias = 31;
    break;
  case 4:
  case 6:
  case 9:
  case 11:
    dias = 30;
    break;
  case 2:
    if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0)
    {
      dias = 29;
    }
    else
    {
      dias = 28;
    }
    break;
  default:
    printf("Mes invalido!\n");
    valido = 0;
    break;
  }

  if (valido)
  {
    printf("%d dias\n", dias);
  }

  return 0;
}