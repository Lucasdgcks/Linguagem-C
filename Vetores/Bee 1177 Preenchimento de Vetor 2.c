#include <stdio.h>

int main(void) {
  int t, vetor[1000], c = 0;
  scanf("%d", &t);
  for(int i = 0; i<1000; i++){
    vetor[i] = c;
    c++;
    if(c == t){
      c = 0;
    }
  }
  for(int i = 0; i<1000; i++){
    printf("N[%d] = %d\n", i, vetor[i]);
  }
  return 0;
}
