#include <stdio.h>

int main(void) {
  int A, B, par1, par2,soma;
  
  printf("Digite o valor de A: ");
  scanf("%d", &A);
  
  printf("Digite o valor de B: ");
  scanf("%d", &B);

  par1 = A%2;
  par2 = B%2;

  if(par1!=0){
    printf("N�o posso somar, pois %d n�o � par", A);
  }
  if(par2!=0){
    printf("\nN�o posso somar, pois %d n�o � par", B);
  }
  soma = A+B;
  if(par1==0 && par2==0){
    printf("%d", soma);
  }
    

  return 0;
}
