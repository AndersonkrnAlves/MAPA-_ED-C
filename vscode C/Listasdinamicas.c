#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Define a estrutura da lista
struct no
    {
        int dado;
        struct no *proximo;
};

//Definindo as Variáveis
typedef no *ptr_no;
ptr_no lista;
int op;

//Prototipação
void menu_mostrar();
void menu_selecionar(int op);
void lista_inserir(ptr_no lista);
void lista_remover(ptr_no lista);
void lista_mostrar(ptr_no lista);

//Função principal
int main()
    {
        //Inicializando máquina de números randômicos
        srand(time(NULL));
        op = 1;
        //Criando o primeiro nó da lista
        lista = (ptr_no) malloc(sizeof(no));
        lista->dado = 0;
        lista->proximo = NULL;
        //Laço principal
        while (op != 0)
            {
                system("cls");
                menu_mostrar();
                scanf("%d", &op);
                menu_selecionar(op);
        }
        system("Pause");
    return 0;
}
