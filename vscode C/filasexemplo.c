#include <stdio.h>
#include <stdlib.h> 
#include <math.h>
#include <locale.h>

//Constantes
#define tamanho 5

//Estrutura da Fila
struct tfila
    {
        int dados [tamanho];
        int ini;
        int fim;
    };

//Variáveis globais
struct tfila fila;
int op;

//Protipação
void fila_entrar ();
void fila_sair ();
void fila_mostrar ();
void menu_mostrar ();

//Função Principal
int main()
    {
        setlocale(LC_ALL, "Portuguese");
        op = 1;
        fila.ini = 0;
        fila.fim = 0;
        while (op != 0)
            {
                system("cls");
                fila_mostrar ();
                menu_mostrar ();
                scanf("%d", &op);
                switch (op)
                    {
                    case 1:
                        fila_entrar ();
                        break;
                    case 2:
                        fila_sair ();
                        break;
                    }
            }        
        return 0;
    }
//Adicionar um elemento no final da fila
void fila_entrar ()
    {
        if (fila.fim == tamanho)
            {
                printf("\nA fila está cheia, volte outro dia!\n\n");
                system("Pause");
            }
        else
            {
                printf("\nDigite o valor a ser inserido: ");
                scanf("%d", &fila.dados[fila.fim]);
                fila.fim++;
            }
    }
//Retirar  o primeiro elemento da fila
void fila_sair ()
    {
        if (fila.ini== fila.fim)
            {
                printf("\nFila vazia, mas logo aparece alguém!\n\n");
                system("Pause");
            }
        else
            {
                int i;
                for (i = 0; i < tamanho; i++)
                    {
                        fila.dados[i] = fila.dados[i+1];
                    }
                fila.dados[fila.fim] = 0;
                fila.fim--;
            }
    }
//Mostrar o conteúdo da Fila
void fila_mostrar ()
    {
        int i;
        printf("[ ");
        for (i = 0; i < tamanho; i++)
            {
                printf("%d ", fila.dados[i]);
            }
        printf("]\n\n");
    }
//Mostrar menu de opções
void menu_mostrar ()
    {
        printf("\nEscolha uma opção:\n");
        printf("\n1 - Incluir na fila\n");
        printf("\n2 - Escluir da fila\n");
        printf("\n0 - Sair\n\n");
    }