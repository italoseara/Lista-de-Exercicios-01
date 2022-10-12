/*
8. Escreva um programa que 
  a. Declare três variáveis de tipo float, vamos chamar de x, y e z mas você pode escolher outro identificador se achar mais apropriado;
  
  b. Peça ao usuário para digitar dois números de ponto flutuante, obtenha-os da entrada padrão, usando scanf,  e atribua os valores digitados às variáveis x e y respectivamente;
  
  c. Considerando que x e y são coordenadas num plano cartesiano, identifique em que lado da curva f(x) = 5x + 2 se encontra (esquerda, direita ou na curva). Imprima o resultado na tela; 
  
  d. Atribua à variável z o valor da distância euclidiana do ponto (x, y) ao centro de coordenadas;(distância euclidiana se calcula como x2+y2, pode utilizar a função sqrt() fornecida no arquivo de cabeçalho math.h) 
  
  e. Atribua à variável z o produto entre as variáveis x e y, imprima o resultado na tela em notação científica; 
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
  float x, y, z;

  printf("Digite um valor para x: ");
  scanf("%f", &x);
  printf("Digite um valor para y: ");
  scanf("%f", &y);

  float f = 5 * x + 2;

  f > y
    ? printf("O ponto (%.2f, %.2f) está acima da curva f(x) = 5x + 2.\n", x, y)
    : f < y
      ? printf("O ponto (%.2f, %.2f) está abaixo da curva f(x) = 5x + 2.\n", x, y)
      : printf("O ponto (%.2f, %.2f) está na curva f(x) = 5x + 2.\n", x, y);

  z = sqrt(x * x + y * y);
  printf("A distância euclidiana do ponto (%.2f, %.2f) ao centro de coordenadas é %.2f.\n", x, y, z);

  z = x * y;
  printf("O produto entre %.2f e %.2f é %.2e.\n", x, y, z);
  
  return 0;
}