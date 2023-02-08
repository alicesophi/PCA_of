#include <stdio.h>


void encontrar_n(int m1[3][3],int numero);

int main(){
    int m1[3][3];
    int i, j, k, result;
   
    
    printf("Digite valor para os elementos da matriz\n");
    
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("Matriz 1 - Elemento[%d][%d] = ", i, j);
            scanf("%d", &m1[i][j]);
            
            //printf("%d", result[i][j]);
            
            
        }
    }
    
    printf("Digite um número que vc deseja encontrar nos elementos: ");
    scanf("%d", &k);
    
    encontrar_n(m1, k);
    
    return 0;
}

void encontrar_n(int m1[3][3],int numero){
    int i, j;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if (m1[i][j] == numero){
                printf("O numero foi encontrado no elemento m[%d][%d]", i, j);
            }
            else{
                printf("Nao encontrado"); 
            }
        }
    }
}
