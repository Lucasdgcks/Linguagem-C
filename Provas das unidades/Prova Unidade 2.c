#include <stdio.h>
#include <stdlib.h>

int* filtra_intervalo(int tam, int valores[tam], int min, int max, int *quantidade) {
    int *resultado = malloc(tam * sizeof(int));
    *quantidade = 0;
    for (int i = 0; i < tam; i++) {
        if (valores[i] >= min && valores[i] <= max) {
            resultado[*quantidade] = valores[i];
            (*quantidade)++;
        }
    }
    return resultado;
}

int main() {
    int n;
    scanf("%d", &n);

    int valores[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &valores[i]);
    }

    int min, max;
    scanf("%d %d", &min, &max);

    int quantidade;
    int *resultado = filtra_intervalo(n, valores, min, max, &quantidade);

    for (int i = 0; i < quantidade; i++) {
        printf("%d ", resultado[i]);
    }
    printf("\n");

    free(resultado);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int* filtra_intervalo(int tam, int val[tam], int min, int max, int* qtde) {
    int* res = malloc(tam * sizeof(int));
    *qtde = 0;

    for (int i = 0; i < tam; i++) {
        if (val[i] >= min && val[i] <= max) {
            res[*qtde] = val[i];
            (*qtde)++;
        }
    }

    return res;
}

int main() {
    int n;
    scanf("%d", &n);

    int val[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &val[i]);
    }

    int min, max;
    scanf("%d %d", &min, &max);

    int qtde;
    int* res = filtra_intervalo(n, val, min, max, &qtde);

    for (int i = 0; i < qtde; i++) {
        printf("%d ", res[i]);
    }
    printf("\n");

    free(res);
    return 0;
}

