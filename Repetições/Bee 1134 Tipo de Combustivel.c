#include <stdio.h>

int main(void) {
  int n; 
  int alc = 0, gas = 0, die = 0;
  while(n != 4){
    scanf("%d", &n);
    if(n == 1){
      alc++;
    }else if(n == 2){
      gas++;
    }else if(n == 3){
      die++;
    }
  }
  printf("MUITO OBRIGADO\n");
  printf("Alcool: %d\nGasolina: %d\nDiesel: %d\n", alc, gas, die);
  return 0;
}
