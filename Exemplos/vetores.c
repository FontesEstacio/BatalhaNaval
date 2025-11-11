#include <stdio.h>

int main()
{
  int vetor[5]; // Declaração de um vetor de 5 elementos

  // Preenchendo o vetor com valores
  vetor[0] = 15;
  vetor[1] = 25;
  vetor[2] = 35;
  vetor[3] = 45;
  vetor[4] = 55;

  // Acessando e imprimindo elementos específicos do vetor
  printf("O primeiro elemento é %d\n", vetor[0]);
  printf("O terceiro elemento é %d\n", vetor[2]);
  printf("O quinto elemento é %d\n", vetor[4]);

  // Percorrendo e imprimindo todos os elementos do vetor
  printf("\nTodos os elementos do vetor:\n");
  for (int i = 0; i < 5; i++)
  {
    printf("vetor[%d] = %d\n", i, vetor[i]);
  }

  return 0;
}

