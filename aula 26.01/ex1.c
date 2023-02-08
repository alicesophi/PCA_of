Construa um algoritmo que efetue e apresente o resultado da 
soma entre duas matrizes 3 x 5. Inicialize a matriz com valores 
quaisquer e imprima o resultado na tela.*/

#include <stdio.h>
int main(){
    int mat1[3][5];
    int mat2[3][5] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    int soma[3][5];
    int i, j;
     
    printf("Matriz 1:\n");                    
    for (i=0; i<3; i++){
        for(j=0; j<5; j++){
            mat1[i][j] = 1;
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
    printf("Matriz 2:\n");
    for (i=0; i<3; i++){
        for(j=0; j<5; j++){
            mat2[i][j];
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Matriz soma:\n");
    for (i=0; i<3; i++){
        for(j=0; j<5; j++){
            soma[i][j] = mat1[i][j] + mat2[i][j];
            printf("%d ", soma[i][j]);
        }
        printf("\n");
    }
    
     
