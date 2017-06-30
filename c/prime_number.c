#include <stdio.h>

int div(int x, int y) //与えられた数字で割れるか判断
{
  const int t = 1;
  const int f = 0;
  if(x % y == 0) //xがyで割り切れる
    return  t;
  else
    return f;
}

int judge(int a, int b) //素数判定器
{
  int i = 0;
  while(b > 1){
    if(div(a, b) == 1){
      //    printf("%d  %d\n", a, b);
      i++;
    }
    b--;
  }
  if(i == 0) //素数
    return 1;
  else
    return 0;
}

int main(void)
{
  int n;
  printf("calculate prime number!\n");
  printf("please enter a number\n> ");
  scanf("%d", &n);

  int i;
  for(i = 1; n > i; n--){
    int a = n;
    int b = n-1;
    if(judge( a, b) == 1)
      printf("%d is a prime number!\n", a);
  }
  return 0;
}
