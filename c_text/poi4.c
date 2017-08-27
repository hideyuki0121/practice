#include <stdio.h>

void swap(int *px, int *py)//入れ替える関数
{
  int temp = *px;
  *px = *py;
  *py = temp;
}

int main(void)
{
  int na, nb;

  puts("２つの整数を入力してください");
  printf("整数A");   scanf("%d", &na);
  printf("整数B");   scanf("%d", &nb);

  swap(&na, &nb);

  puts("これらの値を交換しました");
  printf("整数Aは%dです\n", na);
  printf("整数Bは%dです\n", nb);

  return 0;
}
