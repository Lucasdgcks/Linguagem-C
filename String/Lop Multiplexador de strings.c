#include <stdio.h>
#include <string.h>

int main() {
    char str1[41];  
    char str2[41];
    char str3[41];
  int tamtotal, tamstr1, tamstr2;
     int i = 0;
    char c;
    while (1) {
        c = getchar();

        if (c == '\n' || c == EOF)
            break;

        if (i < 40) {
            str1[i] = c;
            i++;
        }
    }
    str1[i] = '\0';


    i = 0;
    while (1) {
        c = getchar();

        if (c == '\n' || c == EOF)
            break;

        if (i < 40) {
            str2[i] = c;
            i++;
        }
    }
    str2[i] = '\0';

   tamstr1 = strlen(str1);
   tamstr2 = strlen(str2);
   tamtotal = tamstr1 + tamstr2;
  int l = 1, g = 0;

   for(int k = 0; k<10; k++){
     str3[g] = str1[g];
     str3[l] = str2[l];
     g+=2;
     l+=2;
   }
   for(int k = 0; k<tamtotal; k++){
    printf("%s", str3);
   }
    return 0;
}
