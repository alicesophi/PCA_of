#include <stdio.h>

void selection_sort(int v[], int n);

int main() {
    int i, n;
    
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    int v[n];
    
    printf("Digite os elementos do vetor:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    selection_sort(v, n);

    printf("Vetor ordenado em ordem ascendente:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}

void selection_sort(int v[], int n) {
    int i, j, min_id, temp;
    for (i = 0; i < n-1; i++) {
        min_id = i;
        for (j = i+1; j < n; j++) {
            if (v[j] < v[min_id]) {
                min_id = j;
            }
        }
        temp = v[i];
        v[i] = v[min_id];
        v[min_id] = temp;
    }
}
