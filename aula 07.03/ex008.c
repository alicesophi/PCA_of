#include <stdio.h>

void troca(float *a, float *b);

int main(){
	float x=2.5;
	float y=4.5;
	
	troca(&x, &y);
	printf("x = %.1f, y = %.1f", x, y);
	
	return 0;
}

void troca(float *a, float *b){
	float temp = *a;
	
	*a = *b;
	*b = temp;
		
}
