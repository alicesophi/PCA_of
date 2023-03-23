#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* ler_vetor(int qtd);
void mm(int *v, int *menor, int *maior, int qtd);

int main() {
    int *vetor;
    int min, max;
    
    vetor = ler_vetor(5);
    
    mm(vetor, &min, &max, 5);

    printf("\nMaior = %d", max);
    printf("\nMenor = %d", min);

    free(vetor);
    return 0;
}

int* ler_vetor(int qtd) {
    int i;
    int *out = (int *) malloc(qtd * sizeof(int));
    memset(out, 0, qtd * sizeof(int));

    for (i = 0; i < qtd; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", (out + i));
    }
    
    return out;
}

void mm(int *v, int *menor, int *maior, int qtd) {
    int min = *v;
    int max = *v;
    int i;

    for (i = 1; i < qtd; i++) {
        if (*(v + i) < min) {
            min = *(v + i);
        }
        if (*(v + i) > max) {
            max = *(v + i);
        }
    }

    *menor = min;
    *maior = max;
}
