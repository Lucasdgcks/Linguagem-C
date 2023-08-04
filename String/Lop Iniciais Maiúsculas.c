#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void) {
  char texto [60];
  char caractere;
  int i = 0, TamStr;
  do {
    caractere = getchar();
    texto[i] = caractere;
    i++;
    
  }while(caractere != '\n');
  texto[i - 1] = '\0';
  
   TamStr = strlen(texto);
   
    
    for(i=0; i<TamStr; i++)
    { 
     if(texto[i] != ' '){
       texto[i] = tolower(texto[i]);
     }
    } 
    texto[0] = toupper(texto[0]);
     for(i=0; i<TamStr; i++){ 
       if(texto[i] == ' '){
      texto[i + 1] = toupper (texto[i + 1]);  
     }
     
    } 
    
    printf("%s",texto);
   
  return 0;
}
