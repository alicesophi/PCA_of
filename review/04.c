/* Criar um programa que dada uma sequência de n números a imprima na
ordem inversa à da leitura. (o comprimento máximo da sequência é 100 pelo que n tem
que ser um número menor que 100)*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int *v;
	int i, tam;
	
	printf("Digite a quantidade da sequencia: ");
	scanf("%d", &tam);
	
	v = (int*)malloc(tam*sizeof(int));
	
	for(i=0; i<tam; i++){
		printf("%d: ", i+1);
		scanf("%d", v+i); //nao posso usar o *(v+i) para ler
	}
	
	//imprimir inversa
	
	for(i=tam-1; i>=0; i--){
		printf("%d ", *(v+i));
	}

	return 0;
}
