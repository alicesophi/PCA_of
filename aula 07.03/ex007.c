#include <stdio.h>
#define TAMANHO 100

void mm(int v[], int tam, int* min, int*max);
int main(){
	int v[TAMANHO];
	int min, max, qtd, i;
	
	printf("Digite a quantidade de elementos que voce deseja armazenar no vetor: ");
	scanf("%d", &qtd);
	
	for(i=0; i<qtd; i++){
		printf("Digite o elemento %d: ", i+1);
		scanf("%d", &v[i]);
	}
	
	mm(v, qtd, &min, &max);
	printf("Valor Minimo: %d\nValor Maximo: %d", min, max);
	
	return 0;
}

void mm(int v[], int tam, int* min, int* max){
	int i;
	
	*min = v[0];
	*max = v[0];
	
	for(i=0; i<tam; i++){
		if(*min>v[i]){
			*min = v[i];
		}
		if(*max<v[i]){
			*max = v[i];
		}
	}
}
