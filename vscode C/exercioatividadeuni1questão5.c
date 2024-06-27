#include <stdio.h>
#include <stdlib.h> 
#include <math.h>

int main()
{
    int tam;
    int *vetor1, *vetor2;
    
    printf("Ecolha o tamanho do vetor: ");
    scanf("%d", &tam);

    vetor1 = (int *) malloc(sizeof(int)*tam);
    vetor2 = (int *) malloc(sizeof(int)*(tam*2));

        printf("\nVetor1: \n");
            for (int i = 0; i < tam; i++)
                {
                    vetor1[i] = pow (2, i);
                    printf("Posicao %d: %d\n", i, vetor1[i]);
                }

        printf("\nVetor2: \n");
            for (int i = 0; i < tam*2; i++)
                {
                    vetor2[i] = pow (3, i);
                    printf("Posicao %d: %d\n", i, vetor2[i]);
                }
    
    system("Pause");

    return 0;
}
