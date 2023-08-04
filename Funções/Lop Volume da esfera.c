#include <stdio.h>
float VolumeEsfera(double x){
  float volume, X;
  X = x*x*x;
  return volume = (4*3.1416*X)/3.0;
  
}
int main(void) {
  double x, res;
  for(int i = 0; i<3; i++){
  scanf("%lf", &x);
  res = VolumeEsfera(x);
  printf("%.2lf\n", res);
  }
  return 0;
}
