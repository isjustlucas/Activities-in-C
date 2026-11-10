/*
Exercício 11. Números primos (1,0 pt)
Leia dois inteiros A e B (se A > B, troque-os). Liste todos os números primos do
intervalo [A, B] e, ao final, informe quantos foram encontrados. Use laços aninhados:
o laço externo percorre o intervalo e o interno testa os divisores. Otimize o teste
interrompendo-o ( break ) assim que um divisor for encontrado e testando divisores
apenas até √n (condição d * d <= n ). Lembre-se: 0 e 1 não são primos.
*/
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