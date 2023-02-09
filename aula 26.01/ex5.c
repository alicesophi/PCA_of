/* Dada uma matriz 5x5, elabore um algoritmo que imprima:
A diagonal principal
A diagonal secundária
A soma da linha 4
A soma da coluna 2
Tudo, exceto a diagonal principal*/

#include<stdio.h>
#define TAMANHO 5

void imprimir_dp(int matriz[][TAMANHO]);
void imprimir_sec(int matriz[][TAMANHO]);
void soma_linha(int matriz[4][TAMANHO]);
void soma_coluna(int matriz[TAMANHO][TAMANHO]);

int main(){
    int matriz[TAMANHO][TAMANHO];
    int i, j;
    
    for(i=0; i<TAMANHO; i++){
        for(j=0; j<TAMANHO; j++){
            printf("Digite o elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    imprimir_dp(matriz);
    imprimir_sec(matriz);
    soma_linha(matriz);
    soma_coluna(matriz);
}

void imprimir_dp(int matriz[][TAMANHO]){
    int i;
    
    printf("Diagonal principal:\n");
    for(i=0; i<TAMANHO; i++){
        printf("%d ", matriz[i][i]);
            }
    printf("\n");
        }
    
void imprimir_sec(int matriz[][TAMANHO]){
    int i, j;
    
    printf("Diagonal secundaria:\n");
    for(i=0; i<TAMANHO; i++){
        for(j=TAMANHO-1; j>=0; j--){
            if(i+j == TAMANHO-1){
                printf("%d ", matriz[i][j]);
            }
        }
        
    }
    printf("\n\n");
}

void soma_linha(int matriz[4][TAMANHO]){
    int i, soma=0;
    
    for(i=0; i<=TAMANHO; i++){
        soma += matriz[4][i];

    }
    printf("Soma da linha 4: %d\n", soma);
}

void soma_coluna(int matriz[TAMANHO][TAMANHO]){
    int i, soma=0;
    for(i=0; i<=TAMANHO-1; i++){
        soma+=matriz[i][2];
    }
    printf("Soma da coluna 2: %d\n", soma);
}
