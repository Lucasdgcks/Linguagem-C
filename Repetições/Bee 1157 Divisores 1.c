#include <stdio.h>

int main(void) {
  int n, div;
  scanf("%d", &n);

  for(int i = 1; i<100000000; i++ ){
    div = n % i;
    if(div == 0){
      printf("%d\n", i);
    }
  }


  
  return 0;
}
