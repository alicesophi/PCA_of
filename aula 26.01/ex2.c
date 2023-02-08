/*Criar uma função que efetue e apresente o resultado da soma 
entre duas matrizes.*/

#include <stdio.h>
#define MAX 100

void imprimir_soma(int mat1[MAX][MAX],int mat2[MAX][MAX], int imat1, int jmat1, int imat2, int jmat2);

int main(){
    int mat1[MAX][MAX] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    int mat2[MAX][MAX] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    imprimir_soma(mat1, mat2, 5,3,5,3);
    return 0;
}

void imprimir_soma(int mat1[MAX][MAX],int mat2[MAX][MAX], int imat1, int jmat1, int imat2, int jmat2){ 
    int i, j;
    if(imat1 != imat2 || jmat1 != jmat2){
        printf("As matrizes não tem a mesma ordem");
        return;
    }
    printf("Matriz soma:\n");
    for (i=0; i<imat1; i++){
        printf("\n");
        for(j=0; j<jmat1; j++){
            printf("%d ", mat1[i][j]+mat2[i][j]);
        }
       
    }
}
