#include <stdio.h>

int main(void) {
  int L, C;
  scanf("%d %d", &L, &C);
  int A [L][C];
  int B [L][C];
  int Resultado[L][C];
  for(int i = 0; i<L; i++){
    for(int j = 0; j<C; j++){
      scanf("%d", &A[i][j]);
    }
  }
   for(int i = 0; i<L; i++){
    for(int j = 0; j<C; j++){
      scanf("%d", &B[i][j]);
    }
  }
   for(int i = 0; i<L; i++){
    for(int j = 0; j<C; j++){
      Resultado[i][j] = A[i][j] + B[i][j];
    }
  }
   for(int i = 0; i<L; i++){
    for(int j = 0; j<C; j++){
      printf("%d ", Resultado[i][j]);
    }
     printf("\n");
  }
  return 0;
}
