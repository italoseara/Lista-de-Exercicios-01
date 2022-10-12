/*
5. Escreva um programa que peça ao usuário para fornecer um número inteiro sem sinal, obtenha-o da entrada padrão, usando scanf, e determine se o valor fornecido pode ser representado, sem perda de informação como um int. Imprima na tela o valor fornecido, seguido das palavras “e maior que um int” ou “este valor pertence ao intervalo dos int”. Use apenas o operador condicional (?).
*/

#include <stdio.h>

int main(void)
{
  unsigned long int n;

  printf("Digite um número inteiro sem sinal: ");
  scanf("%lu", &n);

  printf(n <= 4294967295 ? "%lu pertence ao intervalo dos int\n" : "%lu é maior que um int\n", n);

  return 0;
}