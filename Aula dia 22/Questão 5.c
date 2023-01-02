#include <stdio.h>

int main() {
    int numerador=1, denominador=1;
    float soma;
    
    do
    {
        soma += numerador / denominador;
        numerador += 2;
        denominador++;
    } while(numerador != 101 && denominador != 51);
    
    printf("O resultado da soma eh: %.1f\n", soma);
    
    return 0;
}

