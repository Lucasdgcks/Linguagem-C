#include <stdio.h>

int main(void) {
  float tm,v;
  int atletas = 0;
  int series = 0;
  
  scanf("%f", &tm);
    while(v!=-1){//condicao para parar o loop
    scanf("%f", &v);
    if(v!=-1){
      if(v<=tm){
      atletas++;//soma sempre mais 1 quando o tempo registrado for menor que o tempo maximo(tm)
    }
   }   
  }
  
 printf("%i", atletas);
  if(atletas<=8 && atletas != 0){
  printf(" %i", series+=1);  
  }else if(atletas>8 && atletas <=16){     //prints para saida dos resultados formatados
    printf(" %i", series+=2);
  }else if(atletas>16 && atletas <=24){
    printf(" %i", series+=3);
  }else if(atletas==0){
    printf("0 0");
  }
  
  
  return 0;
}
