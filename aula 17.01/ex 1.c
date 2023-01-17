#include <stdio.h> 

int main(){
	float nota_f, maior=0, menor=0, cont=0, soma=0, media=0;
	
	printf("Digite a media final do aluno: ");
	scanf("%f", &nota_f);
	
	while(nota_f>=0){
		cont++;
		soma = soma + nota_f;
		
		if(nota_f>maior){
			maior = nota_f;
		}
		if(nota_f<menor){
			menor = nota_f;
		}
		if(cont==1){
		    menor = nota_f;
		}
		printf("Digite a media final do aluno: ");
		scanf("%f", &nota_f);
    }
	
	media = soma/cont;
	
   	printf("Maior nota: %.2f", maior);
	printf("\nMenor nota: %.2f", menor);
	printf("\nMedia: %.2f", media);
}
