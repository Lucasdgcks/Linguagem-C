#include <stdio.h>
int NumeroPerfeito(int N){
  int soma = 0;
  
  for(int i = 1;i<N; i++){
    int resto = N%i;
    if(resto==0){
      soma+=i;
    }
  }
   if(soma == N){
    return 1;
  }else{
    return 0;
  }
  
}
int main(void) {
 int L, N, resultado;

  scanf("%d", &L);
  for(int i = 1; i<=L; i++){
  scanf("%d", &N);
  resultado = NumeroPerfeito(N);
    if(resultado == 1){
    printf("%d eh perfeito\n", N);
  }else{
    printf("%d nao eh perfeito\n", N);
  }
}
   
  return 0;
}
