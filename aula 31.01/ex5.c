#include <stdio.h>
int main(){
	char string[200];
	char string_codificada[200];
	int i, chave = 3;
	
	printf("Digite uma frase: ");
	scanf("%s", string);
	
	while(string[i] != '\0'){
		if(string[i] >= 'a' && string[i]<= 'z'){
			string_codificada[i] = ((string[i] - 'a' + chave) % 26) + 'A';
		}
		else if(string[i] >= 'A' && string[i] <= 'Z'){
            string_codificada[i] = ((string[i] - 'A' + chave) % 26) + 'A';
        }
		else{
			string_codificada[i] = string[i];
		}
		i++;
 	}
 	string_codificada[i] = '\0';
 	
 	printf("Nova string: %s\n", string_codificada);
 	return 0 ;
}
