#include <stdio.h>

int main() {
    int i, x = 0, calculo;
    
    for(i=1; i<=10; i++){
        for(x=1; x<=10; x++){
            calculo = x * i;
            printf("\n%d X %d = %d", i, x, calculo);
    }
    }

    return 0;
}
