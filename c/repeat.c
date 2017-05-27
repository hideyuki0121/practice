#include <stdio.h>
int main(void)
{
  int retry;
  do{
    int no;
    printf("整数を入力してください\n > ");
    scanf("%d", &no);

    if(no % 2)
      puts("その数は奇数です");
    else
      puts("その数は偶数です");

    printf("もう一度？[YES...0/NO...9]\n > ");
    scanf("%d", &retry);
  }while(retry == 0);

  return 0;
}
