#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

struct Pilha
    {
        char itens[MAX_SIZE];//intens 
        int topo;
    };

void inicializar(struct Pilha *p)
    {
        p->topo = 1;
    }

int vazia(struct Pilha *p)
    {
        return p->topo == -1;
    }

void push(struct Pilha *p, char item) 
    {
        char letra_ini;
        char letra_final;
        letra_ini = 0;
        letra_final = 0;
    }

char pop(struct Pilha *p)
    {
        //code
    }

char topo(struct Pilha *p)
    {
          //code  
    }
    
void limpar(struct Pilha *p)
    {
        //code
    }

int main()
{
   struct Pilha p;
   inicializar(&p);

   while (1)
        {
            printf("\nDigite - 1 para adcionar uma palavra a pilha\n");
            printf("Digite - 2 para desempilhar a palavra \n");
            printf("Digite- 3 para limpar a pilha\n");
            printf("Digite - 4 para exibir o topo da pilha\n");
            printf("Digit - 0 para sair\n\n");

            int opcao;
            printf("\nEscolha uma opcao: ");
            scanf("%d", &opcao);

            switch (opcao)
                {
                    case 1:
                        char palavra[MAX_SIZE];
                            printf("Digite a palavra  a ser adicionada: \n");
                            scanf("%s", &palavra);

                            for (int i = 0; i < strlen(palavra); i++)
                                {
                                    push(&p, palavra[i]);
                                }
                                printf("\nPalavra %s adicionada a pilha.\n", palavra);
                        break;
                    case 2:
                        char palavra[MAX_SIZE];
                        int indice = 0;

                        while (!vazia(&p))
                            {
                                palavra[indice++] = pop(&p);
                            }
                            palavra[indice] = '\0';

                            if (indice > 0)
                                {
                                    printf("\nPalavra desempilhada %s\n", palavra);
                                }
                            else
                                {
                                    printf("\nPilha vazia. Nenhum elemento para mostrar.\n");
                                }
                        break;
                    case 3:
                        limpar(&p);
                        printf("\nPilha limpa\n");
                        break;
                    
                    case 4:
                        char top = topo(&p);

                        if (top == '\0')
                            {
                                printf("\nPilha vazia. Nenhum elemento para mostrar.\n");
                            }
                        else
                            {
                                printf("\nElemento no topo da pilha: %c\n", top);
                            }
                         break;
                    case 0:
                        return 0;
                        break;
                    default :
                        printf("\nOpcao invalida. Digite 1, 2, 3, 4 ou 0.\n");
                        break;
                } 
        }       
    return 0;
}
