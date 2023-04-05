#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i, j, m, n;
	double **mat1, **mat2, **mat3;
	
	printf("Digite a ordem das matrizes[m e n]: ");
	scanf("%d %d", &m, &n);
	
	mat1 = (double **) malloc(m * sizeof(double *));
	
	for(i=0; i < m; i++)
		mat1[i] = (double *) malloc(n * sizeof(double));
	
	mat2 = (double **) malloc(m * sizeof(double *));
	
	for(i=0; i < m; i++)
		mat2[i] = (double *) malloc(n * sizeof(double));
	
	mat3 = (double **) malloc(m * sizeof(double *));
	
	for(i=0; i < m; i++)
		mat3[i] = (double *) malloc(n * sizeof(double));
	
	printf("\nInsira os valores da matriz 1:\n");
	
	for(i=0; i < m; i++){
		for(j=0; j < n; j++){
			printf("\nDigite um numero: ");
			scanf("%lf", &mat1[i][j]);
		}
	}
	
	printf("\nInsira os valores da matriz 2:\n");
	
	for(i=0; i < m; i++){
		for(j=0; j < n; j++){
			printf("\nDigite um numero: ");
			scanf("%lf", &mat2[i][j]);
		}
	}
	
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			mat3[i][j] = mat1[i][j] + mat2[i][j];
		}
	}
	
	printf("\nMatriz resultante da soma:\n");
	
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			printf("%.2lf ", mat3[i][j]);	
		}
		printf("\n");
	}
	
	
	
	return 0;
}
