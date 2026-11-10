/*
Exercício 8. Validação com do-while (1,0 pt)
Leia duas notas de um aluno, repetindo a leitura de cada nota enquanto ela estiver
fora do intervalo [0, 10] (exiba Nota inválida! a cada tentativa errada). Calcule a
média e informe a situação: Aprovado (média ≥ 7,0), Prova final (4,0 ≤ média < 7,0)
ou Reprovado (média < 4,0). Ao final, pergunte: Calcular outro aluno? (s/n) e
repita todo o processo enquanto a resposta for s ou S .
*/

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