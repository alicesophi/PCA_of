#include <stdio.h>

int segmento(int x, int y);
int main() {
    int x, y;
    printf("Digite dois numeros inteiros positivos: ");
    scanf("%d %d", &x, &y);
    if (x < y) {
        if (segmento(x, y)) {
            printf("%d eh segmento de %d\n", x, y);
        } else {
            printf("%d nao eh segmento de %d\n", x, y);
        }
    } else {
        printf("O primeiro numero deve ser menor que o segundo.\n");
    }
    return 0;
}

int segmento(int x, int y) {
    int temp = y;
    while (temp > 0) {
        if (temp % 10 == x % 10) {
            x /= 10;
            if (x == 0) {
                return 1;
            }
        } else {
            x = y < 10 ? x : x + 1;
        }
        temp /= 10;
    }
    return 0;
}

