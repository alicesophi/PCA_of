void troca(float *a,float *b);

int main(){
	float x = 2.5;
	float y = 4.5;
	
	printf("Antes da troca: x = %.1f, y = %.1f", x, y);
	
	troca(&x, &y);
	
	printf("\nDepois da troca: x = %.1f, y = %.1f", x, y);
	return 0;
}

void troca(float *a, float *b){
	float temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
	
}
