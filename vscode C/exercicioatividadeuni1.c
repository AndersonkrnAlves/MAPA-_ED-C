#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int *ptr;
    ptr = (int *) malloc(sizeof(int));
    *ptr = 42;//letra c
    printf("Endereco: %p\n \nValor: %d\n\n", ptr, *ptr);// letra d
    system("Pause");
    return 0;
}
