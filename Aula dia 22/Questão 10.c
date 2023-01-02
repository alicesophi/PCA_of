#include <stdio.h>

int main() {
  int n, p, i, j, soma;

  printf("Digite o valor de p: ");
  scanf("%d", &p);

  for (n = 1; n <= p; n++) {
    soma = 0;
    for (i = 1; soma != n * n * n; i += 2) {
      soma = 0;
      for (j = 0; j < n; j++)
	soma += i + 2 * j;
    }
    i = i - 2;
    printf("%d*%d*%d = %d", n, n, n, i);
    for (j = 1; j < n; j++)
      printf("+%d", i+2*j);
    printf("\n");    
  }
