#include <stdio.h>
int main (){
  
  puts("calculate compound interest! ");
  puts("please enter these numbers!");
  
  int  p, n;
  double i;

  printf("how match your first money ?\n> ");  scanf("%d", &p);
  printf("how long?\n> ");  scanf("%d", &n);
  printf("parcentage each year(%%)\n> ");  scanf("%lf", &i);
  
  int y = 0;
  /*while(y < n){
    p = (double)p * (1.0 + 0.01 * i );
    y++;
  }
  */
  printf("your found will be %d yen by %d year(s).\n", p, n);
  
  y = 0;
  int k = p;
  int s = p;
  while(y < n){
    p = (double)p * (1.0 + 0.01 * i);
    k = (double)k + s *(0.01 * i);
    printf("%d %d yen.  %d %d yen.\n", y + 1, p, y + 1, k);
    y++;
  }
  
  printf("your found will be %d yen by %d year(s).\n", p, n);    
}
