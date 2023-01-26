#include <stdio.h>
int main(){
	int vetor[100];
	int i=0, n;
	
	printf("Digite a quantidade da sequencia de numeros desejada: ");
	scanf("%d", &n);
	printf("Digite %d elemntos: ",n );
	
	for (i=0; i < n; i++){
		scanf("%d", &vetor[i]);
	}
	
	printf("Ordem inversa: ");
	for (i = n-1; i >=0; i--){
		printf("%d", &vetor[i]);
		
	}
	printf("\n");
	return 0;
}
