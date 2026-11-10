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