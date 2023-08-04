#include <stdio.h>

int maior(int x, int y) {
    if (x > y) {
        return x;
    } else {
        return y;
    }
}

int menor(int x, int y) {
    if (x < y) {
        return x;
    } else {
        return y;
    }
}

int main() {
    int numeros[15];
    int i;
    int maior_valor;
    int menor_valor;

    // Leitura dos 15 valores numéricos
    for (i = 0; i < 15; i++) {
        scanf("%d", &numeros[i]);
    }

    // Encontrando o maior e o menor valor
    maior_valor = numeros[0];
    menor_valor = numeros[0];
    for (i = 1; i < 15; i++) {
        maior_valor = maior(maior_valor, numeros[i]);
        menor_valor = menor(menor_valor, numeros[i]);
    }

    // Apresentando o resultado
    printf("Maior: %d\n", maior_valor);
    printf("Menor: %d\n", menor_valor);

    return 0;
}
