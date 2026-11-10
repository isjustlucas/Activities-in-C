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