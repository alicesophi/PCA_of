#include <stdio.h>
#include <stdlib.h>

int* ret_vetor(char* string, char letra, int *qtd_letras);

int main(){
    char str[5] = "luana";
    char letra = 'a';
    int *posicoes, tamanho_vetor, i;

    posicoes = ret_vetor(str, letra, &tamanho_vetor);

    printf("Posicoes da letra %c na string %s: ", letra, str);
    for(i=0; i<tamanho_vetor; i++){
        printf("%d ", posicoes[i]);
    }
    printf("\nTamanho do vetor: %d\n", tamanho_vetor);

    return 0;
}

int* ret_vetor(char* string, char letra, int *qtd_letras){
    int *v = NULL, cont = 0, i;

    for(i=0; string[i]!='\0'; i++){
        if (string[i] == letra){
            cont++;
            v = (int*)realloc(v, cont*sizeof(int));
            v[cont-1] = i;
        }
    }

    *qtd_letras = cont;
    return v;
}
