#include <stdio.h>

int main(void) {
   int n, menor, posicao_menor;
    scanf("%d", &n);
    int x[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &x[i]);
        if (i == 0 || x[i] < menor) {
            menor = x[i];
            posicao_menor = i;
        }
    }
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posicao_menor);
  
  return 0;
}
