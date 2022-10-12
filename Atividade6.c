/*
6. Escreva um programa que leia um número inteiro utilizando o operador % converta ele num valor entre 1 e 6. Imprima o resultado na tela;
*/

#include <stdio.h>

int main(void)
{
  int n, convertido;

  printf("Digite um número inteiro: ");
  scanf("%d", &n);

  convertido = (n % 6) + 1;
  printf("%d\n", convertido);

  return 0;
}