#include <stdio.h>
int main(){
	int numero, soma, i;
	
	for(i=1; i<=50; i++){
		printf("Digite um numero: ", numero);
		scanf("%d", &numero);
		
		if(numero> 100 && numero<200){
			if(numero%2 != 0){
				soma +=numero;
			}
			
		}
		
	}
	
	printf("A soma eh: %d", soma);
	
	return 0;
}
