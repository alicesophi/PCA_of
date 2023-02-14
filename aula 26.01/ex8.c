#include <stdio.h>
#define TAMANHO 100

int multiplicar_matrizes(int m1, int n1, int m2, int n2, int a[][TAMANHO], int b[][TAMANHO], int c[][TAMANHO]);

int main() {
    int m1, n1, m2, n2, i, j;
    int a[TAMANHO][TAMANHO];
    int b[TAMANHO][TAMANHO];
    int c[TAMANHO][TAMANHO];
    
    printf("Insira o número de linhas da primeira matriz: ");
    scanf("%d", &m1);
    
    printf("Insira o número de colunas da primeira matriz: ");
    scanf("%d", &n1);
    
    printf("Insira a primeira matriz:\n");
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n1; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("Insira o número de linhas da segunda matriz: ");
    scanf("%d", &m2);
    
    printf("Insira o número de colunas da segunda matriz: ");
    scanf("%d", &n2);
    
    printf("Insira a segunda matriz:\n");
    for (int i = 0; i < m2; i++) {
        for (int j = 0; j < n2; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    
    int pode_multiplicar = multiplicar_matrizes(m1, n1, m2, n2, a, b, c);
    if (pode_multiplicar == 0) {
        printf("Não é possível multiplicar as matrizes.\n");
        return 0;
    }
    
    printf("Resultado da multiplicação das matrizes:\n");
    for (i = 0; i < m1; i++) {
        for (j = 0; j < n2; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

int multiplicar_matrizes(int m1, int n1, int m2, int n2, int a[][TAMANHO], int b[][TAMANHO], int c[][TAMANHO]){
    int i, j, k;
    
    if (n1 != m2) {
        return 0;
    }
    
    for (i = 0; i < m1; i++) {
        for (j = 0; j < n2; j++) {
            c[i][j] = 0;
            for (k = 0; k < n1; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    
    return 1;
}
