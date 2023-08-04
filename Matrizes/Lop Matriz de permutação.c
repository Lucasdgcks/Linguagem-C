#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);
  int matriz[n][n];
  for(int i = 0; i<n; i++){
    for(int j = 0; j<n; j++){
      scanf("%d", &matriz[i][j]);
    }
  }
   int ehPermutacao = 1;
    for (int i = 0; i < n; i++) {
        int countLinhas = 0;
        int countColunas = 0;

        for (int j = 0; j < n; j++) {
            countLinhas += matriz[i][j];
            countColunas += matriz[j][i];
        }

        if (countLinhas != 1 || countColunas != 1) {
            ehPermutacao = 0; // Não é uma matriz de permutação
            break;
        }
    }

    // Imprimir o resultado
    printf("%d\n", ehPermutacao);
  return 0;
}
