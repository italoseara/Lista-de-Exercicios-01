/*
13. Escreva um programa que:
  a. Leia da entrada padrão as notas dos 5 créditos da disciplina CET635-LPI e calcule a média do semestre. Imprima o resultado na tela;
  
  b. dependendo da média calculada anteriormente, determine se o aluno está de prova final ou não;
  
  c. se o aluno estiver de prova final, leia a nota da prova final e calcule a média do semestre;
  
  d. Imprima a nota final do aluno na disciplina;
*/

#include <stdio.h>

int main(void)
{
  float nota1, nota2, nota3, nota4, nota5, exameFinal, mediaFinal, mediaPeriodo;

  printf("Digite a nota da primeira prova: ");
  scanf("%f", &nota1);

  printf("Digite a nota da segunda prova: ");
  scanf("%f", &nota2);

  printf("Digite a nota da terceira prova: ");
  scanf("%f", &nota3);

  printf("Digite a nota da quarta prova: ");
  scanf("%f", &nota4);

  printf("Digite a nota da quinta prova: ");
  scanf("%f", &nota5);

  mediaPeriodo = (nota1 + nota2 + nota3 + nota4 + nota5) / 5;
  exameFinal = mediaPeriodo;

  mediaPeriodo >= 7
    ? printf("Aluno aprovado com média %.2f\n", mediaPeriodo)
    : printf("Aluno reprovado com média %.2f, Digite a nota do exame final: ", mediaPeriodo);
  
  mediaPeriodo < 7
    ? scanf("%f", &exameFinal)
    : 0; // não faz nada
  
  mediaFinal = (mediaPeriodo * 6 + exameFinal * 4) / 10;
  printf("Média final: %.2f\n", mediaFinal);

  return 0;
}