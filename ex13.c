#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159265358979

int main() {
  char r;
  printf("Qual letra você quer? a) ou b) ");
  scanf("%c", &r);
  if (r == 'a') {
    // LETRA A)
    double soma = 0;
    int n, sinal = 1;

    printf("N: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
      soma += sinal / (2.0 * i + 1);
      sinal = -sinal;
    }

    printf("4S = %f", 4 * soma);

    return 0;
  } else if (r == 'b') {
    // LETRA B)
    double soma = 0;
    int sinal = 1, termos = 0;

    while (fabs(4 * soma - PI) >= 0.001) {
      soma += sinal / (2.0 * termos + 1);
      sinal = -sinal;
      termos++;
    }

    printf("Termos necessários: %d", termos);
    return 0;
  } else {
    printf("Letra errada!");
    return 0;
  }
  // Por que while é melhor do que for na letra b)? Porque podemos usar o while com valores que não conhecemos, tipo o "termos", este valor vamos descobrir ao final da execução do programa, e não antes.
}