/*
Exercício 10. Manipulando dígitos (1,0 pt)
Leia um inteiro não negativo e, usando apenas os operadores / e % dentro de um
laço, informe: a quantidade de dígitos, a soma dos dígitos, o número invertido e se
ele é um palíndromo. Atenção ao número 0 , que possui 1 dígito.
*/
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
