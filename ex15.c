/*
Exercício 15. Padrões com laços aninhados (1,0 pt)
Leia um inteiro N (1 ≤ N ≤ 20, validando a entrada) e desenhe as duas figuras
abaixo (exemplo para N = 4): à esquerda, uma pirâmide centralizada de asteriscos;
à direita, o triângulo de Floyd, com N linhas.
*/
#include <stdio.h>

int main() {
  int n, num = 1;

  do {
    printf("n: ");
    scanf("%d", &n);
  } while (n < 1 || n > 20);
  printf("\n");

  // PIRÂMIDE DE ASTERISCOS
  for (int i = 1; i <= n; i++) {
    for (int a = 1; a <= n - i; a++) {
      printf(" ");
    }
    for (int b = 1; b <= 2 * i - 1; b++) {
      printf("*");
    }
    for (int c = 1; c <= n - i; c++) {
      printf(" ");
    }
    printf("    ");

    // PIRÂMIDE DE FLOYD
    for (int d = 1; d <= i; d++) {
      printf("%d ", num);
      num++;
    }
    printf("\n");
  }
  return 0;
}