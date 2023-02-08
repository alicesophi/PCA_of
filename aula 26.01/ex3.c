#include <stdio.h>


void multiplicar_m(int m1[3][3],int escalar,int saida[3][3]);

int main(){
    int m1[3][3];
    int i, j, k, result[3][3];
   
    
    printf("Digite valor para os elementos da matriz\n");
    
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("Matriz 1 - Elemento[%d][%d] = ", i, j);
            scanf("%d", &m1[i][j]);
            
            //printf("%d", result[i][j]);
            
            
        }
    }
    
    printf("Digite um número que vc deseja multiplicar pelos elementos: ");
    scanf("%d", &k);
    
    multiplicar_m(m1, k, result);
    
    return 0;
}

void multiplicar_m(int m1[3][3],int escalar,int saida[3][3]){
    int i, j;
    
    for(i=0; i<3; i++){
        printf("\n");
        for(j=0; j<3; j++){
            saida[i][j] = m1[i][j] * escalar;
            printf("%d ", saida[i][j]);

        }
    }
}
