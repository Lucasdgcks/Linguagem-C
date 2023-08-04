#include <stdio.h>

int main(void) {
 int n, i, fib1 = 0, fib2 = 1, fib3;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
       
        printf("%d", fib1);
      if(i == n){
        printf("\n");
      }
      if(i < n){
        printf(" ");
      }
        fib3 = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib3;
    }
  return 0;
}
