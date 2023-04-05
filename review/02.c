/*2 Criar uma função que efetue e apresente o resultado da soma entre
duas matrizes nxn.*/

#include <stdio.h>
#include <stdlib.h>

void soma(int **m1,int **m2,int n);

int main(){
	int **m1, **m2;
	int i, j, n;
	
	printf("Digite a ordem da matriz quadrada: ");
	scanf("%d", &n);
	
	m1 = (int**)malloc(n*sizeof(int*));
	
	for(i=0; i<n; i++){
		m1[i] = (int*)malloc(n*sizeof(int));
	}
	
	m2 = (int**)malloc(n*sizeof(int*));
	
	for(i=0; i<n; i++){
		m2[i] = (int*)malloc(n*sizeof(int));
	}
	
	printf("\nInsira os valores da matriz 1:\n");
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("Linha %d Coluna %d: ", i+1, j+1);
			scanf("%d", &m1[i][j]);
		}
	}
	
	printf("\nInsira os valores da matriz 2:\n");
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("Linha %d Coluna %d:", i+1, j+1);
			scanf("%d", &m2[i][j]);
		}
	}
	
	soma(m1, m2, n);

}
void soma(int **m1, int **m2, int n){
	int **m3;
	int i, j;
	
	m3 = (int**)malloc(n*sizeof(int*));
	
	for(i=0; i<n; i++){
		m3[i] = (int*)malloc(n*sizeof(int));
	}
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			m3[i][j] = m1[i][j] + m2[i][j];
		}
	}
	
	printf("\nImprimindo a matriz soma\n");
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%d ", m3[i][j]);
		}
		printf("\n");
	}
}
