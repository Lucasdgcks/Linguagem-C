#include <stdio.h>

int MU(int x, int v1, int v2){
  if(v2>=v1){
    printf("impossivel");
  }else{
    int TempodeEncontro = x/(v1-v2); //formula fisica MU(encontro)
    printf("%ds", TempodeEncontro);
  }
  
  return 0;
}

int main(void) {
  int x, v1, v2, resultado;

  scanf("%d %d %d", &x, &v1, &v2);

  MU( x, v1, v2);
 
  return 0;
}
