#include <stdio.h>
#define TAMANHO 100

void imprimir_inversa(int v[], int tamanho);

int main(){
	int v[TAMANHO];
	int i, n;
	
	printf("Digite a quantidade da sequencia de numeros desejada: ");
	scanf("%d", &n);

	for (i=0; i < n; i++){
	    printf("Digite o %d numero: ", i+1);
		scanf("%d", &v[i]);
	}
	imprimir_inversa(v, n);
	return 0;
}

void imprimir_inversa(int v[], int tamanho){
    int i;
    for(i=tamanho-1; i>=0; i--){
        printf("%d\n", v[i]);
    }
}
