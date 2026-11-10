/*
Exercício 14. Conjectura de Collatz (1,0 pt)
Dado um inteiro positivo n: se n for par, divida-o por 2; se for ímpar, faça 3n + 1.
Repita até chegar a 1.
a) Leia n, exiba a sequência completa e a quantidade de passos.
b) Usando laços aninhados, descubra qual número entre 1 e 100 gera a sequência
com mais passos e quantos passos ela tem.
*/
#include <stdio.h>

int main() {

  char r;
  printf("Qual letra você quer? a) ou b) ");
  scanf(" %c", &r);

  if (r == 'a') {
    // LETRA A)
    int n, passos = 0;
    printf("n: ");
    scanf("%d", &n);
    printf("%d ", n);
    while (n != 1) {
      if (n % 2 == 0) {
        n /= 2;
        printf("%d ", n);
      } else {
        n = 3 * n + 1;
        printf("%d ", n);
      }
      passos++;
    }
    printf("\nPassos: %d", passos);
  } else if (r == 'b') {
    // LETRA B)
    int maiorPassos = 0, melhorNumero = 1;

    for (int i = 1; i <= 100; i++) {
      int n = i;
      int passos = 0;

      while (n != 1) {
        if (n % 2 == 0) {
          n /= 2;
        } else {
          n = 3 * n + 1;
        }
        passos++;
      }
      if (passos > maiorPassos) {
        maiorPassos = passos;
        melhorNumero = i;
      }
    }
    printf("Número: %d, Passos: %d\n", melhorNumero, maiorPassos);
  } else {
    printf("Letra errada!");
  }
  return 0;
}