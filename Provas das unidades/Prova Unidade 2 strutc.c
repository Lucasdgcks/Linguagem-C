#include <stdio.h>

#define MAX_FIGURAS 100

typedef enum {
    CIRCULO,
    QUADRADO
} Forma;

typedef struct {
    float x;
    float y;
} Posicao;

typedef struct {
    Forma forma;
    float tamanho;
    Posicao posicao;
} Figura;

typedef struct {
    int quantidade;
    Figura figuras[MAX_FIGURAS];
} Imagem;

int main() {
    Imagem imagem;
    imagem.quantidade = 0;

    // Adicionando um círculo
    imagem.figuras[0].forma = CIRCULO;
    imagem.figuras[0].tamanho = 5.0;
    imagem.figuras[0].posicao.x = 1.0;
    imagem.figuras[0].posicao.y = 2.0;
    imagem.quantidade++;

    // Adicionando um quadrado
    imagem.figuras[1].forma = QUADRADO;
    imagem.figuras[1].tamanho = 10.0;
    imagem.figuras[1].posicao.x = 3.0;
    imagem.figuras[1].posicao.y = 4.0;
    imagem.quantidade++;

    return 0;
}
#include <stdio.h>

#define MAX_FIGURAS 100

typedef enum {
    CIRCULO,
    QUADRADO
} Forma;

typedef struct {
    float x;
    float y;
} Posicao;

typedef struct {
    Forma forma;
    float tamanho;
    Posicao posicao;
} Figura;

typedef struct {
    int quantidade;
    Figura figuras[MAX_FIGURAS];
} Imagem;

void adicionarFigura(Imagem *imagem, Forma forma, float tamanho, float posX, float posY) {
    Figura novaFigura;
    novaFigura.forma = forma;
    novaFigura.tamanho = tamanho;
    novaFigura.posicao.x = posX;
    novaFigura.posicao.y = posY;

    imagem->figuras[imagem->quantidade] = novaFigura;
    imagem->quantidade++;
}

int main() {
    Imagem imagem;
    imagem.quantidade = 0;

    // Adicionando um círculo
    adicionarFigura(&imagem, CIRCULO, 5.0, 1.0, 2.0);

    // Adicionando um quadrado
    adicionarFigura(&imagem, QUADRADO, 10.0, 3.0, 4.0);

    return 0;
}
