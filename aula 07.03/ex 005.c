#include <stdio.h>

void ordenar_valores(int *v1, int *v2, int *v3);

int main(){
	int *x;
	int *y;
	int *z;
	int a;
	int b;
	int c;
	
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
	
	ordenar_valores(x, y, z);

}

void ordenar_valores(int *v1, int *v2,int *v3){
	int a=*v1;
	int b=*v2;
	int c=*v3;
	
	if(a == b && b == c){
		printf("0\n");
	}
	
	if(a != b && a != c && b != c){
		printf("1\n");

	if(a > b){
		if(b > c){
			printf("%d, %d, %d", c, b, a);
		}
		else{
			if(a > c){
				printf("%d, %d, %d", b, c, a);
			}	
			else{
				printf("%d, %d, %d", b, a, c);	
			}
		}
	}
	else{
		if(b > c){
			if(a > c){
				printf("%d, %d, %d", c, a, b);
			}
			else{
				printf("%d, %d, %d", a, c, b);
			}
		}else{
			printf("%d, %d, %d", a, b, c);
			}
		}
	}
}
	
