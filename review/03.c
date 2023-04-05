/* Faça um programa que multiplica uma matriz 3 x 3 de inteiros por um
escalar k e imprima o resultado na tela. O usuário deve fornecer os valores da matriz e
de k.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int **m1;
	int i, j, k;
	int **m2;
	
	m1 = (int**)malloc(3 * sizeof(int*));
	
	for(i=0; i<3; i++){
		m1[i] = (int*)malloc(3*sizeof(int));
	}
	
	printf("Inserindo os valores na matriz:\n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("Linha %d, coluna %d: ", i+1, j+1);
			scanf("%d", &m1[i][j]);
		}
	}
	
	printf("Digite um numero: ");
	scanf("%d", &k);
	
	m2 = (int**)malloc(3*sizeof(int*));
	
	for(i=0; i<3; i++){
		m2[i] = (int*)malloc(3*sizeof(int));
	}
	
	//fazendo a multiplicação:
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			m2[i][j] = m1[i][j] * k;
		}
	}
	
	printf("\nMatriz atualizada:\n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("%d ", m2[i][j]);
		}
		printf("\n");
	}
	
}
