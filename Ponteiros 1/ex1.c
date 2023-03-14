#include <stdio.h>

void imprimir_vet(float *p1, float *p2);

int main(){
	float vet[4] = {1.5, 1.6, 1.7, 1.8};
	float vetor[2] = {1.0, 2.0};
	float v[3] = {3.0, 6.0, 9.0};

	printf("Vetor 1:\n");
	imprimir_vet(&vet[0], &vet[3]); //passando o intervalo de posições
	printf("Vetor 2:\n");
	imprimir_vet(&vetor[0], &vetor[1]); 
	printf("Vetor 3:\n");
	imprimir_vet(&v[0], &v[2]); 
	return 0;
}

void imprimir_vet(float *p1, float *p2){

	for(p1; p1<=p2; p1++){  //p1 recebe vet[0], e ele incrementa ate atingir p2=v[3]
		printf("%.1f\n", *p1);
	}
	
}
