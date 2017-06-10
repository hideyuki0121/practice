#include <stdio.h>
int main(void)
{
  /* int retry;
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

  //読み込んだ正の整数値までカウントアップ

  int i, n;

  printf("カウントアップします。正の整数を入力してください\n> ");
  scanf("%d", &n);

  i = 0;
  while(i <= n){
    printf("%d\n", i++);
  }
  printf("\n");
 */  
  //＊を連続表示

  int n2;

  printf("正の整数を入力してください\n > ");
  scanf("%d", &n2);

  while (n2-- > 0)
    putchar('*');
  putchar('\n');

  int no2;

  do {
    printf("正の整数を入力してください\n > ");
    scanf("%d", &no2);
    if (no2 <= 0)
      puts("正の数以外を入れないでください ");
  }while(no2 <= 0);

  printf("逆から読むと");
  while(no2  > 0){
    printf("%d", no2 % 10);
    no2 /= 10;
  }
  
  puts("ってなるけどそれがどうした？");

  int i, j;


  puts("20掛ける20の計算の表示をします");
  for(i = 1; i <= 20; i++){
    for(j = 1; j <= 20; j++)
      printf("%3d ", i * j);
    putchar('\n');

  }
  
  return 0;
}
