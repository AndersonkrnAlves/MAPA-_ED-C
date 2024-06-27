#include <stdio.h>
#include <stdlib.h> 
#include <math.h>
#include <locale.h>
#include <string.h>
//a
#define tamanho 5
struct tlivro
{
    int cod;
    char Nome[50];
    char autor[50];
};

struct tpilha
{
    struct tlivro dados[tamanho];
    int ini;
    int fim;

};
//b
struct tpilha pilha;

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
//C
void pilha_entrar ()
    {
        if (pilha.fim == tamanho)
            {
                printf("\nA pilha está cheia, impossivel empilhar!/n/n");
                system("Pause");
            }
        else
            {
                printf("\nDigite o código do livro: \n");
                scanf("%d", &pilha.dados[pilha.fim].cod);
                printf("\nDigite o nome do livro: \n");
                scanf("%s", &pilha.dados[pilha.fim].Nome);
                printf("\nDigite o nome autor: \n");
                scanf("%s", &pilha.dados[pilha.fim].autor);
                pilha.fim++;
            }
    }
//d
void pilha_sair ()
    {
        if (pilha.ini == pilha.fim)
            {
                printf("\nA pilha está vazia, impossivel desempilhar!\n\n");
                system("Pause");
            }
        else
            {
                pilha.dados[pilha.fim-1].cod = 0;
                strcpy(pilha.dados[pilha.fim-1].Nome, "");
                strcpy(pilha.dados[pilha.fim-1].autor, "");
                pilha.fim--;
            }
    }
//e
void pilha_mostrar()
    {
        int i;
        printf("[ ");
        for (i = 0; i < tamanho; i++)
            {
                printf("%d ", pilha.dados[i].cod);
            }
        printf("]\n\n");
    }