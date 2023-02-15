#include <stdio.h>

int permutacao(int a, int b){
    int freq_a[10] = {0}; 
    int freq_b[10] = {0}; 
    
    while(a > 0){
        freq_a[a % 10]++;
        a /= 10;
    }
    
    while(b > 0){
        freq_b[b % 10]++;
        b /= 10;
    }
    
    for(int i=0; i<10; i++){
        if(freq_a[i] != freq_b[i])
            return 0;
    }
    
    return 1;
}

int main(){
    int a, b;
    printf("Digite dois numeros inteiros positivos: ");
    scanf("%d %d", &a, &b);
    if(permutacao(a, b))
        printf("%d eh uma permutacao de %d\n", a, b);
    else
        printf("%d nao eh uma permutacao de %d\n", a, b);
    return 0;
}
