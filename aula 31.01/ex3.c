#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 10

int verifica_data(char data[]);

int main() {
    char data[TAM];
    int dia, mes, ano;
    
    printf("Insira uma data no formato DD/MM/AAAA: ");
    scanf("%s", data);
    
    if (!verifica_data(data)) {
        printf("Data inválida!\n");
        return 0;
    }
    
    dia = (data[0] - '0') * 10 + (data[1] - '0');
    mes = (data[3] - '0') * 10 + (data[4] - '0');
    ano = (data[6] - '0') * 1000 + (data[7] - '0') * 100 + (data[8] - '0') * 10 + (data[9] - '0');
    
    printf("Dia: %d\n", dia);
    printf("Mês: %d\n", mes);
    printf("Ano: %d\n", ano);
    
    return 0;
}

int verifica_data(char data[]) {
    int i;
    if (strlen(data) != 10) return 0;
    if (data[2] != '/' || data[5] != '/') return 0;
    for (i = 0; i < 10; i++) {
        if (i == 2 || i == 5) continue;
        if (data[i] < '0' || data[i] > '9') return 0;
    }
    return 1;
}
