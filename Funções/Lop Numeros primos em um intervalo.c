#include <stdio.h>
int primo(int x){
  int div, c = 0;
 for(int j = 1; j<=x; j++){
      div = x % j;
      if(div == 0){
        c++;
      }  
    }
    if(c>2){
       return 0;
      }else{
        return 1;
      }
}
int main(void) {
  int v1, v2, ehprimo;
  scanf("%d %d", &v1, &v2);
  v1+=1;
  for( v1; v1<=v2; v1++){
    ehprimo = primo(v1);
    if(ehprimo == 1){
      printf("%d ", v1);
    }
  }
  return 0;
}
