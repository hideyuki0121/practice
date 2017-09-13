#include <stdio.h>
/*
方針
1,ファイルを読み込んで表示
2,ファイルを編集
3,編集したファイルを表示

問題点
ファイルの読み込み方法については勉強する
肝心の編集部分の関数について考えてない
モチベーションが最底辺だったから少しでも考え続ける

以上

*/
int main(void)
{
  int ch;
  FILE *fp;

  fp = fopen("subject.c", "r");

  if(fp == NULL)
    printf("ファイルをオープンできませんでした\n");
  else{
    printf("ファイルをオープンしました\n");
    while ((ch = fgetc(fp)) != EOF)
      putchar(ch);
    
    fclose(fp);
    puts("ファイルをクローズしました");
  }
  return 0;
}
