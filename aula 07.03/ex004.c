#include <stdio.h>
int main(){
	int v[8];
	int i, dobro;
	
	for(i=0; i<8; i++){
		printf("Elemento %d do array: ", i+1);
		scanf("%d", (v+i));
	}
	

	for(i=0; i<8; i++){
		dobro = *(v+i)*2;
		printf("O dobro do elemento %d do array eh: %d\n", i+1, dobro);
}
	
	for(i=0; i<8; i++){
		if(*(v+i)%2 == 0){
			printf("\nElemento %d do array eh %d e seu endereco eh %d",i+1, *(v+i), v+i);
		}
	}
	return 0;
}
