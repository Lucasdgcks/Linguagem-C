#include <stdio.h>

int main(void) {
  float vet[100];
  for(int i = 0; i<100; i++){
    scanf("%f", &vet[i]);
  }
  for(int i = 0; i<100; i++){
    if(vet[i] <= 10){
      printf("A[%d] = %.1f\n", i, vet[i]);
    }
  }
  
 
  return 0;
}
