/*
3. Escreva um programa, usando quando necessário o operador (?), que:
  a. Declare uma variável de tipo int, vamos chamar de cha mas você pode escolher outro identificador se achar mais apropriado;
  
  b. Peça ao usuário para digitar um números inteiros positivo, obtenha-o da entrada padrão, usando scanf,  e atribua os valores digitados à variável cha; (se o valor fornecido for negativo, converter no correspondente valor positivo);

  c. Identifique se o valor fornecido pelo usuário faz parte dos valores utilizados para a representação de caracteres imprimíveis da tabela ASCII e imprima na tela, utilizando printf, o caractere em formato numérico decimal, octal, hexadecimal e como caractere;

  d. Se o valor estiver no intervalo dos caracteres não imprimíveis, menores que 32, converter no caractere 32 e imprima na tela, utilizando printf, o caractere em formato numérico decimal, octal, hexadecimal e como caractere;

  e. Se o valor fornecido for maior que o valor máximo do intervalo, 127, utilizar o operador % para converter num valor do intervalo dos caracteres e aplique c ou d;
*/

#include <stdio.h>

int main(void)
{
  int cha;

  printf("Digite um valor inteiro: ");
  scanf("%d", &cha);

  cha = cha < 0 ? -cha : cha;
  cha = cha > 127 ? cha % 127 : cha;
  cha = cha < 32 ? 32 : cha;

  printf("Decimal: %d \t Octal: %o \t Hexadecimal: %X \t Caractere: %c\n", cha, cha, cha, cha);

  return 0;
}
