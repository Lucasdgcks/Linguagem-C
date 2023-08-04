#include <stdio.h>

float calcNota(float n1, float n2, float n3){
float media = (n1+n2+n3)/3;
  if(media<5 && n1>=3 && n2>=3 && n3>=3){
    if(n1<n2 && n1<n3 || n1==n2 || n1==n3){
      n1=n2+n3;
      n1-=15;
      n1*=-1;
      printf("Final\n");
      printf("%.1f", n1);
    }else if(n2<n1 && n2<n3 || n2==n3 || n2==n1){
      n2=n1+n3;
      n2-=15;
      n2*=-1;
      printf("Final\n");
      printf("%.1f", n2);
    }else if(n3<n2 && n3<n1){
      n3=n1+n2;
      n3-=15;
      n3*=-1;
      printf("Final\n");
      printf("%.1f", n3);
    }
 }else{
    printf("Nao faz prova final");
 } 

return 0;  
}

int main(void) {
  float n1,n2,n3;

  scanf("%f %f %f", &n1, &n2, &n3);

  calcNota(n1,n2,n3);
  return 0;
}
