#include <stdio.h>

double power(double x, int n)
{
  int i;
  double tmp = 1.0;

  for (i = 1; i <= n; i++)
    tmp *= x;
  return tmp;
}

int main(void)
{
  double a;
  int b;

  printf("aのb乗を求める\n");
  printf("a\n> "); scanf("%lf", &a);
  printf("b\n> "); scanf("%d", &b);

  printf("%.2fの%d乗は%.2fです\n", a, b, power(a, b));

  return 0;
}
