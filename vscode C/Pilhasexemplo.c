#include <stdio.h>
#include <stdlib.h> 
#include <math.h>
#define tamanho 10 //CONSTANTES

//ESTRUTURA DA PILHA
struct tpilha
{
    int dados[tamanho];
    int ini;
    int fim;
};
 //VARIAVEIS GLOBAIS
 struct tpilha pilha;
 
 
 
int main()
{
    //mostra conteúdo da pilha
 void pilha_mostrar()
        {
            int i;
            printf("[ ");
            for (i = 0; i < tamanho; i++)
                {
                    printf("%d", pilha.dados[i]);
                }
            
            printf("] \n\n");

        }

        //Adicionar um elemento no final da pilha
        //o valor de fim é atualizado para que ele aponte sempre para a primeira posição disponível.
        void pilha_entrar()  
            {
                printf("\nDigite o valor a ser empilhado:");
                scanf("%d", &pilha.dados[pilha.fim]);
                pilha.fim++;
            }

            //Adicionar um elemento no final  da Pilha
            //adicionando agora um desvio condicional para verificar se existe espaço disponível para o novo empilhamento

            void pilha_entrar()
            {
                if (pilha.fim == tamanho)
                {
                    printf("\nA pilha está cheia, impossivel empilhar um novo elemento !\n\n");
                    system("Pause");
                }
                else
                {
                    printf("\nDigite o valor a ser empilhado: ");
                    scanf("%d", &pilha.dados[pilha.fim]);
                    pilha.fim++;
                }
            }
            //Retirar o ultimo elememnto da pilha
                void pilha_sair()
                {
                    pilha.dados[pilha.fim-1] = 0;
                    pilha.fim--;
                }

                //Retira o ultimo elemento da pilha
                //É preciso fazer um controle antes da remoção para verificar se a pilha está vazia.
                //Vamos comparar então o valor de ini com fim 
                void pilha_sair()
                {
                    if (pilha.ini == pilha.fim)
                    {
                        printf("\nA pilha está vazia, não há nada para desempilhar !\n\n");
                        system("Pause");
                    }
                    else
                    {
                        pilha.dados[pilha.fim-1] = 0;
                        pilha.fim--;
                    } 
                }
                

    return 0;
}
