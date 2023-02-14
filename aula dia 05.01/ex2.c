#include <stdio.h>

void lerPesoEsemanas(int *peso, int *semanas);
void recomendarTipoParto(int peso, int semanas);

int main() {
    int p, s;
    lerPesoEsemanas(&p, &s);
    recomendarTipoParto(p, s);
    return 0;
}

void lerPesoEsemanas(int *peso, int *semanas) {
    printf("Informe o peso do feto em gramas: ");
    scanf("%d", peso);
    printf("Informe a quantidade de semanas de gestacao: ");
    scanf("%d", semanas);
}

void recomendarTipoParto(int peso, int semanas) {
    if (peso < 100 || semanas < 28) {
        printf("Parto nao devera ser realizado, reavaliar clinicamente\n");
        return;
    }

    int meses = semanas / 4;
    if (peso > 2500 && meses > 7) {
        printf("Parto normal\n");
    } else if (peso > 2500 || (peso >= 1500 && peso <= 2000 && meses >= 9)) {
        printf("Parto Cesariana\n");
    } else {
        printf("Parto normal\n");
    }
}
