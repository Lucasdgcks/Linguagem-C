#include <stdio.h>

int main(void) {
  int Q, H, M;

  scanf("%d %d %d", &Q, &H, &M);
  
if(Q > 0){
  if(M == 1){
    if(Q >= 3 || H == 2){
      printf("Her�is vencer�o!"); 
       }
    else{
      printf("Melhor chamar Saitama!");
    }
  }
  if(M == 2){
    if(Q >= 3 && H == 2 || H == 3){
      printf("Her�is vencer�o!"); 
       }
    else{
      printf("Melhor chamar Saitama!");
    }
  }
  if(M == 3){
    if(Q >= 3 && H == 3 || H == 4){
      printf("Her�is vencer�o!"); 
       }
    else{
      printf("Melhor chamar Saitama!");
    }
  }
  if(M == 4){
    if(Q >= 3 && H == 4 || H == 5){
      printf("Her�is vencer�o!"); 
       }
    else{
      printf("Melhor chamar Saitama!");
    }
  }
  if(M == 5){
    printf("Her�is vencer�o!");
  }
}else{
  printf("Melhor chamar Saitama!");
}  
 
  return 0;
}
