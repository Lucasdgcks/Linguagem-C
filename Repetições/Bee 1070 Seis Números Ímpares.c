#include <stdio.h>

int main(void) {
 int n, ehimpar;
  int c = 0;
  scanf("%d", &n);
  ehimpar = n % 2;
 
  if(ehimpar == 1){
  for(int i = 0; c<6; i++){
      printf("%d\n", n);
      c++;
      n+=2; 
  }
  }else{
    n++;
    for(int i = 0; c<6; i++){
      printf("%d\n", n);
      c++;
      n+=2; 
  }
  }


  
  return 0;
}
