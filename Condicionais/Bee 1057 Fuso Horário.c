#include <stdio.h>

int main(void) {
  int s, t, f, soma;
  scanf("%d %d %d", &s, &t, &f);
  soma = s+t+f;
  if(soma >= 24){
    soma = soma - 24;
  }else if(soma < 0){
    soma = soma + 24;
  }else if(soma == 0){
    soma = soma*0;
  }
  printf("%d\n", soma);


  
  return 0;
}
