#include <stdio.h>

int main(void) {
  int v1,v2,v3,v4,soma;
  scanf("%d %d %d %d", &v1, &v2, &v3, &v4);
  soma = v1+v2+v3+v4;
  if(soma>26){
    soma=soma-26;
  }
  switch (soma){
    case 0 :
      printf("Ei! Ninguém colocou nada!");
    break;
    
    case 1 :
      printf("Letra: A");
      break;
    
    case 2 : 
      printf("Letra: B");
      break;
    case 3 :
      printf("Letra: C");
      break;
    case 4 :
      printf("Letra: D");
      break;
    case 5 :
      printf("Letra: E");
      break;
    case 6 :
      printf("Letra: F");
      break;
    case 7 :
      printf("Letra: G");
      break;
    case 8 :
      printf("Letra: H");
      break;
    case 9 :
      printf("Letra: I");
      break;
    case 10 :
      printf("Letra: J");
      break;
    case 11:
      printf("Letra: K");
      break;
    case 12:
      printf("Letra: L");
      break;
    case 13:
      printf("Letra: M");
      break;
    case 14:
      printf("Letra: N");
      break;
    case 15:
      printf("Letra: O");
      break;
    case 16:
      printf("Letra: P");
      break;
    case 17:
      printf("Letra: Q");
      break;
    case 18:
      printf("Letra: R");
      break;
    case 19:
      printf("Letra: S");
      break;
    case 20:
      printf("Letra: T");
      break;
    case 21:
      printf("Letra: U");
      break;
    case 22:
      printf("Letra: V");
      break;
    case 23:
      printf("Letra: W");
      break;
    case 24:
      printf("Letra: X");
      break;
    case 25:
      printf("Letra: Y");
      break;
    case 26:
      printf("Letra: Z");
      break;
    
  }
  
  return 0;
}
