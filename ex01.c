/*
Exercício 1. Classificador de triângulos (1,0 pt)
Leia três valores reais correspondentes aos lados de um triângulo. Verifique se eles
podem formar um triângulo (cada lado deve ser positivo e menor que a soma dos
outros dois). Em caso afirmativo, classifique-o quanto aos lados (equilátero, isósceles
ou escaleno) e informe também se ele é retângulo (pelo teorema de Pitágoras). Caso
contrário, exiba Não forma triângulo .
*/
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