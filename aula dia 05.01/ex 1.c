#include<stdio.h>

int scanIntIntervalo();
int percentual();
int absdif();

int main(){
    int entrada;
    
    scanIntIntervalo();
    
    return 0;
}

int absdif(int menor, int maior){
    printf("\nO valor absoluto da diferenca dos dois numeros eh %d", maior - menor);   
}

int percentual(int valor, int total){
    float p=0;
    p = (100*valor)/total;
    printf("\nPercentual de %d  em relacao a %d = %.2f", valor, total, p);
}

int scanIntIntervalo(){
    int x, y;
    
    printf("Digite o valor x: ");
    scanf("%d", &x);
    printf("Digite o valor y: ");
    scanf("%d", &y);
    
    if(x>0 && x<1000 && y>0 && y<1000){
        if(x>y){
            percentual(y, x);
            absdif(y, x);
        }
        
        else{
            percentual(x, y);
            absdif(x, y);
        }
        
    }
    else {
        ("\nDigite valores entre 0 e 1000: ");
        
    }
}
