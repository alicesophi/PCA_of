#include <stdio.h>
#define TAMANHO 100

int imprimir_par(int v[], int tamanho, int par[]);
void imprimirvetor(int v[], int size);

int main(){
	int v[TAMANHO];
	int p[TAMANHO];
	int i, n, npar;

	printf("Digite a quantidade da sequencia de numeros desejada: ");
	scanf("%d", &n);

	for (i=0; i < n; i++){
	    printf("Digite o %d numero: ", i+1);
		scanf(" %d", &v[i]);
	}
	imprimirvetor(v,n);
	npar=imprimir_par(v, n, p);
	imprimirvetor(p,npar);
	return 0;
}

int imprimir_par(int v[], int tamanho, int par[]){
    int i, n_par=0;
    for(i=0; i<tamanho; i++){
       if(v[i] % 2 == 0){
            par[n_par] = v[i];
            n_par++;
        }
    }
    return n_par;
}

void imprimirvetor(int v[], int size){
    int i;
    printf("\n");
    for (i=0;i<size;i++){
        printf ("%d\n",v[i]);
    }
    printf("\n");
}


