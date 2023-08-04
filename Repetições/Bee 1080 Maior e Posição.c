#include <stdio.h>

int main(void) {
  int v, maior, pos;
    
    scanf("%d", &maior);
    pos = 1;
    
    for(int i = 2; i <= 100; i++) {
        scanf("%d", &v);
        if(v > maior) {
            maior = v;
            pos = i;
        }
    }
  
    printf("%d\n%d\n", maior, pos);
 
  return 0;
}
