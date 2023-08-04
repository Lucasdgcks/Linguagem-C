#include <stdio.h>

int main(void) {
  
    struct veiculo
    {
        char modelo[50];
        char marca[50];
        int ano;
        float preco;
    };
    struct veiculo um;
    scanf("%s", um.modelo);
    scanf("%s", um.marca);
    scanf("%d", &um.ano);
    scanf("%f", &um.preco);
    struct veiculo dois;
    scanf("%s", dois.modelo);
    scanf("%s", dois.marca);
    scanf("%i", &dois.ano);
    scanf("%f", &dois.preco);

   if(um.ano != dois.ano){
     if(um.ano < dois.ano){
       printf("%s %s", um.marca, um.modelo);
     }else{
       printf("%s %s", dois.marca, dois.modelo);
     }
   }else{
     if(um.preco < dois.preco){
       printf("%s %s", um.marca, um.modelo);
     }else{
     printf("%s %s", dois.marca, dois.modelo);
     }
   }
   

  return 0;
}
