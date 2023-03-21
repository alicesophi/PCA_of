/* Crie uma função para somar dois arrays. Esta função deve receber
 dois arrays e retornar a soma em um terceiro array. 
Caso o tamanho do primeiro e segundo array seja diferente então a 
função retornará ZERO (0). Caso a função seja concluída com sucesso 
a mesma deve retornar o valor UM (1). Utilize aritmética de ponteiros para manipulação do array.
*/
#include <stdio.h>
#define TAMANHO 100

int soma_arrays(int *v1, int tam1, int *v2, int tam2);

int main(){
	int v1[TAMANHO];
	int v2[TAMANHO];
	int v3, qtdv1, qtdv2, i;
	
	printf("Digite o numero total de elementos que voce deseja digitar no v1: ");
	scanf("%d", &qtdv1);
	
	for(i=0; i<qtdv1; i++){
		printf("Elemento %d do v1: ", i+1);
		scanf("%d", (v1+i));
	}
	
	printf("Digite o numero total de elementos que voce deseja digitar no v2: ");
	scanf("%d", &qtdv2);
	
		
	for(i=0; i<qtdv2; i++){
		printf("Elemento %d do v2: ", i+1);
		scanf("%d", (v2+i));
	
	}
	soma_arrays(v1, qtdv1, v2, qtdv2);
	return 0;
}

int soma_arrays(int *v1, int tam1, int *v2, int tam2){
	int v3[TAMANHO];
	int soma, i;
	
	if(tam1 == tam2){
		for(i=0; i<tam1; i++){
			v3[i]= v1[i] + v2[i];
		}
		
		for(i=0; i<tam1; i++){
			printf("%d ", v3[i]);
		}
		return 1;
	}
	else{
		printf("Os arrays sao diferentes.\n");
		return 0;
	}
}
