#include <stdio.h>

int calcular_custo(int n, int k, int a[n][n], int itinerario[k]);

int main() {
    int n, k, a[100][100], itinerario[100];
    
    printf("Insira o valor de n: ");
    scanf("%d", &n);
    
    printf("Insira o valor de k: ");
    scanf("%d", &k);
    
    printf("Insira a matriz de custos:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("Insira o itinerário:\n");
    for (int i = 0; i < k; i++) {
        scanf("%d", &itinerario[i]);
    }
    
    int custo_total = calcular_custo(n, k, a, itinerario);
    printf("O custo do itinerário é: %d\n", custo_total);
    
    return 0;
}

int calcular_custo(int n, int k, int a[n][n], int itinerario[k]) {
    int custo = 0;
    for (int i = 0; i < k-1; i++) {
        custo += a[itinerario[i]][itinerario[i+1]];
    }
    return custo;
}
