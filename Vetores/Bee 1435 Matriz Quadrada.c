#include <stdio.h>

int main(void) {
  int dimensao;
    scanf("%d", &dimensao);

    int matriz[20][20];

    // Leitura da matriz
    for (int i = 0; i < dimensao; i++) {
        for (int j = 0; j < dimensao; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Cálculo da soma da diagonal principal
    int somaDiagonal = 0;
    for (int i = 0; i < dimensao; i++) {
        somaDiagonal += matriz[i][i];
    }

    // Imprimir o resultado
    printf("%d\n", somaDiagonal);

  return 0;
}