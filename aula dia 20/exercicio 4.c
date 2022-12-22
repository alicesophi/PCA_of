#include <stdio.h>
int main(){
	int numero, maior=0, menor, i;
	
	for(i=1; i<=20; i++){
		printf("Digite um numero: ", numero);
		scanf("%d", &numero);
		
		if(numero> maior){
			maior=numero;
		}
		if(i==1){
			menor=numero;
		}
		if(numero< menor){
			menor=numero;
		}
		
		
	}
	
	printf("Numero maior: %d", maior);
	printf("\nNumero menor: %d", menor);
	
	return 0;
}
