#include <stdio.h>

int main(void) {
  float Q,QT, V, VP, VT;
  
  while(Q != -1){ 
    scanf("%f", &Q);
    if(Q!=-1){
    scanf("%f", &V);
    QT+=Q;
    VP = Q*V;
    VT+=VP;
      } 
    }
  
  printf("%.0f %.2f",QT, VT);
  return 0;
}
