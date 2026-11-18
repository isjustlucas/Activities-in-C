/*
Exercício 19. Caixa eletrônico (1,0 pt)
Um caixa eletrônico possui notas de R$ 200, 100, 50, 20 e 10. Leia o valor do saque,
repetindo a leitura enquanto ele não for múltiplo de 10 ou estiver fora do intervalo
[10, 2000]. Exiba a quantidade mínima de notas de cada valor (mostre apenas as
notas utilizadas). Resolva usando laços — por exemplo, subtraindo o valor de cada
nota enquanto for possível — e não apenas divisões diretas.
Valor do saque: 380
1 nota(s) de R$ 200
1 nota(s) de R$ 100
1 nota(s) de R$ 50
1 nota(s) de R$ 20
1 nota(s) de R$ 10
*/
#include <stdio.h>

int main()
{
    int valor, qtd;
    do
    {
        printf("Valor do saque: ");
        scanf("%d", &valor);
    } while (valor % 10 != 0 || valor < 10 || valor > 2000);

    qtd = 0;
    while (valor >= 200)
    {
        valor -= 200;
        qtd++;
    }
    if (qtd > 0)
    {
        printf("1 nota(s) de R$ 200\n");
    }

    qtd = 0;
    while (valor >= 100)
    {
        valor -= 100;
        qtd++;
    }
    if (qtd > 0)
    {
        printf("1 nota(s) de R$ 100\n");
    }

    qtd = 0;
    while (valor >= 50)
    {
        valor -= 50;
        qtd++;
    }
    if (qtd > 0)
    {
        printf("1 nota(s) de R$ 50\n");
    }
    qtd = 0;
    while (valor >= 20)
    {
        valor -= 20;
        qtd++;
    }
    if (qtd > 0)
    {
        printf("1 nota(s) de R$ 20\n");
    }
    qtd = 0;
    while (valor >= 10)
    {
        valor -= 10;
        qtd++;
    }
    if (qtd > 0)
    {
        printf("1 nota(s) de R$ 10\n");
    }
    return 0;
}
