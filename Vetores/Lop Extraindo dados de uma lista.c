#include <stdio.h>

int main() {
    int lista[100], num, tam = 0, i, j;
    char opcao;

    // loop para inserir n�meros na lista
    do {
        
        scanf("%d", &num);
        tam++; // aumenta o tamanho da lista
        lista[tam-1] = num; // adiciona o novo n�mero na lista

        
        scanf(" %c", &opcao);
    } while (opcao == 'S' || opcao == 's');

    // exibe o total de n�meros na lista
    printf("A sua lista possui um total de %d n�meros.\n", tam);

    // ordena a lista em ordem crescente
    for (i = 0; i < tam-1; i++) {
        for (j = i+1; j < tam; j++) {
            if (lista[i] > lista[j]) {
                int temp = lista[i];
                lista[i] = lista[j];
                lista[j] = temp;
            }
        }
    }

    // exibe a lista em ordem crescente
    printf("A lista em ordem crescente �: [");
    for (i = 0; i < tam; i++) {
        printf("%d", lista[i]);
        if (i < tam-1) {
            printf(", ");
        }
    }
    printf("]\n");

    // ordena a lista em ordem decrescente
    for (i = 0; i < tam-1; i++) {
        for (j = i+1; j < tam; j++) {
            if (lista[i] < lista[j]) {
                int temp = lista[i];
                lista[i] = lista[j];
                lista[j] = temp;
            }
        }
    }

    // exibe a lista em ordem decrescente
    printf("A lista em ordem decrescente �: [");
    for (i = 0; i < tam; i++) {
        printf("%d", lista[i]);
        if (i < tam-1) {
            printf(", ");
        }
    }
    printf("]\n");

    // verifica se o valor 5 est� na lista
    int encontrado = 0;
    for (i = 0; i < tam; i++) {
        if (lista[i] == 5) {
            encontrado = 1;
            break;
        }
    }
    if (encontrado) {
        printf("O valor 5 foi digitado.\n");
    } else {
        printf("O valor 5 n�o foi digitado.\n");
    }

    return 0;
}
