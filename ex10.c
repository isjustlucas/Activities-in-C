#include <stdio.h>

int main(void)
{
    int digitos = 0;
    int soma = 0;
    int invertido = 0;
    int numero;

    printf("Digite um numero inteiro nao negativo: ");
    scanf("%d", numero);
    int original = numero;
    do
    {
        digitos = numero % 10;
        printf("%d", digitos);
    } while (numero > 0);
    


    return 0;
}
