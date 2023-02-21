#include <stdio.h>

void eh_viciado(int lados[]);

int main(){
	int lados[6];
	int i, qt_lancamentos, face;
	
	printf("Quantos lancamentos voce deseja fazer: ");
	scanf("%d", &qt_lancamentos);
	
	for(i=1; i<=6; i++){
		lados[i] = 0;
	}
	for(i = 0; i<qt_lancamentos; i++){
		printf("Digite a face do lancamento %d: ", i+1);
		scanf("%d", &face);
		lados[face]++;
	}
	
	eh_viciado(lados);
	
	return 0;
}

void eh_viciado(int lados[]){
	int i, soma=0;
	float freq_esperada=0;
	
	for(i=1; i<=6; i++){
		if(lados[i] != 0){
			printf("A face %d caiu %d vez/vezes", i, lados[i]);
		}
		soma += lados[i];
	}
	freq_esperada = soma/6.0;
	
	for(i=1; i<=6; i++){
		if(lados[i] >= freq_esperada*1.5){
			printf("O dado eh viciado na face %d", i);
			return;
		}
	}
	printf("O dado nao eh viciado");
}

