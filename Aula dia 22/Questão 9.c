#include <stdio.h>

int main(){
  int n, m, x, y, valor, xmax, ymax, valormax;     

  printf("Entre com n e m: ");
  scanf("%d %d", &n, &m);

  xmax = ymax = 0;
  valormax = 0;  

  for (x = 0; x <= n; x++) 
    {
      for (y = 0; y <= m; y++) 
	{
          valor = x*y - x*x + y;
          if (valor > valormax)
	    {
              valormax = valor;
              xmax = x;
              ymax = y;
	    }
	}  
    }
  
  printf("Valor maximo da funcao = %d foi alcancado com x = %d e y = %d\n", valormax, xmax, ymax);
    
  return 0;
} 
