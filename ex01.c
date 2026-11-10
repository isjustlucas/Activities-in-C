#include <stdio.h>
#include <math.h>

int main(void)
{
  float L1, L2, L3;

  printf("----- CLASSIFICADOR DE TRIANGULOS -----\n");

  printf("Lados: ");
  scanf("%f %f %f", &L1, &L2, &L3);

  if (L1 > 0 && L2 > 0 && L3 > 0 && L1 + L2 > L3 && L1 + L3 > L2 && L2 + L3 > L1)
  {
    if (L1 == L2 && L2 == L3)
    {
      printf("Triângulo equilatero");
    }
    else if (L1 == L2 || L1 == L3 || L2 == L3)
    {
      printf("Triangulo isoceles");
    }
    else
      printf("Triangulo escaleno");

    if (L1 * L1 + L2 * L2 == L3 * L3 ||
        L1 * L1 + L3 * L3 == L2 * L2 ||
        L2 * L2 + L3 * L3 == L1 * L1)
    {
      printf(" e retangulo.");
    }

    printf("\n");
  }
  else
  {
    printf("Não forma triangulo.\n");
  }

  return 0;
}