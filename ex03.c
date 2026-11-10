/*
Exercício 3. Conta de energia (1,0 pt)
Uma distribuidora (valores fictícios) cobra a energia por faixas progressivas: os pri-
meiros 100 kWh custam R$ 0,60 cada; do 101.o ao 200.o kWh, R$ 0,75 cada; o que

exceder 200 kWh custa R$ 0,90 cada. Sobre o total, aplica-se a bandeira tarifária: V
(verde) sem acréscimo, A (amarela) +5% e R (vermelha) +10%. Leia o consumo e a
letra da bandeira (aceite maiúscula ou minúscula, usando switch ) e mostre o valor
da conta. Uma bandeira inválida deve gerar uma mensagem de erro.
*/
#include <stdio.h>

int main(void)
{
  int valido = 1;
  float consumo, total = 0;
  char bandeira;

  printf("Consumo (kWh): ");
  scanf("%f", &consumo);
  printf("Bandeira: ");
  scanf(" %c", &bandeira);

  if (consumo < 0)
  {
    printf("Consumo em kWh invalido!\n");
    valido = 0;
  }
  else if (consumo <= 100)
  {
    total = consumo * 0.6;
  }
  else if (consumo <= 200)
  {
    total = 100 * 0.6 + (consumo - 100) * 0.75;
  }
  else
  {
    total = 100 * 0.6 + 100 * 0.75 + (consumo - 200) * 0.9;
  }

  switch (bandeira)
  {
  case 'v':
  case 'V':
    break;
  case 'a':
  case 'A':
    total = total * 1.05;
    break;
  case 'r':
  case 'R':
    total = total * 1.1;
    break;
  default:
    printf("Bandeira invalida!\n");
    valido = 0;
    break;
  }
  if (valido)
  {
    printf("Valor da conta: R$ %.2f\n", total);
  }

  return 0;
}