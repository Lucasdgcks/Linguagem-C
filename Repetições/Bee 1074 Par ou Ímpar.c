#include <stdio.h>

int main(void) {
  int n, v, ehpar;
  scanf("%d", &n);

  for(int i = 0; i<n; i++){
    scanf("%d", &v);
    ehpar = v % 2;
    if(v < 0){
      if(ehpar == 0){
        printf("EVEN NEGATIVE\n");
      }else{
        printf("ODD NEGATIVE\n");
      }
    }else if(v > 0){
      if(ehpar == 0){
        printf("EVEN POSITIVE\n");
      }else{
        printf("ODD POSITIVE\n");
      }
    }else{
      printf("NULL\n");
    }
  }


  
  return 0;
}
