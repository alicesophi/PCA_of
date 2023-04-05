/*Construa um algoritmo que efetue e apresente o resultado da soma
entre duas matrizes 3 x 5. Inicialize a matriz com valores quaisquer e imprima o
resultado na tela.*/

#include <stdio.h>

int main(){
	int i, j, m, n;
	int **m1;
	int **m2; 
	int **m3;
	
	printf("Digite a ordem das matrizes(m e n): ");
	scanf("%d %d", &m, &n);
	
	m1 = (int **)malloc(m*sizeof(int*));
	
	for(i=0; i<m; i++){
		m1[i] = (int*)malloc(n*sizeof(int));
	}
	
	m2 = (int**)malloc(m*sizeof(int*));
	
	for(i=0; i<m; i++){
		m2[i] = (int*)malloc(n*sizeof(int));
	}
	
	m3 = (int**)malloc(m*sizeof(int*));
	
	for(i=0; i<m; i++){
		m3[i] = (int*)malloc(n*sizeof(int));
	}
	
	printf("\nInsira os valores da matriz 1:\n");
	
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			printf("Digite linha %d e coluna %d: ", i+1, j+1);
			scanf("%d", &m1[i][j]);
		}
	}
	printf("\nInsira os valores da matriz 2:\n");
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			printf("Digite linha %d e coluna %d: ", i+1, j+1);
			scanf("%d", &m2[i][j]);
		}
	}

	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			m3[i][j] = m1[i][j]+m2[i][j];
		}
	}
	
	printf("\nMatriz soma:\n");
	
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			printf("%d ", m3[i][j]);
		}
		printf("\n");
	}

	return 0;
}
