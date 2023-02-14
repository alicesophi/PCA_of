#include <stdio.h>
#include <string.h>
#define MAX 20
#define MAX_LEN 120

// Função para imprimir a lista de nomes
void imprimir_nomes(char nomes[][MAX_LEN], int tam) {
    printf("Lista de nomes:\n");
    for (int i = 0; i < tam; i++) {
        printf("%s\n", nomes[i]);
    }
}

// Função para eliminar um nome da lista
void eliminar_nome(char nomes[][MAX_LEN], int *tam, char nome[]) {
    int i = 0;
    while (i < *tam && strcmp(nomes[i], nome) != 0) {
        i++;
    }

    if (i == *tam) {
        printf("O nome nao foi encontrado na lista.\n");
    } else {
        for (int j = i; j < *tam - 1; j++) {
            strcpy(nomes[j], nomes[j+1]);
        }
        (*tam)--;
        printf("O nome foi removido da lista.\n");
    }
}

// Função para imprimir os nomes da lista em ordem alfabética
void imprimir_ordem_alfabetica(char nomes[][MAX_LEN], int tam) {
    char temp[MAX_LEN];
    for (int i = 0; i < tam-1; i++) {
        for (int j = i+1; j < tam; j++) {
            if (strcmp(nomes[i], nomes[j]) > 0) {
                strcpy(temp, nomes[i]);
                strcpy(nomes[i], nomes[j]);
                strcpy(nomes[j], temp);
            }
        }
    }
    printf("Lista de nomes em ordem alfabetica:\n");
    imprimir_nomes(nomes, tam);
}

// Função para inserir os nomes da lista em outra lista em ordem alfabética
void inserirNomesdaLista(char nomes[][MAX_LEN], int tam, char nomesOrdenados[][MAX_LEN], int *tamOrdenados) {
    char temp[MAX_LEN];
    // Copiar nomes para nomesOrdenados
    for (int i = 0; i < tam; i++) {
        strcpy(nomesOrdenados[i], nomes[i]);
    }
    *tamOrdenados = tam;

    // Ordenar nomesOrdenados
    for (int i = 0; i < *tamOrdenados-1; i++) {
        for (int j = i+1; j < *tamOrdenados; j++) {
            if (strcmp(nomesOrdenados[i], nomesOrdenados[j]) > 0) {
                strcpy(temp, nomesOrdenados[i]);
                strcpy(nomesOrdenados[i], nomesOrdenados[j]);
                strcpy(nomesOrdenados[j], temp);
            }
        }
    }
}

int main() {
    char nomes[MAX][MAX_LEN];
    int tam = 0;

    // Loop para inserção dos nomes
    printf("Insira os nomes (maximo de %d nomes com ate %d caracteres cada).\n", MAX, MAX_LEN);
    char opcao = 's';
    while (opcao == 's' && tam < MAX) {
        printf("Digite o nome: ");
        scanf("%s", nomes[tam]);
        tam++;

        if (tam == MAX) {
            printf("Numero maximo de nomes alcancado (%d).\n", MAX);
            break;
        }

        printf("Inserir mais nomes? (s/n): ");
        scanf(" %c", &opcao);
}

// Chama as funções para imprimir a lista de nomes, eliminar um nome, imprimir a lista em ordem alfabética e inserir os nomes em outra lista em ordem alfabética
printf("\n");
imprimir_nomes(nomes, tam);

char nome_para_eliminar[MAX_LEN];
printf("Digite o nome que deseja eliminar: ");
scanf("%s", nome_para_eliminar);
eliminar_nome(nomes, &tam, nome_para_eliminar);
imprimir_nomes(nomes, tam);

imprimir_ordem_alfabetica(nomes, tam);

char nomesOrdenados[MAX][MAX_LEN];
int tamOrdenados = 0;

inserirNomesdaLista(nomes, tam, nomesOrdenados, &tamOrdenados);
printf("Lista de nomes em ordem alfabetica (cópia):\n");
imprimir_nomes(nomesOrdenados, tamOrdenados);

return 0;

}
