#include <stdio.h>

int main() {
  int a, b, aux, primo, cont = 0, i, n;

  printf("Digite dois inteiros A e B: ");
  scanf("%d %d", &a, &b);

  if(a > b) {
    aux = a;
    a = b;
    b = aux;
  }
  printf("Primos no intervalo [%d, %d]:\n", a, b);

  for(i = a; i <= b; i++) {
    if(i < 2) continue;

    primo = 1;

    for(n = 2; n * n <= i; n++) {
      if(i % n == 0) {
        primo = 0;
        break;
      }
    }

    if(primo == 1) {
      printf("%d\n", i);
      cont++;
    }
  }
  printf("Total de primos encontrados: %d\n", cont);


  return 0;
}