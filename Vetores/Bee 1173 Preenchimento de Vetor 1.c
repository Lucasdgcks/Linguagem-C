#include <stdio.h>

int main(void) {
  int vet[10], c = 0, cont = 1;
  scanf("%d", &vet[0]);
  printf("N[0] = %d\n", vet[0]);
  for(int i = 1; i<10; i++){
    vet[i] = vet[c]*2;
    printf("N[%d] = %d\n",cont, vet[i]);
    c++;
    cont++;
  }


  
  return 0;
}
