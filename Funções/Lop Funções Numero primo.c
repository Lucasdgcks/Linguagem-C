#include <stdio.h>

// Função para verificar se um número é primo
int ehPrimo(int x) {
  int i;
  // Verifica se o número é menor ou igual a 1
  if (x <= 1) {
    return 0; // Não é primo
  }
  // Verifica se o número é 2 ou 3
  if (x <= 3) {
    return 1; // É primo
  }
  // Verifica se o número é divisível por algum número de 2 até a sua raiz quadrada
  for (i = 2; i * i <= x; i++) {
    if (x % i == 0) {
      return 0; // Não é primo
    }
  }
  return 1; // É primo
}

int main() {
  int n, x, i;
  // Lê o número de casos de teste
  scanf("%d", &n);
  // Executa o loop para cada caso de teste
  for (i = 0; i < n; i++) {
    // Lê o número a ser verificado
    scanf("%d", &x);
    // Verifica se o número é primo e imprime o resultado
    if (ehPrimo(x)) {
      printf("%d eh primo\n", x);
    } else {
      printf("%d nao eh primo\n", x);
    }
  }
  return 0;
}
