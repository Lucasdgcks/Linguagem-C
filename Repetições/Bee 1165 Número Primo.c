#include <stdio.h>

int main(void) {
  int n, v, div, c = 0;
  scanf("%d", &n);
  
  for(int i = 1;i<=n; i++ ){
    c = 0;
    scanf("%d", &v);
    for(int j = 1; j<=v; j++){
      div = v % j;
      if(div == 0){
        c++;
      }  
    }
    if(c>2){
        printf("%d nao eh primo\n", v);
      }else{
        printf("%d eh primo\n", v);
      }
  }
  
  
  return 0;
}
