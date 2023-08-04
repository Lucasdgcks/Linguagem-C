#include <stdio.h>

int main(void) {
  int n, resto;
  int c = 0;
  scanf("%d", &n);
  for(int i = 0; i<=10000; i++){
    resto = i % n;
    if(resto == 2){
      printf("%d\n", i);
    }
   
  } 
  return 0;
}
