//Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Variáveis
int destino, origem, vertices = 0;
int custo, *custos = NULL;

//Prototipação
void dijkstra(int vertices, int origem, int destino, int *custos);
void menu_mostrar (void);
void grafo_procurar (void);
void grafo_criar (void);

//Função principal

int main(int argc, char **argv)
{
     int opt = -1;
     //Laço principal do menu
     do
        {
            //Desenha o menu na tela
            menu_mostrar();
            scanf("%d" &opt);
            switch (opt)
                {
                    case 1:
                        //Criar um novo grafo
                        grafo_criar();
                        break;
                    case 2:
                        //Procura os caminhos
                        if (vertices > 0)
                            {
                                grafo_procurar();
                    }
                    break;
                }
        } while (opt != 0);
        printf("\nAlgoritimo de Dijkstra finalizando...\n\n");
        system("pause");
    return 0;
}

//Implementação do algoritimo de Dijkstra
void dijkstra( int vertices, int origem, int destino, int *custos)
        {
            int i, v, cont = 0;
            int *ant, *tmp;
            int *z; /*vertices para as quais se conhece o caminho minimo*/
            double min;
            double dist[vertices]; /*vetor com custos dos caminhos*/
            /* aloca as linhas das matriz */
            ant = (int*) calloc(vertices, sizeof(int*));
            if (ant == NULL)
                {
                    system("color fc");
                    printf("**Erro: Memoria Insuficiente**");
                    exit(-1);
            }
            tmp = (int*) calloc(vertices, sizeof(int*));
            if (tmp == NULL)
                {
                    system("color fc");
                    printf("**Erro: Memoria Isuficiente**");
                    exit(-1);
            }
            z = (int*) calloc(vertices, sizeof(int*));
            if (z == NULL)
                {
                    system("color fc");
                    printf("**Erro: Memoria Insuficiente**");
                    exit(-1);
            }
            for ( i = 0; i < vertices; i++)
                {
                    if (custos[(origem -1) * vertices + 1] != -1)
                        {
                            ant[i] = origem -1;
                            dist[i] = custos[(origem - 1) * vertices + 1];
                    }
                    else
                        {
                            ant[i] = -1;
                            dist[i] = HUGE_VAL;
                    }
                    z[i] = 0;
                }
                z[origem -1] = 1;
                dist[origem -1] = 0;
                /* Laco principal*/
                do
                    {
                        /* Encontrando o vertice que deve entrar em z */
                        min = HUGE_VAL;
                        for ( i = 0; i < vertices; i++)
                            {
                                if (!z[i])
                                    {
                                        if (dist[i] >= 0 && dist[i] < min)
                                            {
                                                min = dist[i]; v = i;
                                        }
                                }
                        }                
                        /* Calculando as diastancias dos novos vizinhos de z */
                        if (min != HUGE_VAL && v != destino - 1)
                            {
                                z[v] = 1;
                                for (i = 0; i < vertices; i++)
                                    {
                                        if (!z[i])
                                            {
                                                if (custos[v*vertices+1] != -1 && dist[v] + custos[v*vertices+i] < dist[i])
                                                    {
                                                        dist[i] = dist[v] + custos[v*vertices+i];
                                                        ant[i] = v;
                                                }
                                        }
                                }
                        }
                }while (v != destino - 1 && min != HUGE_VAL);
                
                /* Mostra  o resultado da busca */
                printf("\tde %d para %d: \t", origem, destino);
                if (min == HUGE_VAL)
                    {
                        printf("Nao Existe\n");
                        printf("\tCusto: \t- \n");
                }
                else
                    {
                        i = destino;
                        i = ant[i-1];
                        while (i != -1) 
                            {
                                tmp[cont] = i + 1;

                        }
                }
                                
                
}