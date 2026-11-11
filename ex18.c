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