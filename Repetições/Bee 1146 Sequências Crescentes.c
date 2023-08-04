#include <stdio.h>

int main(void) {
  int n ;
  while(n != 0){
    scanf("%d", &n); 
    if(n != 0){
    for(int i = 1; i<=n; i++){
     
      printf("%d", i);
      if(i < n){
        printf(" ");
      }
      if(i == n){
        printf("\n");
      }
    }
   
  }
  }
