#include <stdio.h>

int mdc(int x, int y){
  int resultado;

  if(y == 0){
   resultado = x;
  }else if(x == 0){
    resultado = y;
  }else{ 
    for(int i = 1; i <= x && i <= y; i++){
			if(x % i == 0 && y%i == 0){
				resultado = i;              
    
   }
  } 
}
  return resultado;
}

int main(void){
  int x, y, mdcxy;
  scanf("%d %d", &x, &y);

  mdcxy = mdc(x,y);

  printf("MDC(%d , %d) = %d", x, y, mdcxy);
 
  return 0;
}
