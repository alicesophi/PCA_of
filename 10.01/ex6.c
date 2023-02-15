#include <stdio.h>
#define MAX 50

void transf_binario(int n);

int main(){
	int num;

	printf("Digite um numero: ");
	scanf("%d", &num);

    transf_binario(num);
    
    return 0;
    
}
    
void transf_binario(int n){
  int vet_bin[MAX];
	int i = 0, j;
	int aux_n = n;
	
    while(n > 0){

	vet_bin[i] = n % 2;
	i++;
	n = n / 2;
	}

	printf("%d em binario: ", aux_n);

	for(j = i - 1; j >= 0; j--)
		printf("%d", vet_bin[j]);
		
	printf("\n");

}



