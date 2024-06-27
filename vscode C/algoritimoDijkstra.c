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
            menu_mostrar ();
            scanf("" opt);
            switch (opt)
                {
                    case 1:
                        //Criar um novo grafo
                        grafo_criar ();
                        break;
                    case 2:
                        //Procura os caminhos
                        if (vertices > 0)
                            {
                                grafo_procurar ();
                            }
                        
                    default:
                        break;
                }

        } while (/* condition */);
        
    return 0;
}
