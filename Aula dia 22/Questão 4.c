#include <stdio.h>
int main(){
	int numero, i, result=0;
	
    printf("Digite um numero: ", numero);
	scanf("%d", &numero);
	
	for(i=2; i<=numero/2; i++){
	    if (numero % i == 0) {
            result++;
            break;
        }
    }
 
    if (result == 0)
        printf("Eh um numero primo!");
	else
	    printf("Nao eh um numero primo!");
		

    return 0;
}
