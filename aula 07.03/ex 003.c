/*Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real e char. Associe as variáveis aos ponteiros 
(use &). Modifique os valores de cada variável usando os ponteiros. Imprima os valores das variáveis antes e após a modificação.
*/
#include <stdio.h>

int main(){
	int x = 2;
	int *p1;
	float y = 2.5;
	float *p2;
	char s = 'a';
	char *p3;
	
	printf("Valores antes da modificacao:\n");
	printf("%d\n", x);
	printf("%.1f\n", y);
	printf("%c\n", s);
	
	p1 = &x;
	p2 = &y;
	p3 = &s;
	
	printf("Valores depois da modificacao:\n");
	printf("%d\n", *p1);
	printf("%.1f\n", *p2);
	printf("%c", *p3);
	

	return 0;
}
