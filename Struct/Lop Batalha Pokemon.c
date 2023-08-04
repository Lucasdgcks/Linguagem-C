#include <stdio.h>
#include <stdbool.h>
struct pokemon {
  char nome[50];
  int id;
  int ataque;
  int vida;
};

int main(void) {
  int resultadored, resultadoblue;
  struct pokemon red[6];
  int maiorAtaqueRed = 0;
  int indiceRed = 0;
  struct pokemon blue[6];
  int maiorAtaqueBlue = 0;
  int indiceBlue = 0;

  for (int i = 0; i < 6; i++) {
    scanf("%s", red[i].nome);
    scanf("%d", &red[i].id);
    scanf("%d", &red[i].ataque);
    scanf("%d", &red[i].vida);

    if (red[i].ataque > maiorAtaqueRed || (red[i].ataque == maiorAtaqueRed && red[i].id < red[indiceRed].id)) {
      maiorAtaqueRed = red[i].ataque;
      indiceRed = i;
    }
  }

  for (int i = 0; i < 6; i++) {
    scanf("%s", blue[i].nome);
    scanf("%d", &blue[i].id);
    scanf("%d", &blue[i].ataque);
    scanf("%d", &blue[i].vida);

    if (blue[i].ataque > maiorAtaqueBlue || (blue[i].ataque == maiorAtaqueBlue && blue[i].id < blue[indiceBlue].id)) {
      maiorAtaqueBlue = blue[i].ataque;
      indiceBlue = i;
    }
  }

  printf("Pokemon do Red: %s\n", red[indiceRed].nome);

  printf("Pokemon do Blue: %s\n", blue[indiceBlue].nome);
  
bool empate = true;
  while (red[indiceRed].vida > 0 && blue[indiceBlue].vida > 0) {
    red[indiceRed].vida -= blue[indiceBlue].ataque;
    blue[indiceBlue].vida -= red[indiceRed].ataque;
  }

  if (red[indiceRed].vida <= 0 && blue[indiceBlue].vida <= 0) {
    printf("Empate!\n");
  } else if (red[indiceRed].vida <= 0) {
    printf("Vencedor:Blue\n");
  } else {
    printf("Vencedor:Red\n");
  }

  return 0;
}
