/*
10. Escreva um programa que leia dois pares de valores (x1, y1) e (x2, y2) de pontos do plano e informe a equação da função do tipo f(x)= ax + b que passa por estes pontos.
*/

#include <stdio.h>

int main(void)
{
  float x1, y1, x2, y2, a, b;

  printf("Digite o valor de x1: ");
  scanf("%f", &x1);

  printf("Digite o valor de y1: ");
  scanf("%f", &y1);

  printf("Digite o valor de x2: ");
  scanf("%f", &x2);

  printf("Digite o valor de y2: ");
  scanf("%f", &y2);

  // Equação da reta: y = ax + b
  a = (y2 - y1) / (x2 - x1);
  b = y1 - (a * x1);

  printf("A equação da reta que passa pelos pontos (%.1f, %.1f) e (%.1f, %.1f) é: f(x) = %.2fx + %.2f\n", x1, y1, x2, y2, a, b);
  
  return 0;
} 