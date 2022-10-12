/*
9. Escreva um programa que leia da entrada padrão o lado de um quadrado e imprima:
  a. O tamanho da diagonal do mesmo; 
  
  b. O valor do perímetro;
  
  c. Sua área
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
  float lado, diagonal, perimetro, area;
    
  printf("Digite o lado do quadrado: ");
  scanf("%f", &lado);
  
  diagonal = sqrt(2 * (lado * lado));
  perimetro = lado * 4;
  area = lado * lado;
  
  printf("Diagonal: %.2f \t Perimetro: %.2f \t Area: %.2f\n", diagonal, perimetro, area);

  return 0;
}