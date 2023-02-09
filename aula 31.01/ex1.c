/*20230131_001. Faça funções que:
- Receba uma palavra e a imprima de trás-para-frente. ´
- Receba do usuário uma string e imprime a string sem vogais.
- Transforma todos os caracteres de uma string em maiúsculos.
- Função que recebe uma string e um caractere, e retorne o número de vezes que esse caractere aparece na string.
- Função que recebe uma string e um caractere, e apague todas as ocorrências desse caractere na string*/

#include <stdio.h>

void imprimir_tras_p_frente();
void imprimir_sem_vogais();
void imprimir_maiusculo();
void n_caracteres();
void tira_caractere();


int main(){
    imprimir_maiusculo();
    imprimir_tras_p_frente();
    imprimir_sem_vogais();
    n_caracteres();
    tira_caractere();
    return 0;
}

void imprimir_tras_p_frente(){
    char palavra[100];
    int i, tamanho;
    
    printf("Digite uma palavra para imprimi-la ao contrario: ");
    scanf("%s", &palavra);
    
    tamanho = strlen(palavra);
    
    printf("A palavra ao contrario eh:\n");
    for(i=tamanho-1; i>=0; i--){
        printf(" %c", palavra[i]);
    }
    printf("\n");
}

void imprimir_sem_vogais(){
    char frase[100];
    int i, j = 0;
    
    printf("Digite uma frase: ");
    scanf("%s", frase);
 
    for(i=0; frase[i]!='\0'; i++){
        if(frase[i] != 'a' && frase[i] != 'e' && frase[i] != 'i' && frase[i] != 'o' && frase[i] != 'u' && frase[i] != 'A' && frase[i] != 'E' && frase[i] != 'I' && frase[i] != 'O' && frase[i] != 'U'){
            frase[j++] = frase[i];
        }
    }
    frase[j] = '\0';
    
    printf("Frase sem vogais: %s\n", frase);
}

void imprimir_maiusculo(){
    char palavra[100];
    char i;
    
    printf("Digite uma palavra para imprimi-la em maiusculo: ");
    scanf("%s", palavra);
    
    for(i=0; palavra[i] != '\0'; i++){
       if((palavra[i] >= 'a') && (palavra[i] <= 'z')){
        palavra[i] = palavra[i] - ('a' - 'A'); 
    }
    
} 
    
    printf("A palavra em maiúsculo eh: %s\n", palavra);
    
}

void n_caracteres(){
    char palavra[100];
    char c;
    int count=0;
    printf("Entre com a palavra: ");
    scanf("%s", palavra);
    printf("Entre com o caractere: ");
    scanf(" %c", &c);
    for (int i = 0; palavra[i] != '\0'; i++) {
        if (palavra[i] == c) {
            count++;
        }
    }
    printf("'%c' apareceu %d vez em '%s'\n", c, count, palavra);
}

void tira_caractere(){
    char palavra[100];
    char c;
    int ler = 0, escrever = 0;
    printf("Enter a palavra: ");
    scanf("%s", palavra);
    printf("qual caractere vc deseja remover:: ");
    scanf(" %c", &c);
    while (palavra[ler] != '\0') {
        if (palavra[ler] != c) {
            palavra[escrever++] = palavra[ler];
        }
        ler++;
    }
    palavra[ler] = '\0';
    printf("Result: %s\n", palavra);
}
