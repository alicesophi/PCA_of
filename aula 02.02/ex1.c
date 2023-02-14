#include <stdio.h>
#include <string.h>

int main() {
    char nomes[5][4][50];

    for (int i = 0; i < 5; i++) {
        printf("Equipe %d:\n", i+1);
        for (int j = 0; j < 4; j++) {
            printf("  Aluno %d: ", j+1);
            char c;
            int k = 0;
            do {
                c = getchar();
                nomes[i][j][k++] = c;
            } while (c != '\n' && k < 50);
            nomes[i][j][k-1] = '\0'; 
        }
    }

    char nome[50];
    printf("Digite o nome do aluno: ");
    char c;
    int i = 0;
    do {
        c = getchar();
        nome[i++] = c;
    } while (c != '\n' && i < 50);
    nome[i-1] = '\0'; 
    
    int equipe = -1;
    int aluno = -1;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            if (strcmp(nomes[i][j], nome) == 0) {
                equipe = i;
                aluno = j;
                break;
            }
        }
        if (equipe != -1) {
            break;
        }
    }

    if (equipe != -1) {
        printf("O aluno %s está na equipe %d.\n", nome, equipe+1);
    } else {
        printf("O aluno %s não foi encontrado.\n", nome);
    }

    return 0;
}
