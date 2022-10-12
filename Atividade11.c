/*
1. Escreva um programa que leia da entrada padrão o tamanho dos catetos de um triângulo retângulo e imprima:
  a. O tamanho do quadrado da hipotenusa;
  b. O arquivo de cabeçalho math.h inclui a função sqrt() que retorna a raiz quadrada do parâmetro de entrada. 
  c. O valor do perímetro do triângulo;
  d. O valor da área do referido triângulo;
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
  float cateto1, cateto2, hipotenusa, perimetro, area;

  printf("Digite o tamanho do primeiro cateto: ");
  scanf("%f", &cateto1);

  printf("Digite o tamanho do segundo cateto: ");
  scanf("%f", &cateto2);

  hipotenusa = sqrt((cateto1 * cateto1) + (cateto2 * cateto2));
  perimetro = cateto1 + cateto2 + hipotenusa;
  area = (cateto1 * cateto2) / 2;

  printf("Hipostenusa: %.2f \t Perímetro: %.2f \t Área: %.2f\n", hipotenusa, perimetro, area);

  return 0;
}