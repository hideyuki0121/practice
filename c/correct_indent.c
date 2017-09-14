#include <stdio.h>
/*
  方針
  1,ファイルを読み込んで表示
  2,ファイルを編集
  3,編集したファイルを表示
  →方針変更　編集しつつ表示するようにする
  前提として、文法的に間違いのないプログラムを並べ替えるもの作成するものとする

  probrems
  ファイルの読み込み方法については勉強する
  →読み込みはできたが編集についてはまだ
  肝心の編集部分の関数について考えてない
  モチベーションが最底辺だったから少しでも考え続ける

  以上

*/

int null(void)
{
  //null文字を飛ばす（何もしない）
}

int main(void)
{
  // int ch;
  FILE *fp;
  char *p = 0;
  
  fp = fopen("subject.c", "r");

  if(fp == NULL) {
    printf("ファイルをオープンできませんでした\n");
    return 1;
  }
  printf("ファイルをオープンしました\n");
  /*  while ((ch = fgetc(fp)) != EOF)
      putchar(ch);
    
      fclose(fp);
  */

  char input_s[2048];
  int i;
  int buff;
  char ch;
  for (i = 0; i < 2047 && (buff = fgetc(fp)) != EOF; i++) {
    ch = (char)buff;
    input_s[i] = ch;
  }
  printf("%s", input_s);
  /* while(1){ */
  /*   if((ch = fgetc(fp)) == ' '); */
  /*   else if((buff = fgetc(fp)) != EOF) */
  /*     ch  = (char)buff; */
  /*     putchar(ch); */
  /* } */
  fclose(fp);
  return 0;
}
