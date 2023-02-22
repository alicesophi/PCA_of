/* Um conjunto pode ser representado por um vetor da seguinte forma: V[0] é o tamanho do conjunto; V[1], V[2], etc. são os elementos do conjunto
(sem repetições).
(a) Faça uma função chamada intersecção que dados dois conjuntos de números inteiros A e B, constrói um terceiro conjunto C q*/

#include <stdio.h>
#define tam 100

void interseccao(int tamA, int tamB, int A[], int B[]);

int main(){
	int A[tam];
	int B[tam];
	int i, qtdA, qtdB;
	
	printf("Digite o tamanho do vetor A: ");
	scanf("%d", &qtdA);
	
	for(i=1; i<=qtdA; i++){
		printf("Digite o A[%d] = ", i);
		scanf("%d", &A[i]);
	}
	
	printf("Digite o tamanho do vetor B: ");
	scanf("%d", &qtdB);
	
	for(i=1; i<=qtdB; i++){
		printf("Digite o B[%d] = ", i);
		scanf("%d", &B[i]);
	}
	printf("Tamanho dos conjuntos:\n");
	printf("A[0] = %d\n", qtdA);
	printf("B[0] = %d", qtdB);
	
	interseccao(qtdA, qtdB, A, B);
	
	return 0;
}

void interseccao(int tamA, int tamB, int A[], int B[]){
	int C[tam];
	int i, j, tam_interseccao=0;
	
	for(i=1; i<=tamA; i++){
		for(j=1; j<=tamB; j++){
			if(A[i] == B[j]){
				C[tam_interseccao] = A[i];
				tam_interseccao++;
			}
		}
	
	}
	
	printf("\nConjunto Interseccao:");
	
	for(i=0; i<tam_interseccao; i++){
		printf("%d ", C[i]);
	}
	
	printf("\nTamanho do conjunto interseccao:");
	printf("\nC[0] = %d", tam_interseccao);
}
