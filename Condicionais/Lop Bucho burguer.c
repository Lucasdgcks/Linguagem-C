#include <stdio.h>

int main(void) {
  int Com, Din, Tro, Fal;

  scanf("%d %d", &Com, &Din);

  switch (Com){
    case 1:
    Com = 12;
    break;

    case 2:
    Com = 23;
    break;

    case 3:
    Com = 31;
    break;

    case 4:
    Com = 28;
    break;

    case 5:
    Com = 15;
    break;
  }
  Tro = Din - Com;
  Fal = Com - Din;

  if(Com > Din){
    printf("Saldo insuficiente!Falta %d reais", Fal);
    
  }else if(Din > Com){
    printf("Troco = %d reais", Tro);
    
  }else if(Din == Com){
    printf("Deu certim!");
  }
  
  return 0;
}
