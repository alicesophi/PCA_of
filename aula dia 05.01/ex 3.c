#include<stdio.h>
#include<math.h>

int numeroPar();
int numero_perfeito(int x);

int main(){
    int num;

    num = numeroPar();
    numero_perfeito(num);
}

int numeroPar(){
    int n;
    do{
        printf("Digite um numero par: ");
        scanf("%d", &n);
    }
    while(n%2 != 0);
    return n;
}

int numero_perfeito(int x){
    int i, soma = 0;
    for(i=1; i<x; i++){
        if(x % i == 0){
            soma = soma + i;
        } 
    }

    if(x == soma){
        printf("Eh perfeito");
    }
    else{
        printf("Nao eh perfeito");
    }
    return(x==soma);

}
