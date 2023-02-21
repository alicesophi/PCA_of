/*Faça um programa que, dada uma string, diga se ela e um palíndromo ou não. Lembrando que um palíndromo e uma palavra que tenha a propriedade 
de poder ser lida tanto da direita para a esquerda como da esquerda para a direita. Exemplo: ovo, arara, Anotaram a data da maratona.*/

#include <stdio.h>
#include <string.h>

int main(){
	char string[100];
	int i=0, tam, diferentes=0;
	
	printf("Digite uma palavra/frase: ");
	scanf("%s", string);
	
	tam = strlen(string);
	tam--;

	while(tam >= i){
		if(string[i] != string[tam]){
			diferentes++;
		}
		i++;
		tam--;
		
	}

	if(diferentes==0){
		printf("Eh palindroma");
	}
	else{
		printf("Nao eh palindroma");
	}
}
