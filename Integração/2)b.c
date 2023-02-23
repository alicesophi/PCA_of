#include <stdio.h>
#define MAX_N 100
#define MAX_ELEMS 100

int main() {
    int n, i, j, k;
    int set[MAX_N][MAX_ELEMS];
    int inter[MAX_ELEMS];

    // Lê o número de conjuntos n
    printf("Digite o numero de conjuntos: ");
    scanf("%d", &n);

    // Lê os conjuntos
    for (i = 0; i < n; i++) {
        int size;
        printf("Digite o tamanho do conjunto %d: ", i + 1);
        scanf("%d", &size);
        for (j = 0; j < size; j++) {
            printf("Digite o elemento %d do conjunto %d: ", j + 1, i + 1);
            scanf("%d", &set[i][j]);
        }
    }

    // Calcula a intersecção dos n conjuntos
    int inter_size = 0;
    for (j = 0; j < MAX_ELEMS; j++) {
        inter[j] = set[0][j]; // inicializa com o primeiro conjunto
    }
    inter_size = sizeof(set[0]) / sizeof(set[0][0]);
    for (i = 1; i < n; i++) {
        int new_inter[MAX_ELEMS];
        int new_inter_size = 0;
        for (j = 0; j < MAX_ELEMS; j++) {
            int in_inter = 0;
            for (k = 0; k < inter_size; k++) {
                if (set[i][j] == inter[k]) {
                    in_inter = 1;
                    break;
                }
            }
            if (in_inter == 1) {
                new_inter[new_inter_size++] = set[i][j];
            }
        }
        // Atualiza a intersecção parcial
        for (j = 0; j < new_inter_size; j++) {
            inter[j] = new_inter[j];
        }
        inter_size = new_inter_size;
    }

	   // Imprime a intersecção final
	printf("Interseccao: ");
	for (i = 0; i < inter_size; i++) {
	    if (inter[i] != 0) {
	        printf("%d ", inter[i]);
	    }
}
printf("\n");


    return 0;
}
