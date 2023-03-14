#include <stdio.h>

void encontra_valor(int *p1, int *p2);

int main(){
	int v[10] = {1, 6, 3, 4, 5, 2, 7, 8, 2, 2};
	
	encontra_valor(&v[0], &v[9]);
	
	return 0;
}

void encontra_valor(int *p1, int *p2){
	int n=2;
	int check = 0;
	
	for(p1; p1<=p2; p1++){
		if(n == *p1){
			printf("O valor %d se encontra no endereco: %d\n", n, p1);
			check = 1;
		}

	}
		if(check == 0){
			printf("NULL\n");
		}
	}
