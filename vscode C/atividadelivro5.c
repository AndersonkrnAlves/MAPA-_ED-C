#include <stdio.h>
#include <stdlib.h>

/*int a, b;
int *c, *d;*/

int main()
{
 /*   a = 10;
    b = 20;
    c = &a;
    d = &b;

    b = 5;
    a = b + 2;
    *d = 12;
    *c = *d + 4;
    *d = *c + b;

    printf("\n%d\n", b);*/
  
  int vetor[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int i = 0, temp;
  while (i < 10)
  {
    temp = vetor[i];
    vetor[i] = vetor[9-i];
    vetor[9-i] = temp;
    printf(" %d ", vetor[i]);
    i++;
  }
  
    return 0;
}