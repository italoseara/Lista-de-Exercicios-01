/*
7. Escreva um programa que leia um número inteiro positivo e retorne o valor da soma de todos os números inteiros de zero até o número fornecido. A soma dos números inteiros de 1 até n se calcula como n*(n+1)/2. Imprima um resultado na tela. Como fazer para lidar com o fato de que o usuário pode fornecer um número negativo? (use apenas o que vimos em sala de aula até agora)
*/

#include <stdio.h>

int main(void)
{
  int n;

  printf("Digite um número inteiro positivo: ");
  scanf("%i", &n);

  n < 0
    ? printf("O número digitado deve ser positivo!\n")
    : printf("A soma dos numeros inteiros de 1 até %i é %i.\n", n, (n * (n + 1) / 2));
  
  return 0;
}