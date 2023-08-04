#include <stdio.h>

int main(void) {
 int vet[10], c = 0;
  for(int i = 0; i<10; i++){
    scanf("%d", &vet[i]);
  }
  for(int i = 0; i<10; i++){
    
    if(vet[i] <= 0){
      vet[i] = 1;
    }
      printf("X[%d] = %d\n", c, vet[i]);
    
    c++;
  }
  
  return 0;
}
