#include <stdio.h>
int main(){
    float massa;
    int horas, minutos, segundos;
    printf("Digite a massa inicial em gramas: ");
    scanf("%f", &massa);
    printf("Massa inicial = %.1f", massa);
    
    while(massa >= 0.5){
        massa = massa/2;
        segundos += 50;
    }
        minutos = segundos/60;
        horas = minutos/60;
        printf("\nMassa final = %.1f", massa);
        printf("\nTempo percorrido em segundos: %d seg", segundos);
        printf("\nTempo percorrido em minutos: %d min", minutos);
        printf("\nTempo percorrido em horas: %d horas", horas);
        
    return 0;
}
