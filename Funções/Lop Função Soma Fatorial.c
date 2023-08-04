#include <stdio.h>

int auxiliar(int n){
  int fat = 1;
  for(int i = 1; i<=n; i++ ){
    fat *= i;
  }
  return fat;
}

int somafat(int n1, int n2){
  int soma;
  return soma = auxiliar(n1) + auxiliar(n2);
}

int main(void) {
  int n1, n2, res;
  scanf("%d %d", &n1, &n2);
  res = somafat(n1, n2);
  printf("%d! + %d! = %d", n1, n2, res);
  return 0;
}
