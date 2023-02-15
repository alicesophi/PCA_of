#include <stdio.h>

int binarioParaDecimal(int n);

int main() {
    int n;
    printf("Digite um numero binario: ");
    scanf("%d", &n);
    printf("%d em decimal eh: %d\n", n, binarioParaDecimal(n));
    return 0;
}

int binarioParaDecimal(int n) {
    int decimal = 0, potencia = 1;
    while (n > 0) {
        int digito = n % 10;
        decimal += digito * potencia;
        potencia *= 2;
        n /= 10;
    }
    return decimal;
}


