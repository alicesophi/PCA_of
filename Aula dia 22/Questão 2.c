#include <stdio.h>
int main(){
	float numero, maior=0, menor, i;
	
	for(i=1; i<=15; i++){
		printf("Digite um numero: ", numero);
		scanf("%f", &numero);
		
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
	
	printf("Numero maior: %.1f", maior);
	printf("\nNumero menor: %.1f", menor);
	
	return 0;
}
