#include <stdio.h>
#include <stdlib.h> 
#include <math.h>
#include <locale.h>
#include <string.h>
#define tamanho 5

struct tcliente
{
    char nome[50];
    char hora [6];
};


struct tfila
{
    struct tcliente dados[tamanho];
    int ini;
    int fim;
};

struct tfila fila;
int op;


void fila_entrar ();
void fila_sair ();
void fila_mostrar ();
void menu_mostrar ();

int main ()
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

void fila_entrar ()
    {
        if (fila.fim == tamanho)
            {
                printf("\nFila está cheia volte outro dia!\n\n");
                system("Pause");
            }
        else
            {
                printf("\nDigite o nome do cliente que chegou: \n");
                scanf("%s", &fila.dados[fila.fim].nome);
                printf("\nDigite a hora de chegada do cliente: \n");
                scanf("%s", &fila.dados[fila.fim].hora);
                fila.fim++;
            }  
    } 
void fila_sair ()
    {
        if (fila.ini == fila.fim)
            {
                printf("\nFila fazia, mas logo aparece alguem\n\n");
                system("Pause");
            }
        else
            {
                int i;
                for (i = 0; i < tamanho; i++)
                {
                    strcpy (fila.dados[i].nome, fila.dados[i+1].nome);
                    strcpy (fila.dados[i].hora, fila.dados[i+1].hora);
                }
                //fila.dados[fila.fim] = 0;
                strcpy(fila.dados[fila.fim].nome, "");
                strcpy(fila.dados[fila.fim].hora, ""); 
                fila.fim--;
            }
    }
void fila_mostrar () 
    {
        int i;
        printf("[ ");
        for (i = 0; i < tamanho; i++)
            {
                printf("\nCliente %s ", fila.dados[i].nome);
                printf("Chegou as %s horas \n", fila.dados[i].hora);
            }
        printf("]\n\n");
    }
void menu_mostrar ()
    {
        printf("\nEscolha as opções abaixo:\n");
        printf("\n1 - Incluir cliente na fila\n");
        printf("\n2 - Cliente já atendido\n");
        printf("\n0 - Sair\n\n");
    }