#include <stdio.h>
#include<string.h>
#define tamanho 3
#define DISTANCE 1000

int main(){
char modelo[tamanho][20];
float consumo[tamanho];
float min_consumo = 99999999;
int posmaiseconomico = 0;
int i;

for(i=0; i<tamanho; i++){
    printf("Digite o modelo %d: ", i+1);
    scanf("%s", modelo[i]);

    printf("Digite o consumo do carro %d: ", i+1);
    scanf("%f", &consumo[i]);

    if(consumo[i] < min_consumo){
        min_consumo = consumo[i];
        posmaiseconomico = i;
    }
}

printf("O carro mais economico eh: %s\n", modelo[posmaiseconomico]);

for(i=0; i<tamanho; i++){
    printf("O carro %s consome em 1000km %.3f litros\n", modelo[i], DISTANCE/consumo[i]);
   
}

return 0;
}
