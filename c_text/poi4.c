#include <stdio.h>

void swap(int *px, int *py)//入れ替える関数
{
  int temp = *px;
  *px = *py;
  *py = temp;
}

void sort(int *n1, int *n2)//比較する
{
  if(*n1 > *n2)
    swap(n1, n2);
}

void sort3(int *n1, int *n2, int  *n3)
{
  if(*n1 > *n2)
    swap(n1, n2);
  if(*n2 > *n3)
    swap(n2, n3);
  if(*n1 > *n2)
    swap(n1, n2);
}

int main(void)
{
  int na, nb, nc;

  puts("２つの整数を入力してください");
  printf("整数A");   scanf("%d", &na);
  printf("整数B");   scanf("%d", &nb);
  printf("整数C");   scanf("%d", &nc);

  sort3(&na, &nb, &nc);

  puts("これらの値を小さい順にソートしました");
  printf("整数Aは%dです\n", na);
  printf("整数Bは%dです\n", nb);
  printf("整数Cは%dです\n", nc);

  return 0;
}
