/* Escreva uma função que encontra um valor em um vetor de inteiros e retorna um ponteiro para o primeiro endereço onde este valor foi encontrado ou NULL caso o valor 
não esteja no vetor;
- A função recebe como parâmetro dois ponteiros para inteiros (os endereços inicial e final) e deve utilizar notação de ponteiros não de vetores;
- Deve ser criada uma função main() para testar a função implementada. Na função main deve ser declarado um vetor de tamanho 10, com três ocorrências do valor 2;
- A main() deve utilizar a função criada para encontrar  e imprimir os endereços de memória de todas as ocorrências do valor 2, em um laço, até que todo o vetor tenha 
sido pesquisado.
- Defina a constante NULL se necessário.*/

#include <stdio.h>

int *encontra(int *endInicial, int *endFinal);

int main(){
	int v[] = {1, 2, 3, 2, 5, 6, 7, 8, 2};
	int *ponteiro;
	int i;
	
	for(i=0; i<10; i++){
		ponteiro = encontra(&v[i], &v[i]);
		if(ponteiro != NULL){
			printf("2 foi encontrado no endereço: %d\n", ponteiro);
		}
	}
	return 0;
}

int *encontra(int *endInicial, int *endFinal){
	int *i;
	
	for(i=endInicial; i<edFinal; i++){
		if(*i==2){
			return i;
		}
	}
	return NULL;
}
