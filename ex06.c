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
