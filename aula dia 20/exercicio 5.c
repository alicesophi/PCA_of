#include <stdio.h>
int main(){
	int numero, maior=0, menor, i;
	
	for(i=1; i<=20; i++){
		printf("Digite um numero: ", numero);
		scanf("%d", &numero);
		
		if(numero>= 0){
			if(numero> maior)
				maior=numero;
			
			if(i==1)
				menor=numero;
			
			if(numero< menor)
				menor=numero;
		
		}		
		
