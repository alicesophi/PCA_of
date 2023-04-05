/*Construa um algoritmo que efetue e apresente o resultado da soma
entre duas matrizes 3 x 5. Inicialize a matriz com valores quaisquer e imprima o
resultado na tela.*/

#include <stdio.h>

int main(){
	int i, j;
	int **m1;
	int **m2; 
	int **m3;
	
	m1 = (int **)malloc(3*sizeof(int*));
	
	for(i=0; i<3; i++){
		m1[i] = (int*)malloc(5*sizeof(int));
	}
	
	m2 = (int**)malloc(3*sizeof(int*));
	
	for(i=0; i<3; i++){
		m2[i] = (int*)malloc(5*sizeof(int));
	}
	
	m3 = (int**)malloc(3*sizeof(int*));
	
	for(i=0; i<3; i++){
		m3[i] = (int*)malloc(5*sizeof(int));
	}
	
	printf("\nInsira os valores da matriz 1:\n");
	
	for(i=0; i<3; i++){
		for(j=0; j<5; j++){
			printf("Digite linha %d e coluna %d: ", i+1, j+1);
			scanf("%d", &m1[i][j]);
		}
	}
	printf("\nInsira os valores da matriz 2:\n");
	for(i=0; i<3; i++){
		for(j=0; j<5; j++){
			printf("Digite linha %d e coluna %d: ", i+1, j+1);
			scanf("%d", &m2[i][j]);
		}
	}

	for(i=0; i<3; i++){
		for(j=0; j<5; j++){
			m3[i][j] = m1[i][j]+m2[i][j];
		}
	}
	
	printf("\nMatriz soma:\n");
	
	for(i=0; i<3; i++){
		for(j=0; j<5; j++){
			printf("%d ", m3[i][j]);
		}
		printf("\n");
	}

	return 0;
}
