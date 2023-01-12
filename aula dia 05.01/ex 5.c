 #include <stdio.h>

int fib(int n);

int main() {
  int n,i;
  
  printf("Digite o numero de termos da sequencia: ");
  scanf("%d", &n);
  
  while(n <= 0) {
    printf("Numero incorreto. Digite o numero de termos da sequencia: ");
    scanf("%d", &n);
  }
  
  for (i = 1; i <= n; i++) {
    printf("%d ", fib(i));
  }
  printf("\n");
  return(0);
}


int fib(int n) {
  int fn;
  
  if (n == 1) {
    return(1);
  }
  
  if (n == 2) {
    return(1);
  }
  
  fn = fib(n-1) + fib(n-2);
  return(fn);
}
