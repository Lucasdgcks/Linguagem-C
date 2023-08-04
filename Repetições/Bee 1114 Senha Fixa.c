#include <stdio.h>

int main(void) {
  int v;
  while(v != 2002){
    scanf("%d", &v);
    if(v != 2002){
      printf("Senha Invalida\n");
    }
  }
  printf("Acesso Permitido\n");


  
  return 0;
}
