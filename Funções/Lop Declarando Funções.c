#include <stdio.h>
int EhPar(int N){
  int resto = N%2;
  if(resto==0){
    return 1;
  }else{
    return 0;
  }
}
int main(void) {
  int N, vereficar;
  scanf("%d",&N);

  vereficar = EhPar(N);

  if(vereficar == 1){
    printf("true");
  }else{
    printf("false");
  }
  return 0;
}
