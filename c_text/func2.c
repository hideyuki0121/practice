#include <stdio.h>

int sqr(int x)
{
  return x * x;
}

int diff(int a, int b)
{
  return (a > b ) ? a - b : b - a;
}

int main(void)
{
  int x, y;

  puts("please enter two numbers");
  scanf("%d", &x);
  scanf("%d", &y);
  printf("%d\n", diff(sqr(x), sqr(y)));

  return 0;
}
