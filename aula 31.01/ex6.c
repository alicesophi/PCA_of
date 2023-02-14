#include <stdio.h>

int main() {
    char str[100];
    int i, j, len, eh_palindromo;

    printf("Digite uma string: ");
    i = 0;
    do {
        str[i] = getchar();
    } while (str[i++] != '\n');
    str[i - 1] = '\0';

    char cleanStr[100];
    j = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            cleanStr[j] = str[i] - 'A' + 'a'; 
            j++;
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            cleanStr[j] = str[i];
            j++;
        }
    }
    cleanStr[j] = '\0';
    len = j;

    eh_palindromo = 1;
    for (i = 0; i < len / 2; i++) {
        if (cleanStr[i] != cleanStr[len - i - 1]) {
            eh_palindromo = 0;
            break;
        }
    }

    if (eh_palindromo) {
        printf("%s é um palíndromo!\n", str);
    } else {
        printf("%s não é um palíndromo.\n", str);
    }

    return 0;
}
