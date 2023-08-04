#include <stdio.h>

int main(void) {
  int m, n, sum = 0, sum1 = 0;
  while(m != 0 || n != 0){
    scanf("%d %d", &m, &n);
    if(m == 0 || n == 0){
      break;
    }
    sum = 0;
    sum1 = 0;         //necessário em algumas situações zerar alguma variavel dps do fim de um laço
   
    if(m > 0 && n > 0){
      if(m > n){
        for(int i = n; i<=m; i++){
          sum+=i;
          printf("%d", i);
          if(i<m){
            printf(" ");
          }
      }
        printf(" Sum=%d\n", sum);
       }
      if(m < n){
        for(int j = m; j<=n; j++){
          sum1+=j;
          printf("%d", j);
          if(j<n){
            printf(" ");
          }
      }
        printf(" Sum=%d\n", sum1);
       }
      
    }
      
  }
  return 0;
}
