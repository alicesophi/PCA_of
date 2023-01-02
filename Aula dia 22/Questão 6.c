#include <stdio.h>
int main(){
	int n, soma=0, dobro, i;
	
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	dobro = 2*n;
	
	for(i=1; i<=n; i++){
		if(n % i == 0){
			soma = soma + i;
		}
	}
		if(soma==dobro){
			printf("O numero eh perfeito!");
		}
		else{
			printf("O numero nao eh perfeito");
		}
		
	return 0;
}
