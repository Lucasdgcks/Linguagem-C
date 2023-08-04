#include <stdio.h>

void imprimeIntervalo(int a, int b) {
    for (int i = a; i <= b; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int a, b;
    while (1) {
        scanf("%d %d", &a, &b);
        if (a >= b) {
            break;
        }
        imprimeIntervalo(a, b);
    }
    return 0;
}
