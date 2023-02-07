#include <stdio.h>
#define TAMANHO 100

int imprimir_fatorial(int v[], int tamanho, int fatorial[]);
void imprimirvetor(int v[], int size);

int main(){
	int v[TAMANHO];
	int f[TAMANHO];
	int i, n, fat;

	printf("Digite a quantidade da sequencia de numeros desejada: ");
	scanf("%d", &n);

	for (i=0; i < n; i++){
	    printf("Digite o %d numero: ", i+1);
		scanf(" %d", &v[i]);
	}
	imprimirvetor(v,n);
	fat = imprimir_fatorial(v, n, f);
	imprimirvetor(f, fat);
	return 0;
}

int imprimir_fatorial(int v[], int tamanho, int fatorial[]){
    int i, n_fat = 0;
	for(i=0; i<tamanho; i++){
		for (fatorial[i] = 1; v[i] > 1; v[i]--) {
            fatorial[n_fat] *= v[i];
        }
        
    n_fat++;
		
	}
return n_fat; 
}

void imprimirvetor(int v[], int size){
    int i;
    printf("\n");
    for (i=0;i<size;i++){
        printf ("%d\n",v[i]);
    }
    printf("\n");
}
