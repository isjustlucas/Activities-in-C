int main(void)
{
    int n, i;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    // FOR, e usado quando se tem o numero exato de repeticoes (i).
    for (i = 0; i <= 10; i++)
    {
        printf("%3d x %2d = %3d\n", n, i, n * i);
    }
    printf("\n");

    // WHILE, quando nao se tem o numero exato de repeticoes (i).
    i = 0;
    while (i <= 10)
    {
        printf("%3d x %2d = %3d\n", n, i, n * i);
        i++;
    }
    printf("\n");

    // DO-WHILE, é usado quando se quer checar o numero de repeticoes apenas no final.
    i = 0;
    do
    {
        printf("%3d x %2d = %3d\n", n, i, n * i);
        i++;
    } while (i <= 10);

    return 0;
}