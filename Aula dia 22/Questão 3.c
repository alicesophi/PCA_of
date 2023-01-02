#include <stdio.h>
int main(){
    int numeros_positivos, soma_pares, soma_impares, quantidade, i;
    
    printf("Quantos valores inteiros positivo voce deseja digitar? ");
    scanf("%d", &quantidade);
    
    for(i=1; i<=quantidade; i++){
        printf("Digite o numero: ");
        scanf("%d", &numeros_positivos);
        
        if(numeros_positivos % 2 == 0){
            soma_pares += numeros_positivos;
        }
        else{
            soma_impares += numeros_positivos;
        }
    }
    
    printf("Soma dos pares: %d", soma_pares);
    printf("\nSoma dos impares: %d", soma_impares);
  
    return 0;
}
