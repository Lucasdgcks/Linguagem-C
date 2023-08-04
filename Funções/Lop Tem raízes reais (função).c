#include <stdio.h>
int temRaizesReais(int a, int b, int c){
  float soma;
  float B;
  B = b*b;
  soma = B-4*c*a;

  if(soma < 0){
    return printf("Nao tem raizes reais\n");
    
  }else{
    return printf("Tem raizes reias\n");
  }
  
}
int main(void) {
 int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  temRaizesReais(a, b, c);
  return 0;
}
