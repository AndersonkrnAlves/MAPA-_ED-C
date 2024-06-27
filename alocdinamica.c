#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int *ptr;
	printf("Endereco: %p\n\n", ptr);
	ptr = (int *) malloc(sizeof(int));
	
	printf("Endereco: %p\n Valor: %d\n\n", ptr, *ptr);
	*ptr = 10;
	printf("Endereco: %p\n Valor: %d\n\n", ptr, *ptr);
	
	int x;
	x = 20;
	ptr = &x;
	printf("Endereco: %p\n Valor: %d\n\n", ptr, *ptr);
	
	ptr = (int *) malloc(sizeof(int));
	printf("Endereco: %p\n Valor: %d\n\n", ptr, *ptr);
		
	return 0;
}
