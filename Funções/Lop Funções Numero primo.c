#include <stdio.h>

// Fun��o para verificar se um n�mero � primo
int ehPrimo(int x) {
  int i;
  // Verifica se o n�mero � menor ou igual a 1
  if (x <= 1) {
    return 0; // N�o � primo
  }
  // Verifica se o n�mero � 2 ou 3
  if (x <= 3) {
    return 1; // � primo
  }
  // Verifica se o n�mero � divis�vel por algum n�mero de 2 at� a sua raiz quadrada
  for (i = 2; i * i <= x; i++) {
    if (x % i == 0) {
      return 0; // N�o � primo
    }
  }
  return 1; // � primo
}

int main() {
  int n, x, i;
  // L� o n�mero de casos de teste
  scanf("%d", &n);
  // Executa o loop para cada caso de teste
  for (i = 0; i < n; i++) {
    // L� o n�mero a ser verificado
    scanf("%d", &x);
    // Verifica se o n�mero � primo e imprime o resultado
    if (ehPrimo(x)) {
      printf("%d eh primo\n", x);
    } else {
      printf("%d nao eh primo\n", x);
    }
  }
  return 0;
}
