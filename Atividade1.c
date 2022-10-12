/*
1. Escreva um programa que:
  a. Declare três variáveis de tipo char, vamos chamar de ch1, ch2 e ch3  mas você pode escolher outro identificador se achar mais apropriado;

  b. Peça ao usuário para digitar um caractere, obtenha o mmesmo da entrada padrão, usando scanf,  e atribua o valor digitado à variável ch1;

  c. Verifique, utilizando o operador condicional (?) se se trata de:
    I. um dígito;
    II. um caractere maiúsculo;
    III. um caractere minúsculo;
    IV. outro tipo de caractere;

  d. Atribua à variável ch2 o caractere 78 e identifique é imprima na tela, utilizando printf, o caractere em formato numérico decimal, octal, hexadecimal e como caractere;

  e. Dado que o caractere ch2 é uma letra maiúscula, atribua à variável ch3 o caractere que corresponde à mesma letra minúscula (não pode procurar na tabela ASCII); 

  f. Imprima ch3 na tela, utilizando printf, em formato numérico  decimal, octal, hexadecimal e como caractere;
*/

#include <stdio.h>

int main(void) 
{
  char ch1, ch2, ch3;

  printf("Digite um caracter: ");
  scanf("%c", &ch1);

  int isDigit = ch1 >= '0' && ch1 <= '9';
  int isUpper = ch1 >= 'A' && ch1 <= 'Z';
  int isLower = ch1 >= 'a' && ch1 <= 'z';
  int isOther = !isDigit && !isUpper && !isLower; 

  printf(
    "ch1: Digito: %s \t Maiúscula: %s \t Minúscula: %s \t Outro: %s\n", 
    isDigit ? "Sim" : "Não", 
    isUpper ? "Sim" : "Não", 
    isLower ? "Sim" : "Não", 
    isOther ? "Sim" : "Não"
  );

  ch2 = 78;
  printf("ch2: Decimal: %i \t Octal: %o \t\t Hexadecimal: %X \t Caractere: %c\n", ch2, ch2, ch2, ch2);

  ch3 = ch2 + 32;

  printf("ch3: Decimal: %i \t Octal: %o \t\t Hexadecimal: %X \t Caractere: %c\n", ch3, ch3, ch3, ch3);

  return 0;
}