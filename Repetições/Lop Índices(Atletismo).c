#include <stdio.h>

int main(void) {
  int QA;
  float med, soma, D;
  float men = 0;

  scanf("%d", &QA);
  
  for(int i = 1; i<=QA; i++){
    scanf("%f", &D);
    if(D>0){
    soma += D;
    }
    if(D==-1){
      men+=1;
    }
  }
   
  if(men==QA){
     printf("A competicao nao possui dados historicos!");
 } 
  else if(men>=0){
      med = soma/(QA-men);
    printf("%.2f", med);
 }else if(men<0){
    med = soma/QA;
    printf("%.2f", med);
 }
  
  return 0;
}
