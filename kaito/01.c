#include <stdio.h>

int main(void){
  /*
  printf("abcd\n");

  int x = 10;//10
  int y = x + 10;//20
  printf("%d\n%d\n", x, y);

  y = y + x;//30
  printf("%d\n%d\n", x, y);

  int z;
  scanf("%d", &z);
  printf("入力した数字は%dです\n", z);
  */
  puts("abcd");

  printf("%d\n", 10 % 10);

  int a;
  

  scanf("%d", &a);
  
  int b = a % 5;
  
  if(b == 0){
    printf("割り切れたよ\n");
  }else{
    printf("割り切れないよ\n");
  }

  /* 
  int c = 0;
  for(int i = 0; a > i; i++){

    printf("%d\n", ++c);
    
  }
  */

  int c = 0;
  int i =0;

  while(a > i){

    printf("%d\n", ++c);

    i++;
  }
  
  
  return 0;
}
