#include <stdio.h>

int main(void) {
  int idade = 1;
  float soma = 0;
  int c = 0;
  float media;
  while(idade > 0 ){
    scanf("%d", &idade);
    if(idade < 0){
     soma-=idade; 
    }
    soma+=idade;
    c++;
  }
  c--;

  media = soma/c;  
  printf("%.2f\n", media);
  
  return 0;
}
