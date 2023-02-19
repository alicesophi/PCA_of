#include <stdio.h>
#define tam 3

int main(){
  char carros[tam][100];
  float consumo[tam];
  int menorConsumo = 0;
  int i=0;
  
  for(i=0; i<tam; i++){
    printf("Digite o %d carro: ", i+1);
    scanf("%s", carros[i]);

    printf("Quantos quilometros o carro %s faz com um litro de combustivel? ", carros[i]);
    scanf("%f", &consumo[i]);

    if(consumo[i] > consumo[menorConsumo]){
      menorConsumo = i;
    }    
  }

  printf("\nO carro mais economico eh o %s, que faz %.2f km/l", carros[menorConsumo], consumo[menorConsumo]);

  printf("\n\nConsumo para percorrer 1000km:\n");
  for(i=0; i<tam; i++){
    printf("%s: %.2f litros\n", carros[i], 1000.0/consumo[i]);
  }

  return 0;
}
