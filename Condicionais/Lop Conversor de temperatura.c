#include <stdio.h>

int main(void) {
  char L;
  float N, K, C, F;

  scanf("%f %c", &N, &L);

  if(L == 'C'){
    K = N + 273.15;
    F = N * 1.8 + 32;
    printf("Celsius: %.2f\n", N);
    printf("Farenheit: %.2f\n", F);
    printf("Kelvin: %.2f\n", K);
    
  }
  if(L == 'K'){
    C = N - 273.15;
    F = C * 1.8 + 32;
    printf("Celsius: %.2f\n", C);
    printf("Farenheit: %.2f\n", F);
    printf("Kelvin: %.2f\n", N);
    
  }
  if(L == 'F'){
    K = (N + 459.68)*5/9;
    C = (N - 32) /1.8;
    printf("Celsius: %.2f\n", C);
    printf("Farenheit: %.2f\n", N);
    printf("Kelvin: %.2f\n", K);
    
  }

  

  
  return 0;
}
