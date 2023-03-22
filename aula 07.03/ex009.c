#include <stdio.h>
#include <string.h>

void retorna_vetor(char *str, char let, int *pos, int *cont);

int main(){
	char str[10] = "banana";
	char letra = 'a';
	int pos[10], cont, i;
	
	retorna_vetor(str, letra, pos, &cont);	
    
	printf("Posicoes: ");
	for(i=0; i<cont; i++){
		printf("v[%d] ", *(pos+i));
	}
	
	printf("\nQuantas vezes a letra se repetiu na string: %d", cont);

	return 0;
}

void retorna_vetor(char* str, char let, int *pos, int *cont){
	int i, c=0;
	
	for(i=0; i<strlen(str); i++){
		if(let == *(str+i)){  
			*(pos+c) = i; 
			c++; 
		}
	}
	*cont = c;
}
