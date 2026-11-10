/*
Exercício 6. Ordenando três valores (1,0 pt)
Leia três números inteiros e exiba-os em ordem crescente e, em seguida, em ordem
decrescente, usando somente estruturas de seleção (sem laços e sem vetores). Informe
também qual é o valor mediano. O programa deve funcionar corretamente quando
houver valores repetidos.
*/
#include <stdio.h>

int main(void)
{
    int a, b, c, aux;

    printf("Escreva 3 numeros inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b)
    {
        aux = a;
        a = b;
        b = aux;
    }
    if (a > c)
    {
        aux = a;
        a = c;
        c = aux;
    }
    if (b > c)
    {
        aux = b;
        b = c;
        c = aux;
    }

    printf("Crescente: %d %d %d\n", a, b, c);
    printf("Decrescente: %d %d %d\n", c, b, a);
    printf("Mediana: %d\n", b);

    return 0;
}
