#include <stdio.h>
#include <math.h>

int main(void) {
  float n = 10;
  int v;
  float va = 0;
  float vh = 0;
  float vg = 1; 
  float EH, EG, EM, ma, mg, mh;

  for(int i = 0;i<n; i++){
    scanf("%d", &v);
    va+=v; //soma os valores de v(numeros recebidos do usuario)
    vg*=v; //multiplica os valores de v
    vh+=pow(v, -1); // pega cada v e exponencia a -1 sendo assim fica v**-1(faz parte da formula da media harmonica)
    
  }
  

  ma = va/10;   //formula Media aritmetica
  printf("Média aritmética é %.2f\n", ma); 
  
  mh = 10/vh;   //formula Media harmonica
  printf("Média harmônica é  %.2f\n", mh);
  
  mg = pow(vg, 0.1); //formula Media geometrica
  printf("Média geométrica é %.2f\n", mg);

  //formulas dadas pela questao pra calcular erro medio logo abaixo
  EH = (mh-ma)/ma;
  EG = (mg-ma)/ma;
  EM = (EH+EG)/2;
  char fim = '%'; 

  printf("Erro médio é %.2f", EM*100);
  printf("%c", fim);

  //tudo certo, porem no lop deu um erro, provavelmente de posicao das letras. (bug do lop)

  return 0;
}
