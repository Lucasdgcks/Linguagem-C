#include <stdio.h>

int main(void) {
  int vet[20], i, j, c = 0;;
  for( i = 0; i<20; i++){
    scanf("%d", &vet[i]);
  }
  for( j = 19; j>=0; j--){
     
   printf("N[%d] = %d\n", c, vet[j]);
    c++;
  }
  
  
  return 0;
}
