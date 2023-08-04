#include <stdio.h>
int main(){
	
	int l;
	int i, j, c = 0;
	
	scanf("%i", &l);
	
	if(l <= 0){
	    printf("Você entrou com %i, tente de novo na próxima", l);//erro  do usuario
	}else{
	for(i=1; i <= l; i++){// primeiro loop para quebrar a linha sempre no final do loop
		for(j=1; j<=i; j++){// segundo loop para escrever os numeros
			c++;//numero que vai ser escrito sempre somando mais 1
			if(c<=9){//dar um espaço antes do 10 para formatar e ficar igual o triangulo floyd
			    printf(" ");
			}
			printf("%i ", c);
		}
	printf("\n");//local do quebra linha no final do primeiro loop(comentado la em cima)
	}
	}
	return 0;
}
