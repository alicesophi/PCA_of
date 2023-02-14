#include <stdio.h>

void codificaCesar(char* str);

int main() {
    char str[100];
    printf("Digite a string a ser codificada: ");
    scanf("%[^\n]", str);

    codificaCesar(str);

    printf("String codificada: %s\n", str);

    return 0;
}

void codificaCesar(char* str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = ((str[i] - 'A' + 3) % 26) + 'A';
        }
        else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = ((str[i] - 'a' + 3) % 26) + 'a';
        }
        i++;
    }
}

