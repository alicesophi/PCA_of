#include <stdio.h>

#define true 1
#define false 0

int main() {
  int n, cateto1, cateto2, hipotenusa, x;

  printf("Digite o comprimento maximo da hipotenusa: ");
  scanf("%d" , &n);

  for (hipotenusa = 1; hipotenusa <= n; hipotenusa++) {
    x = false;
    
    for (cateto1 = 1; cateto1 < hipotenusa && !x; cateto1++) {
      cateto2 = cateto1; 
      
      while (cateto1*cateto1 + cateto2*cateto2 < hipotenusa*hipotenusa)
	cateto2++;
      if (cateto1*cateto1 + cateto2*cateto2 == hipotenusa*hipotenusa){
	printf("hipotenusa = %d, catetos %d e %d\n", hipotenusa, cateto1, cateto2);
	x = true;
      }
    }
  }

  return 0;
}
