#include <stdio.h>
int main(void)
{
  int no;
  printf("整数を入力してください\n>");

  scanf("%d",&no);
  if(no % 2)
    puts("その数は奇数です");
  else
    puts("その数は偶数です");

  int num;
  
  printf("整数を入力してください\n> ");

  scanf("%d", &num);

  if(num == 0)
    puts("その数は0です");
  else if(num > 0)
    puts("その数は正の数です");
  else
    puts("その数は負の数です");

  int n1, n2, n3;

  puts("数字の大きさの比較をします\n整数を三つ入力してください\n>");
  scanf("%d",&n1);
  scanf("%d",&n2);
  scanf("%d",&n3);

  int max = n1;
  if(n2 > max)
    max = n2;
  if(n3 > max)
    max = n3;

  int min = n1;
  if(n2 < min)
    min = n2;
  if(n3 < min)
    min = n3;
  
  printf("最大値は%d、最小値は%dです。", max ,min);

  return 0;
}

