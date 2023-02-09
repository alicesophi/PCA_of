#include<stdio.h>
#define tamanho 100

int soma_linha(int matriz[][tamanho], int qtd_m, int linha);
int soma_coluna(int matriz[][tamanho], int qtd_m, int coluna);
int soma_diagp(int matriz[][tamanho], int qtd_m);
int soma_diags(int matriz[][tamanho], int qtd_m);

int main(){
    int matriz[tamanho][tamanho];
    int i, j, qtd_m, soma;
    
    printf("Digite o valor da matriz: ");
    scanf("%d", &qtd_m);
    
    for(i=0; i<qtd_m; i++){
        for(j=0; j<qtd_m; j++){
            printf("Digite os valores [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    for(i=0; i<qtd_m; i++){
        for(j=0; j<qtd_m; j++){
            printf("%d ", matriz[i][j]);
}
    printf("\n");
}
    soma = soma_linha(matriz, qtd_m, 0);
    for (i = 0; i < qtd_m; i++) {
        if (soma_linha(matriz, qtd_m, i) != soma ||
            soma_coluna(matriz, qtd_m, i) != soma) {
            printf("A matriz não é um quadrado mágico.\n");
            return 0;
        }
    }
    
    if (soma_diagp(matriz, qtd_m) != soma ||
        soma_diags(matriz, qtd_m) != soma) {
        printf("A matriz não é um quadrado mágico.\n");
 
  }
    if (soma_linha(matriz, qtd_m, i) == soma ||
        soma_coluna(matriz, qtd_m, i) == soma){
            printf("A matriz eh um quadrado magico\n");
        }
        
    if (soma_diagp(matriz, qtd_m) == soma ||
        soma_diags(matriz, qtd_m) == soma) {
        printf("A matriz é um quadrado mágico.\n");
return 0;
}
int soma_linha(int matriz[][tamanho], int qtd_m, int linha){
    int soma=0, i;
    

    for(i=0; i<qtd_m; i++){
        soma += matriz[linha][i];
    }
    return soma;
}

int soma_coluna(int matriz[][tamanho], int qtd_m, int coluna){
    int soma=0, i;

    for(i=0; i<qtd_m; i++){
        soma += matriz[i][coluna];
    }
    return soma;
}

int soma_diagp(int matriz[][tamanho], int qtd_m){
    int soma=0, i;
    

    for(i=0; i<qtd_m; i++){
        soma += matriz[i][i];
    }
    return soma;
}

int soma_diags(int matriz[][tamanho], int qtd_m) {
    int soma = 0, i;
    for (i = 0; i < qtd_m; i++) {
        soma += matriz[i][qtd_m - i - 1];
    }
    return soma;
}

