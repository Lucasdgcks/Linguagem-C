#include <stdio.h>
int LevelLesma(int x){
  if(x < 10){
    return 1;
  }else if(x >= 10 && x < 20){
    return 2;
  }else if (x >= 20){
    return 3;
  }
}
int main(void) {
  int n, v, res, c1 = 0,c2 = 0, c3 = 0 ;
  scanf("%d", &n);
  for(int i = 1; i<=n; i++){
    scanf("%d", &v);
    res = LevelLesma(v);
    if(res == 1){
      c1++;
    }else if (res == 2){
      c2++;
    }else if(res == 3){
      c3++;
    }
  }
  if(c3 > 0){
    printf("Level 3\n");
  }else if(c2 > 0 && c3 == 0){
    printf("Level 2\n");
  }else if(c1 > 0 && c2 == 0 && c3 == 0){
    printf("Level 1\n");
  }
  return 0;
}
