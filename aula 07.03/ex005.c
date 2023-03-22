#include <stdio.h>

int ordenar_valores(int *v1, int *v2, int *v3);

int main(){
	int *x;
	int *y;
	int *z;
	int a;
	int b;
	int c;
	int func;
	
	x = &a;
	y = &b;
	z = &c;
	//x=(int *)malloc(sizeof(int));
	
	printf("Digite o valor 1: ");
	scanf("%d", x);
	
	printf("Digite o valor 2: ");
	scanf("%d", y);
	
	printf("Digite o valor 3: ");
	scanf("%d", z); 
	
	func = ordenar_valores(x, y, z);
	printf("Valores ordenados: %d, %d, %d.\n", *x, *y, *z);

}

int ordenar_valores(int *v1, int *v2,int *v3){
	int a=*v1;
	int b=*v2;
	int c=*v3;
	
	if(a == b && b == c){
		printf("Os valores sao iguais.\n");
		return 0;
	}

	if(a > b){
		if(b > c){
			*v1 = c;
			*v2= b;
			*v3 = a;
		}
		else{
			if(a > c){
				*v1 = b;
				*v2= c;
				*v3 = a;
			}	
			else{
				*v1 = b;
				*v2= a;
				*v3 = c;
			}
		}
	}
	else{
		if(b > c){
			if(a > c){
				*v1 = c;
				*v2= a;
				*v3 = b;
			}
			else{
				*v1 = a;
				*v2= c;
				*v3 = b;
			}
		}else{
				*v1 = a;
				*v2= b;
				*v3 = c;
			}
		}
		return 1;
	}

	
