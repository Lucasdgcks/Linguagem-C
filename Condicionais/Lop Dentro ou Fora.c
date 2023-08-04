#include <stdio.h>

int main(void) {
  int x1, y1, x2, y2, a, b;

  scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

  scanf("%d %d", &a, &b);

  if(a >= x1 || a <=x2){
    if(b <= y2 && b>= y1 && a<=x2){
    printf("Dentro!");
    }else{
      printf("Fora!");  //Quêstão fácil, apenas chatinha pra 
                        //botar certinho as condições
    }
  }else{
    printf("Fora!");
  }
  return 0;
}
