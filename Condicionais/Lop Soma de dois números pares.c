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
    printf("Não posso somar, pois %d não é par", A);
  }
  if(par2!=0){
    printf("\nNão posso somar, pois %d não é par", B);
  }
  soma = A+B;
  if(par1==0 && par2==0){
    printf("%d", soma);
  }
    

  return 0;
}
