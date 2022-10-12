/*
14. Uma circunferência de raio 1.0 é composta pelos pontos (x, y) que satisfazem a condição x2+ y2= 1.0. Escreva um programa que leia as coordenadas (x, y) de um ponto pelo teclado e determine se o ponto está dentro ou fora da circunferência.
*/

#include <stdio.h>

int main(void)
{
  float x, y;

  printf("Digite o valor de x: ");
  scanf("%f", &x);

  printf("Digite o valor de y: ");
  scanf("%f", &y);

  x * x + y * y <= 1.0
    ? printf("O ponto (%.2f, %.2f) está dentro da circunferência\n", x, y)
    : printf("O ponto (%.2f, %.2f) está fora da circunferência\n", x, y);
  
  return 0;
}


