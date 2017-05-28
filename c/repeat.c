#include <stdio.h>
int main(void)
{
  int retry;
  do {
    int no;
    printf("整数を入力してください\n > ");
    scanf("%d", &no);

    if(no % 2)
      puts("その数は奇数です");
    else
      puts("その数は偶数です");

    printf("もう一度？[YES...0/NO...9]\n > ");
    scanf("%d", &retry);
  } while(retry == 0);
  
  //整数値を次々入力して、合計と平均を出すプログラム
  int sum = 0;
  int cnt = 0;
  int num;

  do {
    int t;
    
    printf("整数を入力してください\n > ");
    scanf("%d", &t);

    sum += t;
    cnt++;

    printf("まだやるの？[YES...0/NO...9]\n > ");
    scanf("%d", &num);
    
  } while(num == 0);

  printf("合計は%dで平均は%.2fです。\n", sum, (double)sum / cnt);
  
  return 0;
}
