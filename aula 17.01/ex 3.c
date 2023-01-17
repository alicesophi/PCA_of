#include <stdio.h>
#include <math.h>
int scanInt(){
	int n;
 	do{
		printf("Digite um numero inteiro positivo: ");
		scanf("%d", &n);
	}while(n<0);
	return  n;
}

int hiperFatorial(int n){
	int i, hiper=1;
	for(i=0; i<=n; i++){
		hiper*= pow(i, i);
	}
	return hiper;
}

int main(){
	int n;,
	n = scanInt();
	printf("\nO hiper fatorial e: %d", hiperFatorial(n));
	return 0;
}
