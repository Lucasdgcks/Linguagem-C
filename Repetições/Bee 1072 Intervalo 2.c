#include <stdio.h>

int main(void) {
  int n, v;
  int in = 0;
  int out = 0;
  scanf("%d", &n);

  for(int i = 0; i<n; i++){
    scanf("%d", &v);
    if(v >= 10 && v <= 20){
      in++;
    }else{
      out++;
    }
  }
  printf("%d in\n", in);
  printf("%d out\n", out);


  
  return 0;
