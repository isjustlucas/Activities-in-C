/*
Exercício 18. Jogo de adivinhação (1,0 pt)
O computador sorteia um número secreto entre 1 e 100 (use srand(time(NULL)) e
rand() % 100 + 1 , incluindo <stdlib.h> e <time.h> ). O jogador tem no máximo 7
tentativas; a cada palpite o programa informa Maior , Menor ou Acertou! . Palpites
fora de [1, 100] não contam como tentativa. Ao final, revele o número (se o jogador
perdeu) e pergunte se deseja jogar novamente. Exiba, ao sair, quantas partidas foram
jogadas e quantas foram vencidas.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  srand(time(NULL));

  int rdm, adv;
  int partidas = 0, vitorias = 0;
  char novamente;

  do
  {
    rdm = rand() % 100 + 1;
    int acertou = 0;
    int tentativas = 0;

    printf("Tente adivinhar um numero de 1-100!\n");

    while (tentativas < 7)
    {
      printf("\n(TENTATIVA %d)\n", tentativas + 1);
      scanf("%d", &adv);

      if (adv < 1 || adv > 100)
      {
        printf("Palpite invalido! Digite entre 1 e 100.\n");
        continue;
      }

      tentativas++;

      if (adv == rdm)
      {
        printf("Acertou!\n");
        acertou = 1;
        vitorias++;
        break;
      }
      else if (adv > rdm)
      {
        printf("Menor!\n");
      }
      else
      {
        printf("Maior!\n");
      }
    }

    partidas++;

    if (!acertou)
    {
      printf("\nVoce perdeu! O numero era: %d\n", rdm);
    }

    printf("\nDeseja jogar novamente? (s/n): ");
    scanf(" %c", &novamente);

  } while (novamente == 's' || novamente == 'S');

  printf("\n===== RESULTADO FINAL =====\n");
  printf("Partidas jogadas: %d\n", partidas);
  printf("Partidas vencidas: %d\n", vitorias);

  return 0;
}
