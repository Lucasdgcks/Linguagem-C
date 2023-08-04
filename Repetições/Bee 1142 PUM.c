#include <stdio.h>

int main(void) {
  int n, v1 = 0;
  scanf("%d", &n);

  for(int i = 0; i<n; i++){
    v1 += 1;
    printf("%d ", v1);
    v1 = v1+1;
    printf("%d ", v1);
    v1 = v1+1;
     printf("%d PUM\n", v1);
    v1 = v1+1;
  }


  
  return 0;
}
