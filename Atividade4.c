/*
4. Escreva um programa que peça ao usuário para fornecer um número inteiro longo, obtenha-o da entrada padrão, usando scanf, e determine se o valor fornecido pode ser representado, sem perda de informação como um int. Imprima na tela o valor fornecido, seguido das palavras “e maior que um int” ou “este valor pertence ao intervalo dos int”. Use apenas o operador condicional (?).
*/

#include <stdio.h>

int main(void)
{
  long int n;

  printf("Digite um número inteiro longo (64 bits):  ");
  scanf("%li", &n);

  printf(n <= 2147483647 ? "%li pertence ao intervalo dos int\n" : "%li é maior que um int\n", n);

  return 0;
}
