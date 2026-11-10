#include <stdio.h>

int main(void)
{
    char response;
    int valido, valido2;
    float n1, n2, media;

    do
    {
        do
        {
            printf("Escreva a 1° e 2° Nota: ");
            scanf("%f %f", &n1, &n2);

            valido = 1;
            if ((n1 < 0 || n1 > 10) || (n2 < 0 || n2 > 10))
            {
                printf("Nota invalida!\n");
                valido = 0;
            }
        } while (valido != 1);

        media = (n1 + n2) / 2;
        if (media >= 7.0)
        {
            printf("Aprovado!\n");
        }
        else if (media >= 4.0 && media < 7.0)
        {
            printf("Prova final!\n");
        }
        else
        {
            printf("Reprovado!\n");
        }
        do
        {
            valido2 = 1;
            printf("Calcular outro aluno? (s/n)\n");
            scanf("%c", &response);

            if (response == 'S')
            {
                response = 's';
            }
            else if (response == 'N')
            {
                response = 'n';
            }
            else
            {
                printf("Resposta inválida!\n");
                valido2 = 0;
            }
        } while (valido2 == 0);

    } while (response == 's');

    return 0;
}