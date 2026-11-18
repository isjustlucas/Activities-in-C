/*
Exercício 20. Menu de conversões (1,0 pt)
Implemente um menu que se repete ( do-while com switch ) até o usuário escolher
0 :
===== CONVERSOES =====
1 - Decimal para binario
2 - Binario para decimal
3 - Tabela Celsius -> Fahrenheit
0 - Sair
Opcao:
1. Leia um inteiro não negativo e exiba sua representação binária (sem vetores:
monte o resultado como um número inteiro formado por dígitos 0 e 1, por
exemplo, 13 → 1101).
2. Leia um número formado apenas por dígitos 0 e 1 (ex.: 1101 ) e exiba
seu valor decimal. Se houver algum dígito diferente de 0 ou 1, informe
Número binário inválido .
3. Leia uma temperatura inicial, uma final e um passo (positivo) e exiba a tabela
de conversão F =
95C + 32.

Opção inexistente deve exibir Opção inválida! e retornar ao menu.
*/
#include <stdio.h>

int main()
{
    int opcao;
    do
    {
        printf("\n===== CONVERSOES =====\n");
        printf("1 - Decimal para binario\n");
        printf("2 - Binario para decimal\n");
        printf("3 - Tabela Celsius -> Fahrenheit\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
        {
            unsigned int n;
            long long binario = 0, peso = 1;

            printf("Digite um inteiro nao negativo: ");
            scanf("%u", &n);

            if (n == 0)
            {
                binario = 0;
            }

            while (n > 0)
            {
                binario += (n % 2) * peso;
                peso *= 10;
                n /= 2;
            }

            printf("Binario: %lld\n", binario);
            break;
        }

        case 2:
        {
            long long bin, aux;
            unsigned int decimal = 0, peso = 1;
            int valido = 1;

            printf("Digite um numero binario: ");
            scanf("%lld", &bin);

            aux = bin;
            while (aux > 0)
            {
                int digito = aux % 10;
                if (digito != 0 && digito != 1)
                {
                    valido = 0;
                    break;
                }
                decimal += digito * peso;
                peso *= 2;
                aux /= 10;
            }

            if (valido)
                printf("Decimal: %u\n", decimal);
            else
                printf("Número binário inválido\n");
            break;
        }

        case 3:
        {
            float inicial, final, passo, c;

            printf("Temperatura inicial (C): ");
            scanf("%f", &inicial);
            printf("Temperatura final (C): ");
            scanf("%f", &final);
            printf("Passo: ");
            scanf("%f", &passo);

            if (passo <= 0)
            {
                printf("Passo deve ser positivo!\n");
                break;
            }

            printf("\n  Celsius | Fahrenheit\n");
            printf("----------|-----------\n");
            for (c = inicial; c <= final; c += passo)
            {
                printf("  %7.2f | %9.2f\n", c, 9.0 / 5.0 * c + 32);
            }
            break;
        }

        case 0:
            printf("Saindo...\n");
            break;

        default:
            printf("Opção inválida!\n");
        }
    } while (opcao != 0);

    return 0;
}
