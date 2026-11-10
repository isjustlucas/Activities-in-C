/*
Uma empresa de transporte por aplicativo de Feira de Santana precisa de um programa
que simule o preço de uma corrida antes de o passageiro confirmar a viagem. Escreva um
programa em C que leia os dados da corrida, calcule o valor a pagar seguindo as regras
abaixo e exiba um resumo.

1. Categoria (int): 1 – Econômico, 2 – Conforto, 3 – Moto;
2. Distância da corrida em km (float);
3. Tempo estimado em minutos (int);
4. Dia da semana (int): 1 – Domingo, 2 – Segunda, . . . , 7 – Sábado;
5. Hora de início (int, de 0 a 23);
6. Possui cupom? (char): S ou N (aceitar maiúscula ou minúscula).
*/
#include <stdio.h>

int main(void)
{
  int categoria, duracao, dia, horario, tarifa_d = 0, horas, minutos;
  float distancia, base, acrescimo = 0, desconto = 0, total;
  char cupom;

  // INPUT E VALIDACAO DE CATEGORIA
  printf("Qual a categoria da corrida? ");
  scanf("%d", &categoria);
  if (categoria < 1 || categoria > 3)
  {
    printf("Categoria invalida!\n");
    return 0;
  }
  // INPUT E VALIDACAO DE DISTANCIA
  printf("Qual a distancia da corrida(km)? ");
  scanf("%f", &distancia);
  if(distancia <= 0) {
    printf("Distancia invalida!\n");
    return 0;
  }
  // VALIDACAO DE MOTO
  if(categoria == 3 && distancia > 20) {
    printf("Corrida nao disponivel para moto\n");
    return 0;
  }
  // INPUT E VALIDACAO DE TEMPO
  printf("Qual a duracao da corrida?(minutos) ");
  scanf("%d", &duracao);
  if(duracao <= 0) {
    printf("Duracao da corrida invalida!\n");
    return 0;
  }
  // INPUT E VALIDACAO DO DIA DA SEMANA
  printf("Qual o dia da semana?(1-7) ");
  scanf("%d", &dia);
  if(dia < 1 || dia > 7) {
    printf("Dia da semana invalida!\n");
    return 0;
  }
  // INPUT E VALIDACAO DA HORA DE INICIO
  printf("Qual o horario de inicio da corrida?(0h-23h) ");
  scanf("%d", &horario);
  if(horario < 0 || horario > 23) {
    printf("Horario de inicio invalido!\n");
    return 0;
  }
  // SELECAO DA TARIFA
  switch(categoria) {
    // Economico R$ 4,00 R$ 1,40 R$ 0,25 | MIN: R$ 8,00
    case 1:
      base = 4 + (1.4 * distancia) + (0.25 * duracao);
      if(base < 8.0) {
        base = 8.0;
      }
      break;

      // Conforto R$ 6,00 R$ 2,10 R$ 0,40 | MIN: R$ 12,00
    case 2:
      base = 6 + (2.1 * distancia) + (0.4 * duracao);
      if(base < 12) {
        base = 12.0;
      }
      break;

      // Moto R$ 2,50 R$ 0,90 R$ 0,15 | MIN: R$ 5,00
    case 3:
      base = 2.5 + (0.9 * distancia) + (0.15 * duracao);
      if(base < 5) {
        base = 5.0;
      }
      break;
  }
  // TARIFA DINAMICA
  if((dia >= 2 && dia <= 6) && ((horario >= 6 && horario <= 8) || (horario >= 17 && horario <= 19))) {
    acrescimo = base * 0.3;
    tarifa_d = 1;
  } else if(horario >= 0 && horario <= 5) {
    acrescimo = base * 0.2;
    tarifa_d = 2;
  }

  // INPUT E VALIDACAO DE CUPOM
  printf("O passageiro possui um cupom?(S/N) ");
  scanf(" %c", &cupom);
  if(cupom == 's') {
    cupom = 'S';
  } else if (cupom == 'n') {
    cupom = 'N';
  }
  if(cupom != 'S' && cupom != 'N') {
    printf("Cupom invalido\n");
    return 0;
  }
  // PRINT DO ACRESCIMO
  printf(" \n");
  if(tarifa_d == 1) {
    printf("Horario de pico: acrescimo de 30%\n");
  } else if (tarifa_d == 2) {
    printf("Madrugada: acrescimo de 20%\n");
  }

  if(cupom == 'S' && tarifa_d != 1) {
    desconto = (base + acrescimo) * 0.1;

    if(desconto > 5) {
      desconto = 5;
    }
    total = base + acrescimo - desconto;
  } else {
    if(cupom == 'S' && tarifa_d == 1) {
      printf("Cupom nao aplicavel em horario de pico.\n");
    }
    desconto = 0;
    total = base + acrescimo;
  }

  // PRINT DO RESULTADO
  printf("\n========== RESUMO DA CORRIDA ==========\n");
  switch(categoria) {
    case 1:
      printf("Categoria:          Economico\n");
      break;
    case 2:
      printf("Categoria:          Conforto\n");
      break;
    case 3:
      printf("Categoria:          Moto\n");
      break;
  }
  // CLASSIFICACAO DA DISTANCIA DA CORRIDA
  if(distancia < 5) {
    printf("Distancia:          %.1f km | Corrida curta\n", distancia);
  } else if(distancia <= 15) {
    printf("Distancia:          %.1f km | Corrida media\n", distancia);
  } else {
    printf("Distancia:          %.1f km | Corrida longa\n", distancia);
  }
  // CALCULO DA DURACAO EM HORAS E MINUTOS
  horas = duracao / 60;
  minutos = duracao % 60;
  printf("Duracao:            %dh %dmin\n", horas, minutos);
  printf("Valor base:         R$ %.2f\n", base);
  printf("Acrescimo:          R$ %.2f\n", acrescimo);
  printf("Desconto:           R$ %.2f\n", desconto);
  printf("TOTAL:              R$ %.2f\n", total);
  printf("=======================================\n");

  return 0;
}
