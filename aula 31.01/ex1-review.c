/*- Receba uma palavra e a imprima de trás-para-frente. ´
- Receba do usuário uma string e imprime a string sem vogais.
- Transforma todos os caracteres de uma string em maiúsculos.
- Função que recebe uma string e um caractere, e retorne o 
número de vezes que esse caractere aparece na string.
- Função que recebe uma string e um caractere, e apague 
todas as ocorrências desse caractere na string*/

#include<stdio.h>

void imprime_reverso(char *string);
void imprime_semvogais(char *string);
void imprime_maiusculo(char *string);
void imprime_Ncaracters(char *s, char caractere);
void tira_caractere(char *s, char caractere);

int main(){
    char string[100];
    char c;
    
    printf("Digite um palava: ");
    scanf("%s", string);
    
    printf("Digite um caractere: ");
    scanf(" %c", &c);
    
    imprime_reverso(string);
    imprime_semvogais(string);
    imprime_maiusculo(string);
    imprime_Ncaracters(string, c);
    tira_caractere(string, c);
   
    return 0;
}   


void imprime_reverso(char *string){
    int tamanho = 0, i=0;
    
    for(i=0; string[i] != '\0'; i++){
        tamanho++;
    }
    
    for(i= tamanho - 1; i >=0; i--){
        printf("%c", string[i]);
    }
    printf("\n");
}

void imprime_semvogais(char *string){
    int i=0;
    
    while(string[i] != '\0'){
        if(string[i] != 'a' && string[i] != 'e' && string[i] != 'i' && string[i] != 'o' && string[i] != 'u' && 
            string[i] != 'A' && string[i] != 'E' && string[i] != 'I' && string[i] != 'O' && string[i] != 'U'){
        printf("%c", string[i]);
            }
        i++;       
    }
    printf("\n");
}

void imprime_maiusculo(char *string){
    int i = 0;

    while(string[i] != '\0'){
        if((string[i] >= 'a') && (string[i] <='z')){
            string[i] -= 32;
            
        }
        i++;
    }
    printf("%s\n", string);
}

void imprime_Ncaracters(char *s, char caractere){
    int i=0, count=0;
    
    while(s[i] != '\0'){
        if(caractere == s[i]){
            count++;
        }
        i++;
    } 
    printf("'%c' apareceu %d vez em '%s'\n", caractere, count, s);
}

void tira_caractere(char *s, char caractere){
    int i=0, j=0;
    
    while(s[i] != '\0'){
        if(caractere != s[i]){
            s[j] = s[i]; 
            j++;
        }
        i++;
    } 
    s[j] = '\0';
    printf("%s\n", s);  
}
