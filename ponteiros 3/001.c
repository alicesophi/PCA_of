/*Faça um programa que calcula a média e o desvio padrão das notas de uma turma;
- O programa deve solicitar no início a quantidade de alunos na turma e alocar dinamicamente um vetor de float onde as notas dos alunos 
digitadas devem ser armazenadas;
- Você deve criar uma função “mediaDesvio” para calcular a média e o desvio padrão e retornar estes valores através de parâmetros passados 
por referência (ponteiros). A função recebe como parâmetro o ponteiro para o vetor, a quantidade de elementos no vetor, e dois ponteiros: 
media e desvio onde deve guardar os resultados;*/

#include <stdio.h>
#include <math.h>

void mediaDesvio(float *vet, int qtd_v, float *media, float *desvio);

int main(){
	int qtd_alunos, i;
	float *notas, media, desvio;
	
	printf("Digite a quantidade de alunos: ");
	scanf("%d", &qtd_alunos);
	notas = (float *)malloc(qtd_alunos * sizeof(float));
	
	if(notas == NULL){
		printf("Erro: nao foi possivel alocar memoria!");
		return -1;
	}
	
	for(i=0; i<qtd_alunos; i++){
		printf("Nota do aluno %d: ", i+1);
		scanf("%f", notas+i);
	}
	
	mediaDesvio(notas, qtd_alunos, &media, &desvio);
	
	printf("Media: %.2f\n", media);
	printf("Desvio padrao: %.2f", desvio);
	
	//libera a memoria alocada para o vetor de notas
	free(notas);
	return 0;
}

void mediaDesvio(float *vet, int qtd_v, float *media, float *desvio){
	float soma = 0.0;
	float desvio_quad = 0.0;
	int i;
	
	for(i=0; i<qtd_v; i++){
		soma += *(vet+i);
	}
	
	*media = soma/qtd_v;
	
	for(i=0; i<qtd_v; i++){
		desvio_quad += pow(*(vet+i) - *media, 2);
	}
	*desvio = sqrt(desvio_quad/qtd_v);
}
