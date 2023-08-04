#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 41

int main(void) {
    char pattern[MAX_LENGTH];
    char text[MAX_LENGTH];

    // Leitura da primeira string
    fgets(pattern, sizeof(pattern), stdin);
    pattern[strcspn(pattern, "\n")] = '\0'; // Remover a quebra de linha

    // Leitura da segunda string
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0'; // Remover a quebra de linha

    // Converter as strings para letras min�sculas
    for (int i = 0; pattern[i] != '\0'; i++) {
        pattern[i] = tolower(pattern[i]);
    }
    for (int i = 0; text[i] != '\0'; i++) {
        text[i] = tolower(text[i]);
    }

    // Verifica��o de ocorr�ncias
    int count = 0;
    int positions[MAX_LENGTH]; // Array para armazenar as posi��es
    int index = 0;

    char *ptr = text;
    while ((ptr = strstr(ptr, pattern)) != NULL) {
        count++;
        positions[index++] = ptr - text;
        ptr++;
    }

    // Impress�o do resultado
    printf("Repeti��es: %d\n", count);
    if(count > 0){
    printf("Posi��es:");
    }
    for (int i = 0; i < index; i++) {
        printf(" %d", positions[i]);
    }
    printf("\n");

    return 0;
}
