#include <stdio.h>

int corresponde(int x, int y);
int main() {
    int x, y;
    printf("Digite dois numeros inteiros positivos: ");
    scanf("%d %d", &x, &y);
    if (corresponde(x, y)) {
        printf("%d corresponde aos ultimos digitos de %d\n", y, x);
    } 
    else {
        printf("%d nao corresponde aos ultimos digitos de %d\n", y, x);
    }
    return 0;
}

int corresponde(int x, int y) {
    int pot = 1;
    while (pot <= x) {
        if (x % (pot * 10) == y) {
            return 1;
        }
        pot *= 10;
    }
    return 0;
}

