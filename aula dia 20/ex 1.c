#include <stdio.h>
int main(){
	float numero, soma, i;
	
	for(i=1; i<=5; i++){
		printf("Digite um numero: ", numero);
		scanf("%f", &numero);
		
		soma +=numero;
		
	}
	
	printf("A soma eh: %.1f", soma);
	
	return 0;
}
