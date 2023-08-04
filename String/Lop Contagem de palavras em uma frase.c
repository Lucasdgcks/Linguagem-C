#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
 char string[49];
  char caractere;
  int i = 0, c = 0;
  do{
    caractere = getchar();
    string[i] = caractere;
    i++;
  }while(caractere != '\n');
   string[i - 1] = '\0';
  int tamanho;
  tamanho = strlen(string);
  for(int j = 0; j<tamanho; j++){
    if(string[j] == ' '){
      c++;
    }
  }
  c++;
  printf("String contem %d palavra(s)\n", c);

}
