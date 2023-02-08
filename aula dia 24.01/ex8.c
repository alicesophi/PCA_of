#include <stdio.h>
#define TAMANHO 100

int produto_escalar(int x[], int y[], int tamanho);

int main(){
	int x[TAMANHO];
	int y[TAMANHO];
	int i, n, prod_escalar;

	printf("Digite a quantidade de valores que voce deseja armazenar nos vetores: ");
	scanf("%d", &n);

	for (i=0; i < n; i++){
	    printf("Digite os valores do vetor X: ");
		scanf(" %d", &x[i]);
	}
	for (i=0; i < n; i++){
	    printf("Digite os valores do vetor Y: ");
		scanf(" %d", &y[i]);
	}

	prod_escalar = produto_escalar(x, y, n);
	printf("O Produto Escalar eh: %d", prod_escalar);

	return 0;
}

int produto_escalar(int x[], int y[], int tamanho){
    int i, p_esc=0;
    for(i=0; i<tamanho; i++){
       p_esc += x[i] * y[i];
    }
    return p_esc;
}

