#include <stdio.h>

int main() {
    int n, v, i, j;

    scanf("%d %d", &n, &v);

   for (i = 1; i <= v; i++) {
      printf("%d", i);
     if (i % n != 0) {
      printf(" ");
     }

      if (i % n == 0) {
      printf("\n");
     }
    }
    
    return 0;
}
