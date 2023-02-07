#include <stdio.h>
#include <math.h>

int main(){
    int i, n, ocorre[6], lado;
    
    printf("Digite quantas vezes o dado foi lancado: ");
    scanf("%d", &n);
    
    for(i = 1; i <= 6; i++)	{
	    ocorre[i] = 0;	//como eh o dado
	}
	
    for(i=1; i<=n; i++){ //entrada dos valores do dado
        printf("Digite o numero da face: ");
        scanf("%d", &lado);
        ocorre[lado]++; //incremento de vetor, dos nº da face
        
    }
    
    for(i=1; i<=6; i++){ //contagem das faces
        if (ocorre[i] != 0){ //se o vetor for diferente de 0:
            printf("A face %d caiu %d vezes.\n", i, ocorre[i]);
        }
    }
    
   return 0;
}
