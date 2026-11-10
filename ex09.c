/*
Exercício 9. Leitura com sentinela (1,0 pt)
Leia as idades de um grupo de pessoas; a leitura termina quando for digitado -1
(o −1 não faz parte dos dados). Idades fora de [0, 120] devem ser ignoradas com
aviso. Ao final, exiba: quantidade de idades válidas, média, maior e menor idade e o
percentual de pessoas com 18 anos ou mais. Se nenhuma idade válida for informada,
exiba Nenhum dado informado (evite divisão por zero!).
*/
#include <stdio.h>

int main(void)
{
    int idade, total, max, min;
    float media, maiores;
    media = 0.0;
    total = 0;
    max = 0;
    min = 120;
    maiores = 0.0;

    do
    {
        printf("Idade: ");
        scanf("%d", &idade);
        if (idade == -1)
        {
            break;
        }
        if (idade < 0 || idade > 120)
        {
            printf("Idade ignorada!\n");
        }
        else
        {
            total++;
            media += idade;
            if (idade < min)
            {
                min = idade;
            }
            if (idade > max)
            {
                max = idade;
            }
            if (idade >= 18)
            {
                maiores++;
            }
        }
    } while (idade != -1);

    if (total == 0)
    {
        printf("Nenhum dado informado!\n");
    }
    else
    {
        media = media / total;
        maiores = maiores / total * 100;
        printf("Total: %d | Media: %.2f | Maior: %d | Menor: %d | Maiores de idade: %.1f%%", total, media, max, min, maiores);
    }

    return 0;
}