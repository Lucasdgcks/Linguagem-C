#include <stdio.h>

void tabuada(int n) {
  int i;
  for(i = 1; i <= 10; i++) {
    printf("%d x %d = %d\n", n, i, n * i);
  }
}

int main() {
  int i;
  for(i = 1; i <= 9; i++) {
    tabuada(i);
    
  }
  return 0;
}
