#include <stdio.h>
#include <string.h>

int main(){
	char string[100];
	int i, j, diferentes=0;
	
	printf("Digite a palavra/frase: ");
	scanf("%s", string);
	
	j = strlen(string);
	j--;
	
	while(j>=i){
		if(string[i] != string[j]){
			diferentes++;
		}
		i++;
		j--;
	}
	
	if(diferentes == 0){
		printf("Eh um palindromo");
	}
	
	else{
		printf("Nao eh um palindromo");
	}
	
	return 0;
}
